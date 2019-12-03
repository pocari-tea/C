#include <stdio.h>
#include <conio.h>

void TestFunc()
{
	int a = 15;
}

int main()
{
	puts("Begin: main()");
	puts("Before");
	TestFunc(16);
	puts("After");
	puts("End: main()");

	return 0;
}