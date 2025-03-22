hand(svg "hands.both") {
    left  (svg "hand.left") {
        thumb  {      knuc base inter tip }
        index  { meta knuc base inter tip }
        middle { meta knuc base inter tip }
        ring   { meta knuc base inter tip }
        little { meta knuc base inter tip }
        wrist
        forearm
    }
    right (svg "hand.right") {
        thumb  {      knuc base inter tip }
        index  { meta knuc base inter tip }
        middle { meta knuc base inter tip }
        ring   { meta knuc base inter tip }
        little { meta knuc base inter tip }
        wrist
        forearm
    }

    hand˚.(xyz, x -0.3…0.3, y 0.8…1.2, z -0.5…0.01,
           time, phase, joint, on 0, state) // decorate joints with expressions

    hand˚tip(xyz, x -0.3…0.3, y 0.8…1.2, z -0.5…0.01,
             time, phase, joint, on 1, state) // set finger tips on

    touching (<- hand˚middle.tip)
}
