/**
 * Entities.gs
 *
 * IEntity factory
 *
 */
[indent=4]
uses Entitas
uses GLib
uses sdx
uses sdx.utils
uses sdx.graphics.s2d
uses o2d.data
uses o2d.resources


namespace ShmupWarz

    enum Enemy
        Enemy1
        Enemy2
        Enemy3


    enum Layer
        DEFAULT
        BACKGROUND
        TEXT
        LIVES
        MINES
        ACTORS_1
        ACTORS_2
        ACTORS_3
        PLAYER
        BULLET
        PARTICLE
        HUD

    enum Effect
        PEW
        ASPLODE
        SMALLASPLODE

    /**
     * O2dLib
     *
     * load items from the Overlap2D Library
     */
    class O2dLib

        _rm: static ResourceManager
        _sprites: static TextureAtlas
        _project: static ProjectInfoVO
        _scene: static SceneVO

        prop static rm: ResourceManager
            get
                if _rm == null
                    _rm = new ResourceManager()
                    _rm.initAllResources()
                return _rm
        
        prop static project: ProjectInfoVO
            get
                if _project == null
                    _project = rm.loadProjectVO()
                return _project

        prop static scene: SceneVO
            get
                if _scene == null
                    _scene = rm.loadSceneVO("MainScene")
                return _scene

        prop static sprites: TextureAtlas
            get
                if _sprites == null
                    rm.loadAtlasPack()
                    _sprites = rm.mainPack
                return _sprites
                  
        
        def static getItem(name:string):CompositeItemVO
            return project.libraryItems[name]

        def static getSprite(name:string):Sprite
            return sprites.createSprite(getResource(name))


        def static effectFromName(name: string): Effect
            case name
                when "bang"
                    return Effect.SMALLASPLODE
                when "bullet"
                    return Effect.PEW
                when "explosion"
                    return Effect.ASPLODE
            return 0
            
        // TODO: Check layer names in Overlap2D editor 
        // def static getResource(name:string):string 
        //     return getItem(name).composite.sImages[0].imageName
        def static getResource(name: string): string
            case name
                when "background"
                    return "BackdropBlackLittleSparkBlack"
                when "player"
                    return "spaceshipspr"
                when "bullet"
                    return "bullet"
                when "particle"
                    return "star"
                when "bang"
                    return "bang"
                when "explosion"
                    return "explosion"
                when "enemy1"
                    return "enemy1"
                when "enemy2"
                    return "enemy2"
                when "enemy3"       
                    return "enemy3"
            return ""

        // TODO: Check layer names in Overlap2D editor 
        // def static getLayer(name:string): int
        //     return layerFromName(getItem(name).layerName.up())
        def static getLayer(name: string): Layer
            case name
                when "background"
                    return Layer.BACKGROUND
                when "player"
                    return Layer.PLAYER
                when "bullet"
                    return Layer.BULLET
                when "particle"
                    return Layer.PARTICLE
                when "explosion"
                    return Layer.PARTICLE
                when "bang"
                    return Layer.PARTICLE
                when "enemy1"
                    return Layer.ACTORS_1
                when "enemy2"
                    return Layer.ACTORS_2
                when "enemy3"       
                    return Layer.ACTORS_3
            return Layer.DEFAULT



        def static layerFromName(name: string): Layer
            case name
                when "DEFAULT"
                    return Layer.DEFAULT
                when "BACKGROUND"
                    return Layer.BACKGROUND
                when "TEXT"
                    return Layer.TEXT
                when "LIVES"
                    return Layer.LIVES
                when "MINES"
                    return Layer.MINES
                when "ACTORS_1"
                    return Layer.ACTORS_1
                when "ACTORS_2"
                    return Layer.ACTORS_2
                when "ACTORS_3"
                    return Layer.ACTORS_3
                when "PLAYER"
                    return Layer.PLAYER
                when "BULLET"
                    return Layer.BULLET
                when "PARTICLE"
                    return Layer.PARTICLE
                when "HUD"
                    return Layer.HUD
            return 0

                