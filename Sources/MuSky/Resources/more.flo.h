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
    
    _snapshot('take a shapshot of current image',
              tog, x 0,
              sym "camera.shutter.button")
    
    _follow (tog, x 1,
             sym "app.connected.to.app.below.fill",
             <> sky.network.follow)
    
    _midi (tog, x 1,
           sym "pianokeys.inverse",
           <> sky.network.midi)
}
