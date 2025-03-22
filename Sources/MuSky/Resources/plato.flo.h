plato (columns 2,
       svg "icon.plato.icosa") {

    show (tog, x 1,
          sym "eye",
          <> pipe.render.plato(on : x))

    material (xyz, x 0…1~0, y 0…1~0,z 0…1~0.75,
              svg "icon.opacity",
              ^- sky.main.anim)

    harmonic (seg, x 0_6,
              svg "icon.subtriangle")

    phase (seg, x 0_10 : 1,
           svg "icon.plato.phase")

    convex (val, x 0.9…1.1 : 0.98,
            svg "icon.convex")

    zoom (val, y 0…1~0,
          sym "square.arrowtriangle.4.outward",d
          ^- sky.main.anim)

    cubemap (tog, x 1,
             sym "cube",
             <> pipe.render.map.cube.mixcube)

    _run (tog, x 1,
          svg "icon.counter")

    _wire (tog, x 0,
           svg "icon.wireframe")
    
    _counter(svg "icon.counter")
}

