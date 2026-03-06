pipe (on 1) {

    draw (on 1) {
        in (texture, <- cell.out)
        out (texture, archive, 'archive: save snapshot of drawing surface')
        shift (buffer, x 0…1=0.5,  y 0…1=0.5)
    }
    camera (on 0) {
        in (texture)
        out (texture)
        front (buffer, x 0)
    }
    cell (on 1) {
        real (texture, <- (draw.out, camera.out))
        fake (texture, <- draw.out) // 0 or 1
        out (texture)

        rule (on 1) {
            slide(on 1) { version (buffer, x 0…7 : 3)   loops (z 0) }
            zha  (on 0) { version (buffer, x 0…6 : 2)   loops (z 10) }
            ave  (on 0) { version (buffer, x 0…1 : 0.5) loops (y 0…99=0) }
            fade (on 0) { version (buffer, x 0…2 : 0)   loops (y 0…32=0) }
            melt (on 0) { version (buffer, x 0…1 : 0.5) loops (y 0…32=0) }
            tunl (on 0) { version (buffer, x 0…5 : 1)   loops (y 0…32=0) }
            fred (on 0) { version (buffer, x 0…4 : 4)   loops (y 0…32=0) }
            *(-> *(on 0)) // solo only one rule // no tooltip here
            ˚version(-> ..(on 1)) // changing `version` auto switches rule
        }
    }
    color (on 1) {
        in (texture, <- (camera.out, cell.out))
        pal (texture, w 256, h 1)
        out (texture)
        plane (buffer, y 0…1)
        height(buffer, x 0…1=0)
    }
    camix (on 0, <- camera) {
        in  (texture, <- color.out)
        out (texture)
        cam (texture, <- camera.out)
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
_pipe (on 1) {

    draw (on 1) {
        in (texture 0, <- cell.out)
        out (texture 1, archive, 'archive: save snapshot of drawing surface')
        shift (buffer 0, x 0…1=0.5,  y 0…1=0.5)
    }
    camera (on 0) {
        in (texture 0)
        out (texture 1)
        front (buffer, x 0)
    }
    cell (on 1) {
        real (texture 0, <- (draw.out, camera.out))
        out (texture 1)
        fake (texture 0, <- draw.out) // 0 or 1

        rule (on 1) {
            slide(on 1) { version (buffer 0, x 0…7 : 3)   loops (z 0) }
            zha  (on 0) { version (buffer 0, x 0…6 : 2)   loops (z 10) }
            ave  (on 0) { version (buffer 0, x 0…1 : 0.5) loops (y 0…99=0) }
            fade (on 0) { version (buffer 0, x 0…2 : 0)   loops (y 0…32=0) }
            melt (on 0) { version (buffer 0, x 0…1 : 0.5) loops (y 0…32=0) }
            tunl (on 0) { version (buffer 0, x 0…5 : 1)   loops (y 0…32=0) }
            fred (on 0) { version (buffer 0, x 0…4 : 4)   loops (y 0…32=0) }
            *(-> *(on 0)) // solo only one rule // no tooltip here
            ˚version(-> ..(on 1)) // changing `version` auto switches rule
        }
    }
    color (on 1) {
        in (texture 0, <- (camera.out, cell.out))
        pal (texture 1, w 256, h 1)
        out (texture 2)
        plane (buffer 0, y 0…1)
        height(buffer 1, x 0…1=0)
    }
    camix (on 0, <- camera) {
        in  (texture 0, <- color.out)
        out (texture 1)
        cam (texture 3, <- camera.out)
        mixcam (buffer 0, x 0…1=1)
    }
    tile (on 1) {
        in (texture 0, <- (color.out, camix.out))
        out (texture 1)
        repeat (buffer 0, x -1…1=0, y -1…1=0)
        mirror (buffer 1, x  0…1=0, y  0…1=0)
    }
    render (on 1) {
        in (texture 0, <- tile.out)
        map (on 1)  {
            flat(on 1)
            cube(on 1) {
                cudex(texture 1)
                mixcube (buffer 0, x 0…1 : 1, y 0…1 : 1, ^- sky.main.anim)
            }
        }
        plato (on 1) {
            cube (texture 4, <- map.cube.cudex)
            pal  (texture 2, <- color.pal)
            range01 (buffer 1, x 0…1)
            shading (buffer 1)
        }
    }
}

