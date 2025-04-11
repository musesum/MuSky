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
    
    hand˚.('decorate joints with expressions',
           xyz, x -0.3…0.3, y 0.8…1.2, z -0.5…0.01,
           time, phase, joint, on 0, state,)
    
    hand˚tip('set finger tips on',
             x -0.3…0.3, y 0.8…1.2, z -0.5…0.01,
             time, phase, joint, on 1, state)

    menu   ('bring back dismissed menu - not implemented',
            x -0.3…0.3, y 0.8…1.2, z -0.5…0.01,
            time, phase, joint, on, state,
            <- hand˚index.tip)

    draw   ('draw on canvas. see JointCanvasState:: parseCanvas',
            x -0.3…0.3, y 0.8…1.2, z -0.5…0.01,
            <- hand˚middle.tip)

    zoom   ('script only dispatch to zoom',
            x -0.3…0.3, y 0.8…1.2,
            <- hand˚ring.tip,
            -> plato.zoom(y: z))

    matter ('script only dispatch to change material',
            x -0.3…0.3, y 0.8…1.2, z -0.5…0.01,
            <- hand.right.little.tip,
            -> plato.material)

    alpha ('script only dispatch to change material',
            x -0.3…0.3, y 0.8…1.2, z -0.5…0.01,
            <- hand.left.little.tip,
            -> canvas.alpha)
}
