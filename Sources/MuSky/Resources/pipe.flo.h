pipe (on 1) {

    draw (on 1) {
        in (texture, <- cell.out)
        out (texture, archive, 'archive: save snapshot of drawing surface')
        shift (buffer, x 0…1=0.5,  y 0…1=0.5)
    }
    camera (on 0) {
        out (texture)
        front (buffer, x 0)
        zoom (x 1…8=1)
    }
    cell (on 1) {
        fake (texture, <- draw.out)
        real (texture, <- (draw.out, camera.out))
        out (texture)
        rule (on 1) {
            slide (on 1) { version (buffer, x 0…7 : 3)   loops (y 0) }
            zha   (on 0) { version (buffer, x 0…6 : 2)   loops (y 10 == 10 ) }
            ave   (on 0) { version (buffer, x 0…1 : 0.5) loops (y 0…99=0) }
            fade  (on 0) { version (buffer, x 0…2 : 0)   loops (y 0…32=0) }
            melt  (on 0) { version (buffer, x 0…1 : 0.5) loops (y 0…32=0) }
            tunl  (on 0) { version (buffer, x 0…5 : 1)   loops (y 0…32=0) }
            fred  (on 0) { version (buffer, x 0…4 : 4)   loops (y 0…32=0) }
            drift (on 0) { version (buffer, x 1…2 : 1)   loops (y 0…32=0) }
            warren(on 0) { version (buffer, x 0…11 : 1)  loops (y 0…32=0)
                reseed (buffer, x 0…1=0) } // one-frame pulse, packs the picture into a fresh run
            noise (on 0) { version (buffer, x 1…8 : 1)   loops (y 0…32=0) }
            shape (on 0) { version (buffer, x 0…5 : 1)   loops (y 0…32=0)
                algo (x 0…3=0) // 0 simple, 1 zigular(spiral), 2 circular(circle), 3 petal(floral)
                simple   (x 0…5=1)                                         // preset: version ramp coefficients
                zigular  (x 0…40=5, y 0…24=1, z 50…400=100)                // x cone1Scale, y circleRays, z cone1Strength
                circular (x 0…40=5, y 0…40=5, z 50…400=100, w 50…400=100)  // x cone1Scale, y cone2Scale, z cone2Strength, w cone1Strength
                petal    (x -50…50=-50, y 0…14=1, z 0…50=0, w 400…1000=800) } // x spiralz, y num, z petalz, w strength (single petal)
            wave (on 0) { version (buffer, x 0…1 : 0)
                algo (buffer, x 0…67 : 0)
                uxyn (x -1…1=0, y -1…1=0, z 1…4096=100)
                ur (x -1…1=0) ua (x -1…1=0)
                seed (buffer, x 0…1000000 : 0) }
            field(on 0) { version (buffer, x 0…1 : 0)
                algo (x 0…23=0, y 0…20000=10000, z 0…400=0, w 0…400=0) } // x algo, y fader, z a0, w a1 (seed removed — fixed default)
            *(-> *(on 0)) // solo only one rule // no tooltip here
            ˚version(-> ..(on 1)) // changing `version` auto switches rule
            ˚algo(-> ..(on 1)) // touching an `algo` selector auto switches rule
        }
    }
    color (on 1) {
        in (texture, <- (camera.out, cell.out))
        pal (texture, w 256, h 1)
        out (texture)
        plane (buffer, y 0…1)
        height(buffer, x 0…1=0)
        pairMix(buffer, x 0…1=0) // rows 10/11 switch: 0 off, above 0 mixes both occupants of a doubled pixel
    }
    camix (on 0, <- camera) {
        in  (texture, <- color.out)
        cam (texture, <- camera.out)
        out (texture)
        mixcam (buffer, x 0…1=1)
    }
    tile (on 1) {
        in (texture, <- (color.out, camix.out))
        out (texture)
        repeat (buffer, x -1…1=0, y -1…1=0)
        mirror (buffer, x  0…1=0, y  0…1=0)
    }
    render (on 1) {
        in (texture, <- tile.out)
        map (on 1)  {
            flat(on 1)
            cube(on 1) {
                cudex(texture)
                mixcube (buffer, x 0…1 : 1, y 0…1 : 1, ^- sky.main.anim)
            }
        }
        plato (on 1) {
            cube (texture, <- map.cube.cudex)
            pal  (texture, <- color.pal)
            range01 (buffer, x 0…1)
            shading (buffer)
        }
    }
}
