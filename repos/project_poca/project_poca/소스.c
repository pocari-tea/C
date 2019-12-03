#include<stdio.h>
#include<string.h>
int main(void)
{

	//3번 문제//문제 해결
	/*int i, j;
	int a = 96;

	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c", a+j);
		}
		for (j = 2; j <= 6-i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;*/

	//5번 문제//문제 해결
	/*int i, length;
	char a[50];

	printf("입력: ");
	scanf("%s", a);
	printf("\n");
	length = strlen(a);

	printf("출력:");

	for (i = length; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
	printf("\n");

	return 0;*/

	//6번 문제//문제 해결
	/*char a[50], b[50];
	int i, length;
	scanf("%s", a);
	length = strlen(a);

	for (i = 0; i <= length; i++)
	{
		b[i] = a[i];
	}

		printf("a배열 입력 : %s\n", a);
		printf("a배열 출력 : %s\n", a);
		printf("b배열 출력 : %s\n", b);

	return 0;*/

	//7번
	/*int i, j;
	int a, b, k, x;
	scanf("%d %d", &a, &b);
	int c[10][10] = { 0 };
	k = 1;
	printf("\n");
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= b; j++)
		{
			c[i][j] = i * j;
			printf("%3d", c[i][j]);
		}
		printf("\n");
	}*/

	//8번
	/*int a[100][100], i, j, k = 0;
	a[0][0] = 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= k; j++)
		{
			a[i][k + 1] = 0;

			if (j == 0)
			{
				a[i][j] = 1;
			}
			a[i + 1][j+1] = a[i][j] + a[i][j + 1];  
			printf("%3d", a[i][j]);
		}
		printf("\n");
		k++;
	}*/

	return 0;
}