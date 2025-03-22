canvas (columns 2,
        svg "icon.canvas") {

    color (xy, x 0…1, y 0…1,
           sym "paintpalette",
           <> (pipe.color.plane, sky.color.xfade),
           ^- sky.main.anim)

    brush (val, x 1_255~255,
           sym "paintbrush.pointed",
           <> sky.draw.brush.index)

    repeat (xy, x -1…1~0, y -1…1~0,
            svg "icon.repeat.arrows",
            <> pipe˚.repeat,
            -> (midi.cc.skypad.repeatX(val x),
                midi.cc.skypad.repeatY(val y)),
            ^- sky.main.anim)

    mirror (xy, x 0…1~0, y 0…1~0,
            svg "icon.mirror",
            <> pipe˚.mirror,
            ^- sky.main.anim)

    size  (val, x 1_64~12 : 12,
           svg "icon.size.dot",
           <> sky.draw.brush.size)

    press (tog, x 1,
           sym "scribble.variable",
           <> sky.draw.brush.press)
    
    tilt  (tog, x 0,
           sym "angle",
           <> sky.input.tilt)

    shift (xy,
           x 0…1~0.5, y 0…1~0.5,
           svg "icon.direction",
           <> pipe.draw.shift,
           ^- sky.main.anim)

    fill  (val, x 0…1~0 : 0,
           sym "drop",
           <> sky.draw.screen.fill)
}
