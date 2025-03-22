more (svg "icon.more") {

    bonjour (peer "bonjour",
             sym "bonjour",
             <> sky.network.bonjour)

    archive (arch,
             sym "building.columns")

    _fps (val, 0_60~60,
          img "icon.speed",
          <> sky.main.fps)

    _anim(val, 0…1~0.24,
          sym "bolt.fill",
          <> sky.main.anim)

    _snapshot(tog, x 0,
              sym "camera.shutter.button")

    _motion  (tog, x 1,
              sym "gyroscope")

    _rotate  (xy,  x -1…1~0, y -1…1~0,
              svg "icon.rotate",
              <> pipe.render.cubemap.rotate)

    _canvas  (tog, x 0,
              svg "icon.canvas")

    _follow  (tog, x 1,
              sym "app.connected.to.app.below.fill",
              <> sky.network.follow)

    _midi    (tog, x 1,
              sym "pianokeys.inverse",
              <> sky.network.midi)
}
