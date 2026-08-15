more (svg "icon.more") {

    anim(val, 0…1:0.24,
         sym "bolt.fill",
         <> sky.main.anim)

    fps (val, 0_60=60,
         img "icon.speed",
         <> sky.main.fps)

    bonjour (peer "bonjour",
             sym "bonjour",
             <> sky.network.bonjour)

    chat('chat',
         sym "sparkle",
         <> sky.main.search)

    monitor (tog, x 0,
             sym "tv",
             <> sky.main.monitor)
}
music (midi, x 0_1=0, y 0…1=0.35, z 1_8=3, sym "music.note")

mic(sym "music.microphone") {
    input (vf, sym "waveform",  'live microphone',
           y 0…1=0,             'v: volume (0 turns mic off)',
           w -1…1=0,            'f: band-pass sweep',
           <> sky.mic.input)

    field (xyzw, text "F",  'Field function generators',
           x 0_23=0,        'algo selector',
           y 0…20000=10000, 'fader gain',
           z 0…400=0,       'a0 override',
           w 0…400=0,       'a1 override',
           <> pipe.cell˚field.algo)

    wave (sym "water.waves", 'Wave shape scatter') {
        algo (seg, x 0_67=0,       <> pipe.cell˚wave.algo)
        uxyn (xyz,
              x -1…1=0, y -1…1=0, z 1…4096=100, <> pipe.cell˚wave.uxyn)
        ur   (val, x -1…1=0,       <> pipe.cell˚wave.ur)
        ua   (val, x -1…1=0,       <> pipe.cell˚wave.ua)
        seed (val, x 0…1000000=0,  <> pipe.cell˚wave.seed)
    }
    shapes (sym "snowflake",'procedural shape fields') {

        circular (xyzw, 'two-cone circle field',
                   x 1…40=5,     'cone1Scale (0 = off)',
                   y 0…40=5,     'cone2Scale (0 = off)',
                   z 50…400=100, 'cone2Strength',
                   w 50…400=100, 'cone2Strength',
                   <> pipe.cell˚shape.circular)

         zigular (xyz, 'cone + circle-ray spiral field',
                  x 1…40=5,      'cone1Scale',
                  y 0_24=1,      'circle rays',
                  z 50…400=100,  'cone1Strength',
                  <> pipe.cell˚shape.zigular)

         simple (seg,        'preset coefficient ramps',
                 x 0_5=1,    'selects hardcoded x/y ramps',
                 <> pipe.cell˚shape.simple)

         petal (xyzw,            'floral petal field',
                x -50…50=-50,    'x spiralz',
                y 1_14=1,        'y num',
                z 1…50=0,        'z petalz',
                w 400…1000=800,  'w strength -- single petal',
                <> pipe.cell˚shape.petal)
    }
}
