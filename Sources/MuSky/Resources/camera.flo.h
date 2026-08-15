camera(sym "camera")  {
    
    stream  ('turn camera on',
             tog, x 0,
             sym "video",
             <> pipe.camera(on: x),
             -> cubemap(x: 0))
    
    front   ('use front facing or back facing',
             tog, x 1,
             svg "icon.camera.facing",
             <> pipe.camera.front)
    
    cubemap (tog, sym "cube", 'map to a cube or flat presentation',
             x 1,
             <> pipe.render.map.cube.mixcube)
    
    mix     (xyzw, sym "camera.filters",
              x 1,     'mix',
              y 0…1=0, 'loops',
              z 0…1=0, 'color y',
              w 0…1=0, 'color x',
              -> (pipe.camix.mixcam(x: x),
                  pipe.cell.rule˚loops(y: y),
                  canvas.color(x: w),
                  canvas.color(y: z)
                  )
              )

}
