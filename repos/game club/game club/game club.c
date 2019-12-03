#include<stdio.h>

/*int GetDays(int year, int month)
{

	int total = (year - 1) * 365 + ((year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400);
	int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int a = 0; a < month - 1; a++)
		total += m[a];
	if (month >= 3 && (year % 4 == 0) && year % 100 != 0 || year % 400 == 0)
	total++;
	return (total + 1) % 7;
}*/

/*void main()
{
	int a, b, c = 1, d;
	scanf("%d %d", &a, &b);
	printf("\t\t%d년 %d월 달력\n");

	if (b == 2)
	{
		if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0) d = 29;
		else d = 28;
	}
	else if ((b == 4 || b == 6) || (b == 9 || b == 11))d = 30;
	else d = 31;
	printf("일\t월\t화\t수\t목\t금\t토\t");
	for (int i = GetDays(a, b); i > 0; i--)
	{
		printf("\t");
	}
	for (; c <= d; c++)
	{
		printf("%2\t", c);
		if ((GetDays(a, b) + c) % 7 == 0) puts(" ");
	}
	puts(" ");

}*/

/*void strcpy(char*d, char*s)

{
	while (*s) { *d++ = *s++ }
}*/