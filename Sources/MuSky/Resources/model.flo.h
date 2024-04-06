model {
    canvas {
        mirror (x 0…1~0, y 0…1~0)
        <> shader.render˚mirror
        ^ sky.main.anim

        shift (x 0…1~0.5, y 0…1~0.5)
        <> shader.compute.draw
        ^ sky.main.anim

        repeat (x -1…1~0, y -1…1~0)
        <> shader.render˚repeat ^ sky.main.anim
        >> (midi.cc.skypad.repeatX(val x)
            midi.cc.skypad.repeatY(val y))

        color {
            fade (x 0…1, y 0…1)
            >> (shader.compute.color sky.color.xfade)
            ^ sky.main.anim

            fill_0 (%1) <> sky.draw.screen.fill(0)
            fill_1 (%1) <> sky.draw.screen.fill(1)
        }
        brush {
            size  (0…1~0.5)   <> sky.draw.brush.size
            press (%2~1)      <> sky.draw.brush.press
            tilt  (%2~0)      <> sky.input.tilt
            index (1_255~127) <> sky.draw.brush.index
        }
    }
    plato {
        convex (0.9…1.1~0.9)
        zoom  (0…1~0.5) ^ sky.main.anim
        shadow (x 0…1~0, y 0…1~0)
        invert (0…1~1)
        reflect (0…1~0.8)
        more {
            wire (%2~0)
            phase (0_10~1)
            harmonic (0_6~1)
            show (%2~0) >> (model.more.show.plato, model.more.show.cubemap)
            run (%2~1)
        }
    }
    cell {
        fade  (0.2…2~1) <> shader.cell.fade
        ave   (0…1~0.5) <> shader.cell.ave
        melt  (0…1~0.5) <> shader.cell.melt
        tunl  (0_5~1)   <> shader.cell.tunl
        zha   (0_6~2)   <> shader.cell.zha
        slide (0_7~3)   <> shader.cell.slide
        fred  (0_4~4)   <> shader.cell.fred
    }
    camera {
        stream (%2~0) <> shader.compute.camera.on
        front  (%2~1) <> shader.compute.camera.front
        mix (0…1~0.5) <> shader.compute.camix.mix
        fade (x 0…1~0.5, y 0…1~0.1) <> canvas.color.fade
    }
    hand {
        left {
            thumb {
                knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
            }
            index {
                meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
            }
            middle {
                meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
            }
            ring {
                meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
            }
            little {
                meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)

            }
            right {
                thumb {
                    knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                }
                index {
                    meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                }
                middle {
                    meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                }
                ring {
                    meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                }
                little {
                    meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                }
            }
        }
        right{
            thumb {
                knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
            }
            index {
                meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
            }
            middle {
                meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
            }
            ring {
                meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
            }
            little {
                meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)

            }
            right {
                thumb {
                    knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                }
                index {
                    meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                }
                middle {
                    meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                }
                ring {
                    meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                }
                little {
                    meta (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    knuc (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    base (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    inter(x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                    tip  (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint)
                }
            }
        }
    }
    more {
        speed {
            fps (0_60~60)  <> sky.main.fps
            run (%2~1 )    <> sky.main.run
            anim(0…1~0.24) <> sky.main.anim
        }
        network {
            bonjour (peer "bonjour") <> sky.network.bonjour
            follow  (%2~1) <> sky.network.follow
            midi    (%2~1) <> sky.network.midi
        }
        motion (%2~1)
        rotate (x -1…1~0, y -1…1~0) <> shader.render.cubemap.rotate
        show {
            cubemap (%2~0) <> shader.render.cubemap.on
            canvas (%2~0)
            plato (%2~0) <> shader.render.plato.on
        }
    }
}
 
