sky { // visual music synth
    main { // main controls
        run (x 0…1~1) // currently running
        anim(x 0…1~0.5) // animation transition speed
    }
    network {
        bonjour // bonjour status
        follow (x 0…1~1) // follow remote events
        midi   (x 0…1~1)   // follow midi events
    }
    color { // false color mapping palette
        pal0 ("roygbik") 
        pal1 ("wKZ")
        xfade (x 0…1~0.5)
    }
    input { // phone and tablet pencil input
        azimuth (x -0.2…0.2, y -0.2…0.2, -> pipe.draw.shift)
        accel   (x -0.3…0.3, y -0.3…0.3, z -0.3…0.3)  // accelerometer
        radius  (x 1…92~9) // finger silhouette
        tilt    (x 0…1~1)
        force   (x 0…0.5, -> draw.brush.size)
    }
    draw { // draw on metal layer
        screen.fill(0…1~0) // fill cellular automata universe
        brush { // type of brush and range
            size  (x 1…64~10)    // range of radius
            press (x 0…1~1)     // pressure changes size
            index (x 1…255~127) // index in 256 color palette
        }
        line { // place holder for line drawing
            prev (x 0…1, y 0…1) // staring point of segment
            next (x 0…1, y 0…1) // endint point of segment
        }
        dot {
            on  (x 0_11, y 0_11, z 0_127)
            off (x 0_11, y 0_11, z 0_127)
        }
    }
    pov (x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time)
    touching (<- model.hand˚middle.tip)
}
