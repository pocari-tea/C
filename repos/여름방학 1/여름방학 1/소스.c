#include<stdio.h>
#include<string.h>

int main()
{
	int a[8], b[8], c[8], t, team[4][8], temp, red = 0, blue = 0;
	char w[5], temp1[4];

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%s", w);
		for (int j = 0; j < 8; j++)
		{
			scanf("%s %d:%d.%d", &team[j], &a[j], &b[j], &c[j]);
		}
		for (int j = 0; j < 8; j++)
		{
			for (int k = j; k < 8; k++)
			{
				if (c[j] < c[k])
				{
					strcpy(temp1, team[j]);
					strcpy(team[j], team[k]);
					strcpy(team[k], temp1);

					temp = a[j];
					a[j] = a[k];
					a[k] = temp;
					temp = b[j];
					b[j] = b[k];
					b[k] = temp;
					temp = c[j];
					c[j] = c[k];
					c[k] = temp;
				}
			}
		}
		for (int j = 0; j < 8; j++)
		{
			for (int k = j; k < 8; k++)
			{
				if (b[j] < b[k])
				{
					strcpy(temp1, team[j]);
					strcpy(team[j], team[k]);
					strcpy(team[k], temp1);

					temp = a[j];
					a[j] = a[k];
					a[k] = temp;
					temp = b[j];
					b[j] = b[k];
					b[k] = temp;
					temp = c[j];
					c[j] = c[k];
					c[k] = temp;
				}
			}
		}
		for (int j = 0; j < 8; j++)
		{
			for (int k = j; k < 8; k++)
			{
				if (a[j] < a[k])
				{
					strcpy(temp1, team[j]);
					strcpy(team[j], team[k]);
					strcpy(team[k], temp1);

					temp = a[j];
					a[j] = a[k];
					a[k] = temp;
					temp = b[j];
					b[j] = b[k];
					b[k] = temp;
					temp = c[j];
					c[j] = c[k];
					c[k] = temp;
				}
			}
		}
	}
	return 0;
}