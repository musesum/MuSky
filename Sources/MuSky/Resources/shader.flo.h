shader {
    pipeline {
        draw
        slide
        color
        flatmap
    }
    cell {
        slide (0…7=3  ) >> on(1) { on(%2~1) >> cell˚on(0) loops(0) }
        zha   (0…6=2  ) >> on(1) { on(%2) >> cell˚on(0) bits(2…4=3) loops(11) }
        ave   (0…1=0.5) >> on(1) { on(%2) >> cell˚on(0) loops(0) }
        fade  (1.2…3  ) >> on(1) { on(%2) >> cell˚on(0) loops(0) }
        melt  (0…1=0.5) >> on(1) { on(%2) >> cell˚on(0) loops(0) }
        tunl  (0…5=1  ) >> on(1) { on(%2) >> cell˚on(0) loops(0) }
        fred  (0…4=4  ) >> on(1) { on(%2) >> cell˚on(0) loops(0) }
    }
    kernel {
        draw (x 0…1~0.5, y 0…1~0.5) { on(0…1~1) }
        record { on(0…1~0) }
        camera { on(0…1~0) front (%2~1) }
        camix  { mix(x 0…1~0.5) }
        color (y 0…1)
    }
    render {
        flatmap {
            frame  (x 0, y 0, w 2160, h 3840)
            repeat (x -1…1~0, y -1…1~0)
            mirror (x  0…1~0, y  0…1~0)
            on (%2~0)
        }
        cubemap {
            frame   (x 0, y 0, w 2160, h 3840)
            repeat  (x -1…1~0, y -1…1~0)
            mirror  (x  0…1~0, y  0…1~0)
            rotate  (x  0…1~0, y  0…1~0)
            gravity (0…2~0)
            on (%2~1)
        }
        plato { on (%2~0) }
    }
    camix(x, y 0_30) <> (kernel.camix.mix(x),
                         cell˚loops(val y))
}
