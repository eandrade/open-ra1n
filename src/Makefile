# Makefile for Open-ra1n
# Open-ra1n has been created with Open-ra1n - http://OpenPWN.org/
# Not for use in commercial products - Open-ra1n should be Open-Source!
PLATFORM=/$(Device)/$(Firmware)/$(Target)
Device=ipod2,1
Firmware=3.1.2
Target=IBSS

s5l8900:
	arm-elf-gcc entry.S main.c -I../includes -o Open-ra1n.elf -nostdlib -mthumb-interwork -lc -lgcc -Ttext=0x09000000
	arm-elf-objcopy -O binary Open-ra1n.elf Open-ra1n.bin

s5l8920:
	arm-elf-gcc entry.S main.c -I../includes -o Open-ra1n.elf -nostdlib -mthumb-interwork -lc -lgcc -Ttext=0x41000000
	arm-elf-objcopy -O binary Open-ra1n.elf Open-ra1n.bin

s5l8922:
	arm-elf-gcc entry.S main.c -I../includes -o Open-ra1n.elf -nostdlib -mthumb-interwork -lc -lgcc -Ttext=0x41000000
	arm-elf-objcopy -O binary Open-ra1n.elf Open-ra1n.bin
	
s5l8720:
	arm-elf-gcc entry.S main.c -I../includes$(PLATFORM) -o Open-ra1n.elf -nostdlib -mthumb-interwork -lc -lgcc -Ttext=0x09000000
	arm-elf-objcopy -O binary Open-ra1n.elf Open-ra1n.bin

s5l8930:
	arm-elf-gcc entry.S main.c -I../includes -o Open-ra1n.elf -nostdlib -mthumb-interwork -lc -lgcc -Ttext=0x41000000
	arm-elf-objcopy -O binary Open-ra1n.elf Open-ra1n.bin
