model_  {
    canvas (svg "icon.canvas") {

        shift  (svg "icon.direction")
        fade   (svg "icon.gradient")

        brush (svg "icon.brush") {
            size  (svg "icon.size.dot")
            press (sym "scribble.variable")
            tilt  (sym "angle")
            index (sym "calendar.day.timeline.left")
            canvas (sym "drop")
        }
        more (svg "icon.more") {
            repeat (svg "icon.repeat.arrows")
            mirror (svg "icon.mirror")
        }
    }
    plato (svg "icon.plato.icosa") {

        zoom     (sym "square.arrowtriangle.4.outward")
        shadow   (sym "shadow")
        material (svg "icon.opacity")
        phase    (svg "icon.plato.phase")
        harmonic (svg "icon.subtriangle")
        more (svg "icon.more") {
            convex   (svg "icon.convex")
            wire     (svg "icon.wireframe")
            show     (sym "eye")
            run      (svg "icon.counter")
        }
    }
    cell (svg "icon.cellular.automata") {
        slide (img "icon.cell.slide")
        zha   (img "icon.cell.zha"  )
        ave   (img "icon.cell.ave"  )
        fade  (img "icon.cell.fade" )
        more (svg "icon.more") {
            melt  (img "icon.cell.melt" )
            tunl  (img "icon.cell.tunl" )
            fred  (img "icon.cell.fred" )
        }
    }
    camera (sym "camera") {
        stream (sym "video")
        front  (svg "icon.camera.facing")
        mask   (svg "icon.face")
        mix    (sym "camera.filters")
        fade   (svg "icon.gradient")
    }
    _hand (svg "hands.both") {
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
        _motion (sym "gyroscope")
        _rotate (svg "icon.rotate")
        _canvas  (svg "icon.canvas")
        cubemap (sym "cube")
        plato   (svg "icon.dodec")
    }
}
