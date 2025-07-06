sky ('visual music synth') {
    main ('main controls') {
        run (x 0…1=1,'currently running')
        anim(x 0…1=0.5,'animation transition speed')
    }
    network {
        bonjour('bonjour status')
        follow (x 0…1=1,'follow remote events -- not implemented')
        midi   (x 0…1=1,'follow midi events -- not implemented')
    }
    color ('false color mapping palette') {
        pal0 ("roygbik", 'red orange yellow green blue indigo black')
        pal1 ("wKZ", 'white & blacK with capital K meaning both sides, Z means with Zeno fractal')
        xfade (x 0…1=0.5, 'cross fade btween pal0 and pal1')
    }
    input ('phone and tablet pencil input') {
        azimuth (x -0.2…0.2, y -0.2…0.2, -> pipe.draw.shift)
        accel   (x -0.3…0.3, y -0.3…0.3, z -0.3…0.3,'accelerometer')
        radius  (x 1…92=9, 'for iPhone, finger silhouette changes brush size')
        tilt    (x 0…1=1,  'for iPad pen, allow tilt to shift screen')
        force   (x 0…0.5, -> draw.brush.size, 'iPad pen, pressure with change brush size')
    }
    draw ('draw on metal layer') {
        screen.fill(x 0…1=0, 'fill cellular automata universe')
        brush ('type of brush and range') {
            size  (x 1…64=10:10, 'range of radius')
            press (x 0…1=1, 'pressure changes size')
            index (x 1…255=127, 'index in 256 color palette')
        }
        line ('place holder for line drawing') {
            prev (x 0…1, y 0…1,'staring point of segment')
            next (x 0…1, y 0…1,'endint point of segment')
        }
        dot(on 1, log 0, 'use MIDI MPI input to drawing dots on canvas') {
            note {
                on(chan, num, velo, <- midi.input.note.on)
                off(chan, num, velo, <- midi.input.note.off)
            }
            after(chan, val, <- midi.input.afterTouch)
            wheel(chan, val, <- midi.input.pitchWheel)
            slide(chan, cc == 74, val, <- midi.input.controller)
            clear(<- draw.screen.fill)
        }
        ripple(on 1, log 0, 'use MIDI MPE to ripple colors through pal0/pal1 ') {
            note {
                on(chan, num, velo, <- midi.input.note.on)
                off(chan, num, velo, <- midi.input.note.off)
            }
            after(chan, val, <- midi.input.afterTouch)
            wheel(chan, val, <- midi.input.pitchWheel)
            slide(chan, cc == 74, val, <- midi.input.controller)
            clear(<- draw.screen.fill)
        }
    }
}
