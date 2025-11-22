tape ('record playback loop', sym "recordingtape") {
    record (tog, x 0, -> play(x 0)) {
        _on  (sym "record.circle.fill")
        _off (sym "square.fill")
    }
    play (tog, x 0, -> record(x 0)) {
        _on  (sym "play.fill")
        _off (sym "play")
    }
    loop (tog, x 0, -> record(x 0)) {
        _on  (sym "arrow.trianglehead.clockwise")
        _off (sym "arrow.forward.to.line.compact")
    }
    learn (tog, x 0) {
        _on  (sym "graduationcap.fill")
        _off (sym "graduationcap")
    }
    beat (tap, x 0) {
        _on  (svg "icon.heartbeat.fill")
        _off (svg "icon.heartbeat")
    }
}
