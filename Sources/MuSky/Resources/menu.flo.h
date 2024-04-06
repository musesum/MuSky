model_  {
    canvas (svg "icon.canvas") {
        mirror (svg "icon.mirror")
        repeat (svg "icon.repeat.arrows")
        shift  (svg "icon.direction")
        
        color (img "icon.pal.main") {
            fade   (svg "icon.gradient")
            fill_0 (sym "drop")
            fill_1 (sym "drop.fill")
        }
        brush (svg "icon.brush") {
            size  (svg "icon.size.dot")
            press (sym "scribble.variable")
            tilt  (sym "angle")
            index (sym "calendar.day.timeline.left")
        }
    }
    plato (svg "icon.plato.icosa") {
        convex   (svg "icon.convex")
        zoom     (svg "icon.zoom")
        invert   (svg "icon.invert")
        shadow   (sym "shadow")
        reflect  (svg "icon.opacity")
        more (svg "icon.more") {
            wire     (svg "icon.wireframe")
            phase    (svg "icon.plato.phase")
            harmonic (svg "icon.subtriangle")
            show     (sym "eye")
            run      (svg "icon.counter")
        }
    }
    cell (svg "icon.cellular.automata") {
        fade  (img "icon.cell.fade" )
        ave   (img "icon.cell.ave"  )
        melt  (img "icon.cell.melt" )
        tunl  (img "icon.cell.tunl" )
        zha   (img "icon.cell.zha"  )
        slide (img "icon.cell.slide")
        fred  (img "icon.cell.fred" )
    }
    camera (sym "camera") {
        stream (sym "video")
        front  (svg "icon.camera.facing")
        mask   (svg "icon.face")
        mix    (sym "camera.filters")
        fade   (svg "icon.gradient")
    }
    hand (svg "hands.both") {
        left (svg "hand.left") {
            thumb   {      knuc base inter tip }
            index   { meta knuc base inter tip }
            middle  { meta knuc base inter tip }
            ring    { meta knuc base inter tip }
            little  { meta knuc base inter tip }
        }
        right (svg "hand.right") {
            thumb   {      knuc base inter tip }
            index   { meta knuc base inter tip }
            middle  { meta knuc base inter tip }
            ring    { meta knuc base inter tip }
            little  { meta knuc base inter tip }
        }
    }
    more (svg "icon.more") {
        speed (img "icon.speed") {
            fps  (sym "speedometer")
            run  (sym "goforward")
            anim (sym "bolt.fill")
        }
        network (sym "bonjour") {
            bonjour (sym "network")
            follow  (sym "app.connected.to.app.below.fill")
            midi    (sym "pianokeys.inverse")
        }
        motion (sym "gyroscope")
        rotate (svg "icon.rotate")
        show (sym "eye") {
            cubemap (sym "cube")
            canvas  (svg "icon.canvas")
            plato   (svg "icon.dodec")
        }
    }
}
