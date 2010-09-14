// OpenPwn - DarkMalloc  & OpenWinPWN - fallensn0w
// /home/eric/Downloads/OpenWinPWN has been created with OpenWinPWN - http://OpenPWN.org/
// Not for use in commercial products - /home/eric/Downloads/OpenWinPWN should be Open-Source!

#include "commands.h"
#include "offsets.h"

typedef unsigned short uint16_t;
typedef unsigned long uint32_t;

//Macros (used for writing to memory addresses)
#define SET_REG16(x, y) (*((volatile uint16_t*)(x)) = (y))
#define SET_REG32(x, y) (*((volatile uint32_t*)(x)) = (y))
//End of Macros

int PWN(){
   SET_REG32(RSA, 0x2000); //removes sigchecks.
   SET_REG32(SDOM, 0x20002000);
   SET_REG32(PROD, 0x20002000);
   SET_REG32(CHIP, 0x20002000);
   SET_REG32(TYPE, 0x20002000);
   SET_REG32(SEPO, 0x20002000);
   SET_REG32(BORD, 0x20002000);
   SET_REG32(ECID, 0x20002000);
}

int agetenv(){
   SET_REG32(getenv, baseadd); 
}

int afsboot(){
   SET_REG32(getenv, fsboot);
}

int main(int argc, CmdArg* argv) {
PWN;
agetenv;
}
