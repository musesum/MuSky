tape (columns 3, 'record playback loop', sym "recordingtape") {
    rec  ('record', sym "record.circle.fill", on 0)
    play ('playback', sym "play.fill", on 0)
    stop ('stop', sym "stop.fill", on 0)
    forw ('forward', sym "forward.frame.fill", on 0)
    loop ('looping', sym "point.forward.to.point.capsulepath", on 0)
    learn ('learn', sym "graduationcap", on 0)
    *(-> *(on 0)) // solo only one
}
