// OpenPwn - DarkMalloc
// /home/eric/Downloads/OpenWinPWN has been created with OpenWinPWN - http://OpenPWN.org/
// Not for use in commercial products - /home/eric/Downloads/OpenWinPWN should be Open-Source!

//Commands.h is used to correctly pass arguments to your payloads main function.

enum {
    kCmdArgTypeString = 0,
    kCmdArgTypeInteger = 1
};

typedef struct CmdArg {
    signed int unk1;
    unsigned int uinteger;
    signed int integer;
    unsigned int type;
    unsigned char* string;
} CmdArg;
