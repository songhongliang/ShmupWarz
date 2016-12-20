/* CollisionSystem.c generated by valac 0.34.4, the Vala compiler
 * generated from CollisionSystem.gs, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <Entitas.h>
#include <Bosco.h>
#include <float.h>
#include <math.h>


#define SHMUP_WARZ_TYPE_COLLISION_SYSTEM (shmup_warz_collision_system_get_type ())
#define SHMUP_WARZ_COLLISION_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_COLLISION_SYSTEM, ShmupWarzCollisionSystem))
#define SHMUP_WARZ_COLLISION_SYSTEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_COLLISION_SYSTEM, ShmupWarzCollisionSystemClass))
#define SHMUP_WARZ_IS_COLLISION_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_COLLISION_SYSTEM))
#define SHMUP_WARZ_IS_COLLISION_SYSTEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_COLLISION_SYSTEM))
#define SHMUP_WARZ_COLLISION_SYSTEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_COLLISION_SYSTEM, ShmupWarzCollisionSystemClass))

typedef struct _ShmupWarzCollisionSystem ShmupWarzCollisionSystem;
typedef struct _ShmupWarzCollisionSystemClass ShmupWarzCollisionSystemClass;
typedef struct _ShmupWarzCollisionSystemPrivate ShmupWarzCollisionSystemPrivate;

#define SHMUP_WARZ_TYPE_GAME (shmup_warz_game_get_type ())
#define SHMUP_WARZ_GAME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_GAME, ShmupWarzGame))
#define SHMUP_WARZ_GAME_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_GAME, ShmupWarzGameClass))
#define SHMUP_WARZ_IS_GAME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_GAME))
#define SHMUP_WARZ_IS_GAME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_GAME))
#define SHMUP_WARZ_GAME_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_GAME, ShmupWarzGameClass))

typedef struct _ShmupWarzGame ShmupWarzGame;
typedef struct _ShmupWarzGameClass ShmupWarzGameClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SHMUP_WARZ_TYPE_COMPONENT (shmup_warz_component_get_type ())

#define SHMUP_WARZ_TYPE_POSITION_COMPONENT (shmup_warz_position_component_get_type ())
#define SHMUP_WARZ_POSITION_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_POSITION_COMPONENT, ShmupWarzPositionComponent))
#define SHMUP_WARZ_POSITION_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_POSITION_COMPONENT, ShmupWarzPositionComponentClass))
#define SHMUP_WARZ_IS_POSITION_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_POSITION_COMPONENT))
#define SHMUP_WARZ_IS_POSITION_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_POSITION_COMPONENT))
#define SHMUP_WARZ_POSITION_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_POSITION_COMPONENT, ShmupWarzPositionComponentClass))

typedef struct _ShmupWarzPositionComponent ShmupWarzPositionComponent;
typedef struct _ShmupWarzPositionComponentClass ShmupWarzPositionComponentClass;

#define SHMUP_WARZ_TYPE_BOUNDS_COMPONENT (shmup_warz_bounds_component_get_type ())
#define SHMUP_WARZ_BOUNDS_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_BOUNDS_COMPONENT, ShmupWarzBoundsComponent))
#define SHMUP_WARZ_BOUNDS_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_BOUNDS_COMPONENT, ShmupWarzBoundsComponentClass))
#define SHMUP_WARZ_IS_BOUNDS_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_BOUNDS_COMPONENT))
#define SHMUP_WARZ_IS_BOUNDS_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_BOUNDS_COMPONENT))
#define SHMUP_WARZ_BOUNDS_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_BOUNDS_COMPONENT, ShmupWarzBoundsComponentClass))

typedef struct _ShmupWarzBoundsComponent ShmupWarzBoundsComponent;
typedef struct _ShmupWarzBoundsComponentClass ShmupWarzBoundsComponentClass;
typedef struct _ShmupWarzPositionComponentPrivate ShmupWarzPositionComponentPrivate;
typedef struct _ShmupWarzBoundsComponentPrivate ShmupWarzBoundsComponentPrivate;

#define SHMUP_WARZ_TYPE_HEALTH_COMPONENT (shmup_warz_health_component_get_type ())
#define SHMUP_WARZ_HEALTH_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHMUP_WARZ_TYPE_HEALTH_COMPONENT, ShmupWarzHealthComponent))
#define SHMUP_WARZ_HEALTH_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHMUP_WARZ_TYPE_HEALTH_COMPONENT, ShmupWarzHealthComponentClass))
#define SHMUP_WARZ_IS_HEALTH_COMPONENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHMUP_WARZ_TYPE_HEALTH_COMPONENT))
#define SHMUP_WARZ_IS_HEALTH_COMPONENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHMUP_WARZ_TYPE_HEALTH_COMPONENT))
#define SHMUP_WARZ_HEALTH_COMPONENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHMUP_WARZ_TYPE_HEALTH_COMPONENT, ShmupWarzHealthComponentClass))

typedef struct _ShmupWarzHealthComponent ShmupWarzHealthComponent;
typedef struct _ShmupWarzHealthComponentClass ShmupWarzHealthComponentClass;
typedef struct _ShmupWarzHealthComponentPrivate ShmupWarzHealthComponentPrivate;

struct _ShmupWarzCollisionSystem {
	GObject parent_instance;
	ShmupWarzCollisionSystemPrivate * priv;
};

struct _ShmupWarzCollisionSystemClass {
	GObjectClass parent_class;
};

struct _ShmupWarzCollisionSystemPrivate {
	EntitasWorld* _world;
	ShmupWarzGame* _game;
	EntitasGroup* _bullets;
	EntitasGroup* _enemies;
};

typedef enum  {
	SHMUP_WARZ_COMPONENT_Bounds,
	SHMUP_WARZ_COMPONENT_Bullet,
	SHMUP_WARZ_COMPONENT_ColorTween,
	SHMUP_WARZ_COMPONENT_Destroy,
	SHMUP_WARZ_COMPONENT_Enemy,
	SHMUP_WARZ_COMPONENT_Expires,
	SHMUP_WARZ_COMPONENT_Firing,
	SHMUP_WARZ_COMPONENT_Health,
	SHMUP_WARZ_COMPONENT_Layer,
	SHMUP_WARZ_COMPONENT_Life,
	SHMUP_WARZ_COMPONENT_Mine,
	SHMUP_WARZ_COMPONENT_Mouse,
	SHMUP_WARZ_COMPONENT_Player,
	SHMUP_WARZ_COMPONENT_Position,
	SHMUP_WARZ_COMPONENT_Resource,
	SHMUP_WARZ_COMPONENT_ScaleTween,
	SHMUP_WARZ_COMPONENT_Scale,
	SHMUP_WARZ_COMPONENT_Score,
	SHMUP_WARZ_COMPONENT_SoundEffect,
	SHMUP_WARZ_COMPONENT_Text,
	SHMUP_WARZ_COMPONENT_Tint,
	SHMUP_WARZ_COMPONENT_Velocity,
	SHMUP_WARZ_COMPONENT_ComponentsCount
} ShmupWarzComponent;

struct _ShmupWarzPositionComponent {
	GObject parent_instance;
	ShmupWarzPositionComponentPrivate * priv;
	gdouble x;
	gdouble y;
};

struct _ShmupWarzPositionComponentClass {
	GObjectClass parent_class;
};

struct _ShmupWarzBoundsComponent {
	GObject parent_instance;
	ShmupWarzBoundsComponentPrivate * priv;
	gdouble radius;
};

struct _ShmupWarzBoundsComponentClass {
	GObjectClass parent_class;
};

struct _ShmupWarzHealthComponent {
	GObject parent_instance;
	ShmupWarzHealthComponentPrivate * priv;
	gdouble health;
	gdouble maximumHealth;
};

struct _ShmupWarzHealthComponentClass {
	GObjectClass parent_class;
};


static gpointer shmup_warz_collision_system_parent_class = NULL;
static EntitasISystemIface* shmup_warz_collision_system_entitas_isystem_parent_iface = NULL;
static EntitasISetWorldIface* shmup_warz_collision_system_entitas_iset_world_parent_iface = NULL;
static EntitasIInitializeSystemIface* shmup_warz_collision_system_entitas_iinitialize_system_parent_iface = NULL;
static EntitasIExecuteSystemIface* shmup_warz_collision_system_entitas_iexecute_system_parent_iface = NULL;

GType shmup_warz_collision_system_get_type (void) G_GNUC_CONST;
GType shmup_warz_game_get_type (void) G_GNUC_CONST;
#define SHMUP_WARZ_COLLISION_SYSTEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SHMUP_WARZ_TYPE_COLLISION_SYSTEM, ShmupWarzCollisionSystemPrivate))
enum  {
	SHMUP_WARZ_COLLISION_SYSTEM_DUMMY_PROPERTY
};
ShmupWarzCollisionSystem* shmup_warz_collision_system_new (ShmupWarzGame* game);
ShmupWarzCollisionSystem* shmup_warz_collision_system_construct (GType object_type, ShmupWarzGame* game);
static void shmup_warz_collision_system_real_setWorld (EntitasISetWorld* base, EntitasWorld* world);
static void shmup_warz_collision_system_real_initialize (EntitasIInitializeSystem* base);
GType shmup_warz_component_get_type (void) G_GNUC_CONST;
static void shmup_warz_collision_system_real_execute (EntitasIExecuteSystem* base);
gboolean shmup_warz_collision_system_collisionExists (ShmupWarzCollisionSystem* self, EntitasEntity* e1, EntitasEntity* e2);
void shmup_warz_collision_system_handleCollision (ShmupWarzCollisionSystem* self, EntitasEntity* bullet, EntitasEntity* ship);
GType shmup_warz_position_component_get_type (void) G_GNUC_CONST;
ShmupWarzPositionComponent* shmup_warz_getPosition (EntitasEntity* e);
GType shmup_warz_bounds_component_get_type (void) G_GNUC_CONST;
ShmupWarzBoundsComponent* shmup_warz_getBounds (EntitasEntity* e);
GType shmup_warz_health_component_get_type (void) G_GNUC_CONST;
ShmupWarzHealthComponent* shmup_warz_getHealth (EntitasEntity* e);
EntitasEntity* shmup_warz_createBang (gdouble x, gdouble y);
EntitasEntity* shmup_warz_createParticle (gdouble x, gdouble y);
gboolean shmup_warz_isDestroy (EntitasEntity* e);
EntitasEntity* shmup_warz_setDestroy (EntitasEntity* e, gboolean value);
EntitasEntity* shmup_warz_createExplosion (gdouble x, gdouble y);
static void shmup_warz_collision_system_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


ShmupWarzCollisionSystem* shmup_warz_collision_system_construct (GType object_type, ShmupWarzGame* game) {
	ShmupWarzCollisionSystem * self = NULL;
	ShmupWarzGame* _tmp0_ = NULL;
	ShmupWarzGame* _tmp1_ = NULL;
	g_return_val_if_fail (game != NULL, NULL);
	self = (ShmupWarzCollisionSystem*) g_object_new (object_type, NULL);
	_tmp0_ = game;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_game);
	self->priv->_game = _tmp1_;
	return self;
}


ShmupWarzCollisionSystem* shmup_warz_collision_system_new (ShmupWarzGame* game) {
	return shmup_warz_collision_system_construct (SHMUP_WARZ_TYPE_COLLISION_SYSTEM, game);
}


static void shmup_warz_collision_system_real_setWorld (EntitasISetWorld* base, EntitasWorld* world) {
	ShmupWarzCollisionSystem * self;
	EntitasWorld* _tmp0_ = NULL;
	EntitasWorld* _tmp1_ = NULL;
	self = (ShmupWarzCollisionSystem*) base;
	g_return_if_fail (world != NULL);
	_tmp0_ = world;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_world);
	self->priv->_world = _tmp1_;
}


static void shmup_warz_collision_system_real_initialize (EntitasIInitializeSystem* base) {
	ShmupWarzCollisionSystem * self;
	EntitasWorld* _tmp0_ = NULL;
	gint* _tmp1_ = NULL;
	gint* _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	EntitasIMatcher* _tmp3_ = NULL;
	EntitasIMatcher* _tmp4_ = NULL;
	EntitasGroup* _tmp5_ = NULL;
	EntitasWorld* _tmp6_ = NULL;
	gint* _tmp7_ = NULL;
	gint* _tmp8_ = NULL;
	gint _tmp8__length1 = 0;
	EntitasIMatcher* _tmp9_ = NULL;
	EntitasIMatcher* _tmp10_ = NULL;
	EntitasGroup* _tmp11_ = NULL;
	self = (ShmupWarzCollisionSystem*) base;
	_tmp0_ = self->priv->_world;
	_tmp1_ = g_new0 (gint, 1);
	_tmp1_[0] = (gint) SHMUP_WARZ_COMPONENT_Bullet;
	_tmp2_ = _tmp1_;
	_tmp2__length1 = 1;
	_tmp3_ = entitas_matcher_AllOf (_tmp2_, 1);
	_tmp4_ = _tmp3_;
	_tmp5_ = entitas_world_getGroup (_tmp0_, _tmp4_);
	_g_object_unref0 (self->priv->_bullets);
	self->priv->_bullets = _tmp5_;
	_g_object_unref0 (_tmp4_);
	_tmp2_ = (g_free (_tmp2_), NULL);
	_tmp6_ = self->priv->_world;
	_tmp7_ = g_new0 (gint, 1);
	_tmp7_[0] = (gint) SHMUP_WARZ_COMPONENT_Enemy;
	_tmp8_ = _tmp7_;
	_tmp8__length1 = 1;
	_tmp9_ = entitas_matcher_AllOf (_tmp8_, 1);
	_tmp10_ = _tmp9_;
	_tmp11_ = entitas_world_getGroup (_tmp6_, _tmp10_);
	_g_object_unref0 (self->priv->_enemies);
	self->priv->_enemies = _tmp11_;
	_g_object_unref0 (_tmp10_);
	_tmp8_ = (g_free (_tmp8_), NULL);
}


static void shmup_warz_collision_system_real_execute (EntitasIExecuteSystem* base) {
	ShmupWarzCollisionSystem * self;
	EntitasGroup* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	EntitasEntity** _tmp2_ = NULL;
	self = (ShmupWarzCollisionSystem*) base;
	_tmp0_ = self->priv->_bullets;
	_tmp2_ = entitas_group_getEntities (_tmp0_, &_tmp1_);
	{
		EntitasEntity** entityA_collection = NULL;
		gint entityA_collection_length1 = 0;
		gint _entityA_collection_size_ = 0;
		gint entityA_it = 0;
		entityA_collection = _tmp2_;
		entityA_collection_length1 = _tmp1_;
		for (entityA_it = 0; entityA_it < _tmp1_; entityA_it = entityA_it + 1) {
			EntitasEntity* _tmp3_ = NULL;
			EntitasEntity* entityA = NULL;
			_tmp3_ = _g_object_ref0 (entityA_collection[entityA_it]);
			entityA = _tmp3_;
			{
				EntitasGroup* _tmp4_ = NULL;
				gint _tmp5_ = 0;
				EntitasEntity** _tmp6_ = NULL;
				_tmp4_ = self->priv->_enemies;
				_tmp6_ = entitas_group_getEntities (_tmp4_, &_tmp5_);
				{
					EntitasEntity** entityB_collection = NULL;
					gint entityB_collection_length1 = 0;
					gint _entityB_collection_size_ = 0;
					gint entityB_it = 0;
					entityB_collection = _tmp6_;
					entityB_collection_length1 = _tmp5_;
					for (entityB_it = 0; entityB_it < _tmp5_; entityB_it = entityB_it + 1) {
						EntitasEntity* _tmp7_ = NULL;
						EntitasEntity* entityB = NULL;
						_tmp7_ = _g_object_ref0 (entityB_collection[entityB_it]);
						entityB = _tmp7_;
						{
							EntitasEntity* _tmp8_ = NULL;
							EntitasEntity* _tmp9_ = NULL;
							gboolean _tmp10_ = FALSE;
							_tmp8_ = entityA;
							_tmp9_ = entityB;
							_tmp10_ = shmup_warz_collision_system_collisionExists (self, _tmp8_, _tmp9_);
							if (_tmp10_) {
								EntitasEntity* _tmp11_ = NULL;
								EntitasEntity* _tmp12_ = NULL;
								_tmp11_ = entityA;
								_tmp12_ = entityB;
								shmup_warz_collision_system_handleCollision (self, _tmp11_, _tmp12_);
							}
							_g_object_unref0 (entityB);
						}
					}
					entityB_collection = (_vala_array_free (entityB_collection, entityB_collection_length1, (GDestroyNotify) g_object_unref), NULL);
				}
				_g_object_unref0 (entityA);
			}
		}
		entityA_collection = (_vala_array_free (entityA_collection, entityA_collection_length1, (GDestroyNotify) g_object_unref), NULL);
	}
}


gboolean shmup_warz_collision_system_collisionExists (ShmupWarzCollisionSystem* self, EntitasEntity* e1, EntitasEntity* e2) {
	gboolean result = FALSE;
	gboolean _result_ = FALSE;
	gboolean _tmp0_ = FALSE;
	EntitasEntity* _tmp1_ = NULL;
	ShmupWarzPositionComponent* p1 = NULL;
	EntitasEntity* _tmp3_ = NULL;
	ShmupWarzPositionComponent* _tmp4_ = NULL;
	ShmupWarzPositionComponent* p2 = NULL;
	EntitasEntity* _tmp5_ = NULL;
	ShmupWarzPositionComponent* _tmp6_ = NULL;
	ShmupWarzBoundsComponent* b1 = NULL;
	EntitasEntity* _tmp7_ = NULL;
	ShmupWarzBoundsComponent* _tmp8_ = NULL;
	ShmupWarzBoundsComponent* b2 = NULL;
	EntitasEntity* _tmp9_ = NULL;
	ShmupWarzBoundsComponent* _tmp10_ = NULL;
	gdouble a = 0.0;
	ShmupWarzPositionComponent* _tmp11_ = NULL;
	gdouble _tmp12_ = 0.0;
	ShmupWarzPositionComponent* _tmp13_ = NULL;
	gdouble _tmp14_ = 0.0;
	gdouble b = 0.0;
	ShmupWarzPositionComponent* _tmp15_ = NULL;
	gdouble _tmp16_ = 0.0;
	ShmupWarzPositionComponent* _tmp17_ = NULL;
	gdouble _tmp18_ = 0.0;
	gdouble _tmp19_ = 0.0;
	gdouble _tmp20_ = 0.0;
	gdouble _tmp21_ = 0.0;
	gdouble _tmp22_ = 0.0;
	gdouble _tmp23_ = 0.0;
	ShmupWarzBoundsComponent* _tmp24_ = NULL;
	gdouble _tmp25_ = 0.0;
	ShmupWarzBoundsComponent* _tmp26_ = NULL;
	gdouble _tmp27_ = 0.0;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (e1 != NULL, FALSE);
	g_return_val_if_fail (e2 != NULL, FALSE);
	_result_ = FALSE;
	_tmp1_ = e1;
	if (_tmp1_ == NULL) {
		_tmp0_ = TRUE;
	} else {
		EntitasEntity* _tmp2_ = NULL;
		_tmp2_ = e2;
		_tmp0_ = _tmp2_ == NULL;
	}
	if (_tmp0_) {
		result = _result_;
		return result;
	}
	_tmp3_ = e1;
	_tmp4_ = shmup_warz_getPosition (_tmp3_);
	p1 = _tmp4_;
	_tmp5_ = e2;
	_tmp6_ = shmup_warz_getPosition (_tmp5_);
	p2 = _tmp6_;
	_tmp7_ = e1;
	_tmp8_ = shmup_warz_getBounds (_tmp7_);
	b1 = _tmp8_;
	_tmp9_ = e2;
	_tmp10_ = shmup_warz_getBounds (_tmp9_);
	b2 = _tmp10_;
	_tmp11_ = p1;
	_tmp12_ = _tmp11_->x;
	_tmp13_ = p2;
	_tmp14_ = _tmp13_->x;
	a = _tmp12_ - _tmp14_;
	_tmp15_ = p1;
	_tmp16_ = _tmp15_->y;
	_tmp17_ = p2;
	_tmp18_ = _tmp17_->y;
	b = _tmp16_ - _tmp18_;
	_tmp19_ = a;
	_tmp20_ = a;
	_tmp21_ = b;
	_tmp22_ = b;
	_tmp23_ = sqrt ((_tmp19_ * _tmp20_) + (_tmp21_ * _tmp22_));
	_tmp24_ = b1;
	_tmp25_ = _tmp24_->radius;
	_tmp26_ = b2;
	_tmp27_ = _tmp26_->radius;
	_result_ = (_tmp23_ - _tmp25_) < _tmp27_;
	result = _result_;
	_g_object_unref0 (b2);
	_g_object_unref0 (b1);
	_g_object_unref0 (p2);
	_g_object_unref0 (p1);
	return result;
}


void shmup_warz_collision_system_handleCollision (ShmupWarzCollisionSystem* self, EntitasEntity* bullet, EntitasEntity* ship) {
	ShmupWarzPositionComponent* bp = NULL;
	EntitasEntity* _tmp0_ = NULL;
	ShmupWarzPositionComponent* _tmp1_ = NULL;
	ShmupWarzHealthComponent* health = NULL;
	EntitasEntity* _tmp2_ = NULL;
	ShmupWarzHealthComponent* _tmp3_ = NULL;
	ShmupWarzPositionComponent* position = NULL;
	EntitasEntity* _tmp4_ = NULL;
	ShmupWarzPositionComponent* _tmp5_ = NULL;
	gdouble x = 0.0;
	ShmupWarzPositionComponent* _tmp6_ = NULL;
	gdouble _tmp7_ = 0.0;
	gdouble y = 0.0;
	ShmupWarzPositionComponent* _tmp8_ = NULL;
	gdouble _tmp9_ = 0.0;
	gdouble _tmp10_ = 0.0;
	gdouble _tmp11_ = 0.0;
	EntitasEntity* _tmp12_ = NULL;
	EntitasEntity* _tmp13_ = NULL;
	gint i = 0;
	EntitasEntity* _tmp20_ = NULL;
	gboolean _tmp21_ = FALSE;
	ShmupWarzHealthComponent* _tmp25_ = NULL;
	ShmupWarzHealthComponent* _tmp26_ = NULL;
	gdouble _tmp27_ = 0.0;
	EntitasEntity* _tmp28_ = NULL;
	ShmupWarzHealthComponent* _tmp29_ = NULL;
	ShmupWarzHealthComponent* _tmp30_ = NULL;
	gdouble _tmp31_ = 0.0;
	ShmupWarzHealthComponent* _tmp32_ = NULL;
	gdouble _tmp33_ = 0.0;
	g_return_if_fail (self != NULL);
	g_return_if_fail (bullet != NULL);
	g_return_if_fail (ship != NULL);
	_tmp0_ = bullet;
	_tmp1_ = shmup_warz_getPosition (_tmp0_);
	bp = _tmp1_;
	_tmp2_ = ship;
	_tmp3_ = shmup_warz_getHealth (_tmp2_);
	health = _tmp3_;
	_tmp4_ = ship;
	_tmp5_ = shmup_warz_getPosition (_tmp4_);
	position = _tmp5_;
	_tmp6_ = bp;
	_tmp7_ = _tmp6_->x;
	x = _tmp7_;
	_tmp8_ = bp;
	_tmp9_ = _tmp8_->y;
	y = _tmp9_;
	_tmp10_ = x;
	_tmp11_ = y;
	_tmp12_ = shmup_warz_createBang (_tmp10_, _tmp11_);
	_tmp13_ = _tmp12_;
	_g_object_unref0 (_tmp13_);
	i = 5;
	while (TRUE) {
		gint _tmp14_ = 0;
		gint _tmp15_ = 0;
		gdouble _tmp16_ = 0.0;
		gdouble _tmp17_ = 0.0;
		EntitasEntity* _tmp18_ = NULL;
		EntitasEntity* _tmp19_ = NULL;
		_tmp14_ = i;
		i = _tmp14_ - 1;
		_tmp15_ = i;
		if (!(_tmp15_ > 0)) {
			break;
		}
		_tmp16_ = x;
		_tmp17_ = y;
		_tmp18_ = shmup_warz_createParticle (_tmp16_, _tmp17_);
		_tmp19_ = _tmp18_;
		_g_object_unref0 (_tmp19_);
	}
	_tmp20_ = bullet;
	_tmp21_ = shmup_warz_isDestroy (_tmp20_);
	if (!_tmp21_) {
		EntitasEntity* _tmp22_ = NULL;
		EntitasEntity* _tmp23_ = NULL;
		EntitasEntity* _tmp24_ = NULL;
		_tmp22_ = bullet;
		_tmp23_ = shmup_warz_setDestroy (_tmp22_, TRUE);
		_tmp24_ = _tmp23_;
		_g_object_unref0 (_tmp24_);
	}
	_tmp25_ = health;
	_tmp26_ = health;
	_tmp27_ = _tmp26_->health;
	_tmp28_ = bullet;
	_tmp29_ = shmup_warz_getHealth (_tmp28_);
	_tmp30_ = _tmp29_;
	_tmp31_ = _tmp30_->health;
	_tmp25_->health = _tmp27_ - _tmp31_;
	_g_object_unref0 (_tmp30_);
	_tmp32_ = health;
	_tmp33_ = _tmp32_->health;
	if (_tmp33_ < ((gdouble) 0)) {
		EntitasEntity* _tmp34_ = NULL;
		gboolean _tmp35_ = FALSE;
		ShmupWarzPositionComponent* _tmp39_ = NULL;
		gdouble _tmp40_ = 0.0;
		ShmupWarzPositionComponent* _tmp41_ = NULL;
		gdouble _tmp42_ = 0.0;
		EntitasEntity* _tmp43_ = NULL;
		EntitasEntity* _tmp44_ = NULL;
		_tmp34_ = ship;
		_tmp35_ = shmup_warz_isDestroy (_tmp34_);
		if (!_tmp35_) {
			EntitasEntity* _tmp36_ = NULL;
			EntitasEntity* _tmp37_ = NULL;
			EntitasEntity* _tmp38_ = NULL;
			_tmp36_ = ship;
			_tmp37_ = shmup_warz_setDestroy (_tmp36_, TRUE);
			_tmp38_ = _tmp37_;
			_g_object_unref0 (_tmp38_);
		}
		_tmp39_ = position;
		_tmp40_ = _tmp39_->x;
		_tmp41_ = position;
		_tmp42_ = _tmp41_->y;
		_tmp43_ = shmup_warz_createExplosion (_tmp40_, _tmp42_);
		_tmp44_ = _tmp43_;
		_g_object_unref0 (_tmp44_);
	}
	_g_object_unref0 (position);
	_g_object_unref0 (health);
	_g_object_unref0 (bp);
}


static void shmup_warz_collision_system_class_init (ShmupWarzCollisionSystemClass * klass) {
	shmup_warz_collision_system_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ShmupWarzCollisionSystemPrivate));
	G_OBJECT_CLASS (klass)->finalize = shmup_warz_collision_system_finalize;
}


static void shmup_warz_collision_system_entitas_isystem_interface_init (EntitasISystemIface * iface) {
	shmup_warz_collision_system_entitas_isystem_parent_iface = g_type_interface_peek_parent (iface);
}


static void shmup_warz_collision_system_entitas_iset_world_interface_init (EntitasISetWorldIface * iface) {
	shmup_warz_collision_system_entitas_iset_world_parent_iface = g_type_interface_peek_parent (iface);
	iface->setWorld = (void (*)(EntitasISetWorld*, EntitasWorld*)) shmup_warz_collision_system_real_setWorld;
}


static void shmup_warz_collision_system_entitas_iinitialize_system_interface_init (EntitasIInitializeSystemIface * iface) {
	shmup_warz_collision_system_entitas_iinitialize_system_parent_iface = g_type_interface_peek_parent (iface);
	iface->initialize = (void (*)(EntitasIInitializeSystem*)) shmup_warz_collision_system_real_initialize;
}


static void shmup_warz_collision_system_entitas_iexecute_system_interface_init (EntitasIExecuteSystemIface * iface) {
	shmup_warz_collision_system_entitas_iexecute_system_parent_iface = g_type_interface_peek_parent (iface);
	iface->execute = (void (*)(EntitasIExecuteSystem*)) shmup_warz_collision_system_real_execute;
}


static void shmup_warz_collision_system_instance_init (ShmupWarzCollisionSystem * self) {
	self->priv = SHMUP_WARZ_COLLISION_SYSTEM_GET_PRIVATE (self);
}


static void shmup_warz_collision_system_finalize (GObject* obj) {
	ShmupWarzCollisionSystem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SHMUP_WARZ_TYPE_COLLISION_SYSTEM, ShmupWarzCollisionSystem);
	_g_object_unref0 (self->priv->_world);
	_g_object_unref0 (self->priv->_game);
	_g_object_unref0 (self->priv->_bullets);
	_g_object_unref0 (self->priv->_enemies);
	G_OBJECT_CLASS (shmup_warz_collision_system_parent_class)->finalize (obj);
}


GType shmup_warz_collision_system_get_type (void) {
	static volatile gsize shmup_warz_collision_system_type_id__volatile = 0;
	if (g_once_init_enter (&shmup_warz_collision_system_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ShmupWarzCollisionSystemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) shmup_warz_collision_system_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ShmupWarzCollisionSystem), 0, (GInstanceInitFunc) shmup_warz_collision_system_instance_init, NULL };
		static const GInterfaceInfo entitas_isystem_info = { (GInterfaceInitFunc) shmup_warz_collision_system_entitas_isystem_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo entitas_iset_world_info = { (GInterfaceInitFunc) shmup_warz_collision_system_entitas_iset_world_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo entitas_iinitialize_system_info = { (GInterfaceInitFunc) shmup_warz_collision_system_entitas_iinitialize_system_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo entitas_iexecute_system_info = { (GInterfaceInitFunc) shmup_warz_collision_system_entitas_iexecute_system_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType shmup_warz_collision_system_type_id;
		shmup_warz_collision_system_type_id = g_type_register_static (G_TYPE_OBJECT, "ShmupWarzCollisionSystem", &g_define_type_info, 0);
		g_type_add_interface_static (shmup_warz_collision_system_type_id, ENTITAS_TYPE_ISYSTEM, &entitas_isystem_info);
		g_type_add_interface_static (shmup_warz_collision_system_type_id, ENTITAS_TYPE_ISET_WORLD, &entitas_iset_world_info);
		g_type_add_interface_static (shmup_warz_collision_system_type_id, ENTITAS_TYPE_IINITIALIZE_SYSTEM, &entitas_iinitialize_system_info);
		g_type_add_interface_static (shmup_warz_collision_system_type_id, ENTITAS_TYPE_IEXECUTE_SYSTEM, &entitas_iexecute_system_info);
		g_once_init_leave (&shmup_warz_collision_system_type_id__volatile, shmup_warz_collision_system_type_id);
	}
	return shmup_warz_collision_system_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


