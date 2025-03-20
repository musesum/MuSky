hand {
    touching (<- model.hand˚middle.tip)
}
model.hand.{ left right }.{
    thumb  {      knuc base inter tip }
    index  { meta knuc base inter tip }
    middle { meta knuc base inter tip }
    ring   { meta knuc base inter tip }
    little { meta knuc base inter tip }
    wrist
    forearm
}

model.hand˚.(xyz, x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint, on 0, state) // decorate joints with expressions
model.hand˚tip(xyz, x -0.3…0.3, y 0.8…1.2, z -0.5…0.01, time, phase, joint, on 1, state) // set finger tips on 

menu {
    hand (svg "hands.both") {
        left (svg "hand.left") {
            thumb  {      knuc base inter tip }
            index  { meta knuc base inter tip }
            middle { meta knuc base inter tip }
            ring   { meta knuc base inter tip }
            little { meta knuc base inter tip }
        }
        right (svg "hand.right") {
            thumb  {      knuc base inter tip }
            index  { meta knuc base inter tip }
            middle { meta knuc base inter tip }
            ring   { meta knuc base inter tip }
            little { meta knuc base inter tip }
        }
    }
}
