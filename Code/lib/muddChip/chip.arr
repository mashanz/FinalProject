; Pad Frame arrangement file
; Cassie_Chou@hmc.edu
; 27 February 2007
; Generate a padframe for a 108-pin MOSIS package
; Based on code by David Harris (David_Harris@hmc.edu)

; specify the cell library with the pads
celllibrary muddpads13_ami05.jelib

; make layout and schematic views
views lay sch

; create a top-level cell containing the padframe and core
cell chip

; place this cell as the "core"
core core

; set the alignment of the pads (specifying input and output port names)
align pad_corner      dvdd-1 dvdd
align pad_in          dvdd-1 dvdd
align pad_out         dvdd-1 dvdd
align pad_analog      dvdd-1 dvdd
align pad_dvdd        dvdd-1 dvdd
align pad_dgnd        dvdd-1 dvdd
align pad_blank        dvdd-1 dvdd
align pad_inout		dvdd-1 dvdd

;; replace the pad_in and pad_out statements with the pad frame arrangement you want.
;; keep at least two pad_dvdd and pad_dgnd pads somewhere on the chip to supply
;; power and ground to the pads and core

; place the top edge of pads counterclockwise, starting with upper-right
place pad_corner
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_dvdd
place pad_dgnd
place pad_inout en = memrwb data=memdata0 export pad=memdata0 
place pad_in din=interrupts7 export pad=interrupts7
place pad_in din=interrupts6 export pad=interrupts6
place pad_in din=interrupts5 export pad=interrupts5
place pad_dvdd
place pad_dgnd
place pad_in din=interrupts4 export pad=interrupts4
place pad_in din=interrupts3 export pad=interrupts3
place pad_in din=interrupts2 export pad=interrupts2
place pad_in din=interrupts1 export pad=interrupts1
place pad_in din=interrupts0 export pad=interrupts0
place pad_dgnd
place pad_dvdd
place pad_in din=reset export pad=reset
place pad_in din=ph2 export pad=ph2
place pad_in din=ph1 export pad=ph1
place pad_in din=memdone export pad=memdone
place pad_out dout=memen export pad=memen
place pad_out dout=memrwb export pad=memrwb
place pad_dgnd
place pad_dvdd
place pad_out dout=membyteen0 export pad=membyteen0
place pad_out dout=membyteen1 export pad=membyteen1
place pad_dgnd
place pad_dvdd
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_blank
; place the left edge of pads
; from top to bottom
rotate cc
place pad_corner
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_dvdd
place pad_dgnd
place pad_dgnd
place pad_out dout=membyteen2 export pad=membyteen2
place pad_out dout=membyteen3 export pad=membyteen3
place pad_in din=memadr2 export pad=memadr2
place pad_in din=memadr3 export pad=memadr3
place pad_in din=memadr4 export pad=memadr4
place pad_in din=memadr5 export pad=memadr5
place pad_in din=memadr6 export pad=memadr6
place pad_in din=memadr7 export pad=memadr7
place pad_in din=memadr8 export pad=memadr8
place pad_dvdd
place pad_dgnd
place pad_in din=memadr9 export pad=memadr9
place pad_in din=memadr10 export pad=memadr10
place pad_in din=memadr11 export pad=memadr11
place pad_in din=memadr12 export pad=memadr12
place pad_in din=memadr13 export pad=memadr13
place pad_in din=memadr14 export pad=memadr14
place pad_in din=memadr15 export pad=memadr15
place pad_in din=memadr16 export pad=memadr16
place pad_in din=memadr17 export pad=memadr17
place pad_in din=memadr18 export pad=memadr18
place pad_in din=memadr19 export pad=memadr19
place pad_dvdd export pad=VDD
place pad_dgnd export pad=GND
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_blank

; place the bottom edge of pads
; from left to right
rotate cc
place pad_corner
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_dgnd
place pad_dvdd
place pad_in din=memadr20 export pad=memadr20
place pad_in din=memadr21 export pad=memadr21
place pad_in din=memadr22 export pad=memadr22
place pad_in din=memadr23 export pad=memadr23
place pad_in din=memadr24 export pad=memadr24
place pad_in din=memadr25 export pad=memadr25
place pad_in din=memadr26 export pad=memadr26
place pad_dgnd
place pad_dvdd
place pad_in din=memadr27 export pad=memadr27
place pad_in din=memadr28 export pad=memadr28
place pad_inout en = memrwb data=memdata31 export pad=memdata31
place pad_inout en = memrwb data=memdata30 export pad=memdata30
place pad_inout en = memrwb data=memdata29 export pad=memdata29
place pad_inout en = memrwb data=memdata28 export pad=memdata28
place pad_inout en = memrwb data=memdata27 export pad=memdata27
place pad_dgnd
place pad_dvdd
place pad_inout en = memrwb data=memdata26 export pad=memdata26
place pad_inout en = memrwb data=memdata25 export pad=memdata25
place pad_inout en = memrwb data=memdata24 export pad=memdata24
place pad_inout en = memrwb data=memdata23 export pad=memdata23
place pad_inout en = memrwb data=memdata22 export pad=memdata22
place pad_dgnd
place pad_dvdd
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_blank

; place the right edge of pads
; from bottom to top
rotate cc
place pad_corner
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_dvdd
place pad_dgnd
place pad_inout en = memrwb data=memdata21 export pad=memdata21
place pad_inout en = memrwb data=memdata20 export pad=memdata20
place pad_inout en = memrwb data=memdata19 export pad=memdata19
place pad_inout en = memrwb data=memdata18 export pad=memdata18
place pad_inout en = memrwb data=memdata17 export pad=memdata17
place pad_inout en = memrwb data=memdata16 export pad=memdata16
place pad_inout en = memrwb data=memdata15 export pad=memdata15
place pad_inout en = memrwb data=memdata14 export pad=memdata14
place pad_inout en = memrwb data=memdata13 export pad=memdata13
place pad_inout en = memrwb data=memdata12 export pad=memdata12
place pad_dgnd
place pad_dvdd
place pad_inout en = memrwb data=memdata11 export pad=memdata11
place pad_inout en = memrwb data=memdata10 export pad=memdata10
place pad_inout en = memrwb data=memdata9 export pad=memdata9
place pad_inout en = memrwb data=memdata8 export pad=memdata8
place pad_inout en = memrwb data=memdata7 export pad=memdata7
place pad_inout en = memrwb data=memdata6 export pad=memdata6
place pad_inout en = memrwb data=memdata5 export pad=memdata5
place pad_inout en = memrwb data=memdata4 export pad=memdata4
place pad_inout en = memrwb data=memdata3 export pad=memdata3
place pad_inout en = memrwb data=memdata2 export pad=memdata2
place pad_inout en = memrwb data=memdata1 export pad=memdata1
place pad_dgnd
place pad_dvdd
place pad_blank
place pad_blank
place pad_blank
place pad_blank
place pad_blank