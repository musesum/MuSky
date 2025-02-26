pipe (on 1) {

    draw (on 1) {
        in (tex, <- cell.out)
        out (tex, archive)  // save snapshot of drawing surface
        shift (buf, x 0…1~0.5,  y 0…1~0.5)
    }
    _camera (on 0) {
        out (tex)
        front (buf, x 0)
    }
    cell (on 1) {
        fake (tex, <- draw.out)
        real (tex, <- (draw.out, camera.out))
        out (tex)
        rule (on 1) {
            slide(on 1) { version (buf, x 0…7 : 3)   loops (buf, z 0) }
            zha  (on 0) { version (buf, x 0…6 : 2)   loops (buf, z 10) }
            ave  (on 0) { version (buf, x 0…1 : 0.5) loops (buf, y 0…99~0) }
            fade (on 0) { version (buf, x 1…3 : 1.2) loops (buf, y 0…32~0) }
            melt (on 0) { version (buf, x 0…1 : 0.5) loops (buf, y 0…32~0) }
            tunl (on 0) { version (buf, x 0…5 : 1)   loops (buf, y 0…32~0) }
            fred (on 0) { version (buf, x 0…4 : 4)   loops (buf, y 0…32~0) }
            *(-> *(on 0)) // solo only one rule
            ˚version(-> ..(on 1)) // changing `version` auto switches cell
        }
    }
    color (on 1) {
        in (tex, <- (camera.out, cell.out))
        out (tex)
        pal (tex, w 256, h 1)
        plane (buf, y 0…1)
    }
    camix (on 0, <- camera) {
        in  (tex, <- color.out)
        cam (tex, <- camera.out)
        out (tex)
        mix (buf, x 0…1~1)
        frame(buf)
    }
    tile (on 1) {
        in (tex, <- (color.out, camix.out))
        out (tex)
        repeat (buf, x -1…1~0, y -1…1~0)
        mirror (buf, x  0…1~0, y  0…1~0)
    }
    render (on 1) {
        in (tex, <- tile.out)
        map (on 1)  {
            flat(on 1)
            cube(on 1) {
                cudex (tex)
                mix (buf, x 0…1 : 1)
            }
            *(-> *(on 0)) // solo flat or cube
        }
        plato (on 1) {
            cube (tex, <- map.cube.cudex)
            pal  (tex, <- color.pal)
            range01 (buf, x 0…1)
            shading (buf)
        }
    }
}
