tape ('record playback loop', sym "recordingtape") {
    record (tog, x 0, sym "record.circle.fill")
    play   (tog, x 0, sym "play.fill")
    loop   (tog, x 0, sym "point.forward.to.point.capsulepath")
    learn  (tog, x 0, sym "graduationcap")
    beat   (tap, x 0, svg "icon.heartbeat")
    *(-> *(x 0)) // solo only one
}
