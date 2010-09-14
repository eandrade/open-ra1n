# Makefile for /home/eric/Downloads/OpenWinPWN
# Open-ra1n has been created with OpenWinPWN - http://OpenPwn.org/
# Not for use in commercial products - Open-ra1n should be Open-Source!

all:
	@echo ' '
	@echo 'Choose your Processor below to compile.'
	@echo '  make s5l8900 (iPhone, iPod Touch, iPhone 3G)'
	@echo '  make s5l8720 (iPod touch 2G)'
	@echo '  make s5l8920 (iPhone 3GS)'
	@echo '  make s5l8922 (iPod Touch 3G)'
	@echo '  make s5l8930 (iPad, iPhone 4)'
	@echo ' '

s5l8900:
	@cd src;make s5l8900;cd ..;

s5l8920:
	@cd src;make s5l8920;cd ..;
	
s5l8720:
	@cd src;make s5l8720;cd ..;
	
s5l8922:
	@cd src;make s5l8922;cd ..;
	
s5l8930:
	@cd src;make s5l8930; cd ..;

pkg:
	tar -cvzf Open-ra1n.tar.gz includes src build README.txt Makefile;

clean:
	@cd build;rm Open-ra1n.bin;rm Open-ra1n.elf; cd ..;

