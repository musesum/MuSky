canvas (columns 2,
        svg "icon.canvas") {

    color ('shift color frame and palette fade',
           xy, x 0…1, y 0…1,
           sym "paintpalette",
           <> (pipe.color.plane,
               sky.color.xfade),
           ^- sky.main.anim)

    brush ('brush size',
           val, x 1_255=255,
           sym "paintbrush.pointed",
           <> sky.draw.brush.index)

    repeat ('repeat canvas, 0 is 1:1',
            xy, x -1…1=0, y -1…1=0,
            svg "icon.repeat.arrows",
            <> pipe˚.repeat,
            -> (midi.cc.skypad.repeatX(val: x),
                midi.cc.skypad.repeatY(val: y)),
            ^- sky.main.anim)

    mirror ('mirror repetitions',
            xy, x 0…1=0, y 0…1=0,
            svg "icon.mirror",
            <> pipe˚.mirror,
            ^- sky.main.anim)

    size  ('fixed brush size',
           val, x 1_64=12 : 12,
           svg "icon.size.dot",
           <> sky.draw.brush.size)

    press ('set on to let iPad pencil or AVP depth change size',
           tog, x 1,
           sym "scribble.variable",
           <> sky.draw.brush.press)

    tilt  ('set on to let iPad tilt shift screen',
           tog, x 0,
           sym "angle",
           <> sky.input.tilt)

    shift ('amount of screen shift, double tap to stop',
           xy,
           x 0…1=0.5, y 0…1=0.5,
           svg "icon.direction",
           <> pipe.draw.shift,
           ^- sky.main.anim)

    alpha (xy, x 0…1=1, y 0…1=1,
           sym "cube.transparent",
           '-> pipe.render.map.cube.mixcube(y: x)',
           -> plato.alpha(y: y))

    fill  ('erase screen with fill color',
           val, x 0…1=0 : 0,
           sym "drop",
           <> sky.draw.screen.fill)
}
