cell (columns 2, svg "icon.cellular.automata") {

    slide ('Slide Bit Planes',
           seg, x 0_7=3,
           img "icon.cell.slide",
           <> pipe.cell˚slide.version,
           {{ @<cell.rule.slide.metal> }})

    zha   ('Cellular Automata Belousov–Zhabotinsky spirals',
           seg, x 0_6=2,
           img "icon.cell.zha",
           <> pipe.cell˚zha.version,
           {{ @<cell.rule.zha.metal> }})

    ave   ('Cellular Automata Averaging nearby pixels',
           val, x 0…1=0.5,
           img "icon.cell.ave",
           <> pipe.cell˚ave.version,
           {{ @<cell.rule.ave.metal> }})

    fade  ('Fade out to zero -- interesting in higher bit planes',
           val, x 0…2=1,
           img "icon.cell.fade",
           <> pipe.cell˚fade.version,
           {{ @<cell.rule.fade.metal> }})

    melt  ('Cellular Automata Reaction Diffusion rule - flashy at first',
           val, x 0…1=0.5,
           img "icon.cell.melt",
           <> pipe.cell˚melt.version,
           {{ @<cell.rule.melt.metal> }})

    tunl  ('Cellular Automata Tube Tunnel rule',
           seg, x 0_5=1,
           img "icon.cell.tunl",
           <> pipe.cell˚tunl.version,
           {{ @<cell.rule.tunl.metal> }})

    fred  ('Cellular Automata Fredkin rule',
           seg, x 0_4=4,
           img "icon.cell.fred",
           <> pipe.cell˚fred.version,
           {{ @<cell.rule.fred.metal> }})

    drift ('Drift rule (driftBits)',
           seg, x 1_2=1,
           svg "icon.cellular.automata",
           <> pipe.cell˚drift.version,
           {{ @<cell.rule.drift.metal> }})

    warren('Warren rule (version 0..11)',
           seg, x 0_11=1,
           svg "icon.cellular.automata",
           <> pipe.cell˚warren.version,
           {{ @<cell.rule.warren.metal> }})

    noise ('Noise rule (noiseBits)',
           seg, x 1_8=1,
           svg "icon.cellular.automata",
           <> pipe.cell˚noise.version,
           {{ @<cell.rule.noise.metal> }})
}
