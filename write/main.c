#include <stdio.h>
#include <stdlib.h>

volatile unsigned int var;
volatile unsigned int input;

int main()
{
	read(0, &input, 4);
	read(0, input,  4);

	if (var == 0xdeadbeef)
	{
		system("cat flag.txt");
	}
}
