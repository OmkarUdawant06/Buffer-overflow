#include <stdio.h>
#include <stdlib.h>

void prompt()
{
	char buf[100];					//Specify buffer size
	gets(buf);
	printf("You entered: %s\n", buf);		//Print input string

}

int main()
{
	prompt();					//call to prompt function
	return 0;
}

void target()
{
	printf("Haha! You got pwned!\n");		//hack message to display
	exit(0);
}
