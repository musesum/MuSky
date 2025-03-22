camera(sym "camera")  {

    stream  (tog, x 0,
             sym "video",
             <> pipe.camera(on: x),
             -> cubemap(x: 0))

    front   (tog, x 1,
             svg "icon.camera.facing",
             <> pipe.camera.front)

    cubemap (tog, x 1,
             sym "cube",
             <> pipe.render.map.cube.mixcube)

    mix     (xy,
             x 1, y 0…1~0,
             sym "camera.filters",
             <> (pipe.camix.mixcam, pipe.cell.rule˚loops(y)))

    color   (xy,  x 0…1~0, y 0…1~0,
             sym "paintpalette"
             <> canvas.color)
}

