tape (columns 3, 'record playback loop', sym "recordingtape") {
    rec  ('record'  , tog, x 0, sym "record.circle.fill")
    play ('playback', tog, x 0, sym "play.fill")
    stop ('stop'    , tog, x 0, sym "stop.fill")
    forw ('forward' , tog, x 0, sym "forward.frame.fill")
    loop ('looping' , tog, x 0, sym "point.forward.to.point.capsulepath")
    learn ('learn'  , tog, x 0, sym "graduationcap")
    *(-> *(x 0)) // solo only one
}
