[indent=4]
/**
 * Game.gs
 *
 * 
 *
 */
uses Bosco
uses Entitas
uses SDL
uses SDLTTF
uses Overlap2D


def main(args: array of string)

    var game = new ShmupWarz.Game()
    game.Run()

namespace ShmupWarz

    // Resource URI
    const RES : string = "resource:///darkoverlordofdata/shmupwarz"
    const SCREEN_WIDTH:int = 800
    const SCREEN_HEIGHT:int = 600

    /** 
    * Start the application
    */
    class Game : AbstractGame

        world : World
        player : PlayerInputSystem
        arial: Bosco.Font

        construct()
            super()
            initializePools()

            var path = GLib.FileUtils.read_link("/proc/self/exe")
            var proc = File.new_for_path(path)
            var rootPath = proc.resolve_relative_path("../../../").get_path()

            var sceneLoader = new Overlap2D.SceneLoader(RES)
            sceneLoader.loadScene("MenuScene") //, new Viewport(320, 480))
            var playButtonVo = sceneLoader.loadVoFromLibrary("playButton")
            var name = playButtonVo.composite.sImage9patchs[0].imageName
            print "%s(%d, %d, %d, %d)", name, (int)playButtonVo.x, (int)playButtonVo.y, (int)playButtonVo.width, (int)playButtonVo.height

            var res = File.new_for_path("/home/bruce/Git/ShmupWarz/data/orig/")
            var pack = File.new_for_path("/home/bruce/Git/ShmupWarz/data/orig/pack.atlas")

            var atlas = new TextureAtlas.TextureAtlasData(pack, res, false)

            name = "Shmup Warz"
            width = SCREEN_WIDTH
            height = SCREEN_HEIGHT
            running = true
            defaultFont = rootPath+"/fonts/OpenDyslexic-Bold.otf"
            var check = File.new_for_path(defaultFont)
            if !check.query_exists()
                defaultFont = Constants.DATADIR+"/fonts/TitanOne-Regular.ttf"


        /**
        *  OnLoop
        *
        * Process the game engine
        */
        def override Update(delta: double)
            world.execute()

        /**
        *  OnInit
        *
        * load assets
        */
        def override Initialize():bool
            if super.Initialize()

                arial = Bosco.Font.fromFile(defaultFont, 20)
                if arial == null
                    print "Failed to load font! SDL Error: %s", SDL.get_error()

                world = new World(components
                    ).add(new MovementSystem(this)
                    ).add(player = new PlayerInputSystem(this)
                    ).add(new SoundEffectSystem(this)
                    ).add(new CollisionSystem(this)
                    ).add(new ExpiringSystem(this)
                    ).add(new EntitySpawningTimerSystem(this)
                    ).add(new ColorTweenSystem(this)
                    ).add(new ScaleTweenSystem(this)
                    ).add(new RemoveOffscreenShipsSystem(this)
                    ).add(new ViewManagerSystem(this)
                    ).add(new RenderPositionSystem(this)
                    ).add(new HealthRenderSystem(this)
                    ).add(new HudRenderSystem(this)
                    ).add(new DestroySystem(this)
                    ).initialize()
                
                createBackground()
                createPlayer()

            return true

        /**
        *  OnEvent
        *
        * Handle events
        */
        def override Events(e:SDL.Event)

            if keys[Input.Keycode.ESCAPE] == 1
                running = false

            if e.type == SDL.EventType.QUIT
                running = false

            if e.type != EventType.MOUSEMOTION && e.type != EventType.MOUSEBUTTONDOWN && e.type != EventType.MOUSEBUTTONUP
                return
            /* Mouse Events*/
            x:int = 0
            y:int = 0
            Input.Cursor.get_state(ref x, ref y)
            player.onMouseEvent(e.type, x, y)

        /**
        *  OnCleanup
        *
        * release assets
        */
        def override Dispose()
            SDL.quit()
            SDLImage.quit()


