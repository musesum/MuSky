cell (columns 2,
      svg "icon.cellular.automata") {

    slide ('slide bit planes',
           seg, x 0_7~3,
           img "icon.cell.slide",
           <> pipe.cell˚slide.version)
    
    zha   ('Zhabatinsky-Bellosov spirals',
           seg, x 0_6~2,
           img "icon.cell.zha"  ,
           <> pipe.cell˚zha.version)
    
    ave   ('averaging nearby pixels',
           val, x 0…1~0.5,
           img "icon.cell.ave"  ,
           <> pipe.cell˚ave.version)
    
    fade  ('fade out to zero',
           val, x 0.2…2~1,
           img "icon.cell.fade" ,
           <> pipe.cell˚fade.version)
    
    melt  ('reaction diffusion rather flashy at first',
           val, x 0…1~0.5,
           img "icon.cell.melt" ,
           <> pipe.cell˚melt.version)
    
    tunl  ('tunnel tube rule',
           seg, x 0_5~1,
           img "icon.cell.tunl" ,
           <> pipe.cell˚tunl.version)
    
    fred  ('fredkin rule',
           seg, x 0_4~4,
           img "icon.cell.fred" ,
           <> pipe.cell˚fred.version)
}

