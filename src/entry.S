@ OpenPwn - DarkMalloc 
@ Open-ra1n has been created with OpenPWN - http://OpenPWN.org/
@ Not for use in commercial products - Open-ra1n should be Open-Source!

.arm
.text
_start:
.global _start
  @ store registers
  stmfd  sp!, {r0-r12,lr}
  
  @ branch with link to the main function
  bl   main
  
  ldmfd  sp!, {r0-r12,pc}
  
