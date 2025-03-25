midi('not parse - for reference only') {
    cc('extras controllers in the midi spec') {
        _main2 {
            bankSelect  (chan, num ==  0, val, time)
            breathCtrl  (chan, num ==  2, val, time)
            footPedal   (chan, num ==  4, val, time)
            dataEntry   (chan, num ==  6, val, time)
            effectCtrl1 (chan, num == 12, val, time)
            effectCtrl2 (chan, num == 13, val, time)
        }
        _sound {
            soundVariation  (chan, num == 70, val, time)
            resonance       (chan, num == 71, val, time)
            soundReleaseTime(chan, num == 72, val, time)
            soundAttackTime (chan, num == 73, val, time)
            frequencyCutoff (chan, num == 74, val, time)

            timbre          (chan, num == 71, val, time)
            brightness      (chan, num == 74, val, time)
        }
        _button {
            button1 (chan, num == 80, val, time)
            button2 (chan, num == 81, val, time)
            button3 (chan, num == 82, val, time)
            button4 (chan, num == 83, val, time)

            decayor          (chan, num == 80, val, time)
            hiPassFilter     (chan, num == 81, val, time)
            generalPurpose82 (chan, num == 82, val, time)
            generalPurpose83 (chan, num == 83, val, time)
        }
        _roland {
            rolandToneLevel1 (chan, num == 80, val, time)
            rolandToneLevel2 (chan, num == 81, val, time)
            rolandToneLevel3 (chan, num == 82, val, time)
            rolandToneLevel4 (chan, num == 83, val, time)
        }
        _level {
            reverbLevel  (chan, num == 91, val, time)
            tremoloLevel (chan, num == 92, val, time)
            chorusLevel  (chan, num == 93, val, time)
            detuneLevel  (chan, num == 94, val, time)
            phaserLevel  (chan, num == 95, val, time)
        }
        _parameter {
            dataButtonIncrement       (chan, num ==  96, val, time)
            dataButtonDecrement       (chan, num ==  97, val, time)
            nonregisteredParameterLSB (chan, num ==  98, val, time)
            nonregisteredParameterMSB (chan, num ==  99, val, time)
            registeredParameterLSB    (chan, num == 100, val, time)
            registeredParameterMSB    (chan, num == 101, val, time)
        }
        _soundControl {
            soundControl6  (chan, num == 75, val, time)
            soundControl7  (chan, num == 76, val, time)
            soundControl8  (chan, num == 77, val, time)
            soundControl9  (chan, num == 78, val, time)
            soundControl10 (chan, num == 79, val, time)
        }
        _undefined {
            undefined_3       (chan, num == 3,       val, time)
            undefined_9       (chan, num == 9,       val, time)
            undefined_14_31   (chan, num in 14_31,   val, time)
            undefined_85_90   (chan, num in 85_90,   val, time)
            undefined_102_119 (chan, num in 102_119, val, time)
        }
        _mode {
            allSoundOff       (chan, num == 120, val, time)
            allControllersOff (chan, num == 121, val, time)
            localKeyboard     (chan, num == 122, val, time)
            allNotesOff       (chan, num == 123, val, time)
            monoOperation     (chan, num == 126, val, time)
            polyMode          (chan, num == 127, val, time)
        }
        _omni {
            omniModeOff       (chan, num == 124, val, time)
            omniModeOn        (chan, num == 125, val, time)
            omniMode(0_1, <- (omniModeOff(0), omniModeOn(1)))
        }
    }
}
