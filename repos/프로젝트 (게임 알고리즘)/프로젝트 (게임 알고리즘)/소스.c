#include<stdio.h>//standard input output
#include <stdlib.h>//standard library ���⿡ rand�Լ��� �� �ִ�.
#include<string.h>
#include<windows.h>//ȭ�� Ŭ��� ����ִ� printf("cls");
#pragma warning(disable:4996)
int main(void)
{
	int i;//�ݺ���
	int cho, hp, damage, per, today = 1, map, weapon, defense, mhp, work, mdamage, temp, iper;// choice ���� percent �ۼ�Ʈ chracter ĳ���� mhp ����hp temp �ڽ��� ü���� �ٽ� ȸ����Ű�� ���� ü�� ����
	char YN;
	char item[50], monster[10], job[5];
	//�������� ���� �� rand�Լ��� 0���� 100���� �ϰ� ������ �������� � �������� ���� �� �ֵ��� �Ѵ�! 
	//���� ��� 1~10���� 1�� �������� ��´ٰ� ���� �� 100�� �ִ�ϱ� ���� Ȯ���� 10%�̴�. 
	while (1)//���� ����
	{
	resurrection:

		printf("ĳ���͸� �����Ͻʽÿ�.\n1. ����  2. �ü�  3.  ������\n>>");
		scanf_s("%d", &cho);
		system("cls");
		if (cho > 3 || 1 > cho)
		{
			printf("3���� ������ ���ð����մϴ�.\n\n");
			continue;
		}
		switch(cho)
		{
		case 1:
		{
			printf("����\n");
			printf("HP: 150\n");
			printf("���ݷ�: 7~9\n");
			printf("����: 8\n");
			printf("��빫��: �Ѽհ�, ��հ�, ����, â\n");
			printf("����: �߰�\n\n");

			getchar();
			printf("������ �����Ͻðڽ��ϱ�? Y/N \n>>");
			scanf("%c", &YN);

			if (YN == 'y' || YN =='Y')
			{
				system("cls");
				printf("����� ������ ���簡 �Ǿ����ϴ�.\n\n");
				hp = 150;
				temp = hp;
				strcpy(job, "����");
				damage = rand() % 3 + 7;
				defense = 8;
			}
			else if (YN == 'n' || YN =='N')
			{
				system("cls");
				printf("���õ��� �ʾҽ��ϴ�.\n\n");
				continue;
			}
			else
			{
				system("cls");
				printf("Y/N�� �������ּ���.\n\n");
				continue;
			}
			break;
		}
		case 2:
		{
			printf("�ü�\n");
			printf("HP: 120\n");
			printf("���ݷ�: 11~13\n");
			printf("��빫��: Ȱ, ����, ���\n");
			printf("���: �氩\n\n");

			getchar();
			printf("������ �����Ͻðڽ��ϱ�? Y/N \n>>");
			scanf("%c", &YN);

			if (YN == 'y' || YN =='Y')
			{
				system("cls");
				printf("����� ������ �ü��� �Ǿ����ϴ�.\n\n");
				hp = 120;
				temp = hp;
				strcpy(job, "�ü�");
				damage = damage = rand() % 3 + 11;
			}
			else if (YN == 'n' || YN =='N')
			{
				 system("cls");
				 printf("���õ��� �ʾҽ��ϴ�.\n\n");
				continue;
			}
			else
			{
				system("cls");
				printf("Y/N�� �������ּ���.\n\n");
				continue;
			}
			break;
		}
		case 3:
		{
			system("cls");
			printf("������Ʈ ���Դϴ�.\n\n");
			continue;
		}
		}
		break;
	}
	while (1)
	{
	back:
		printf("%d��° ��\n", today);
		printf("������ �Ͻðڽ��ϱ�?(1:����ͷ� �̵�, 2: �������� �ٲ۴�, 3: ������)\n>>");
		scanf_s("%d", &cho);
		if (cho > 3 || cho < 1)
		{
			system("cls");
			printf("�������� 3���� ���ð����մϴ�.\n\n");
			continue;
		}

		printf("\n");
		switch (cho)
		{
		case 1:
		{
			system("cls");
			printf("���� �����ϼ���.(1. �� 2. )\n");
			scanf_s("%d", &map);
			if (map == 1)
			{
				system("cls");
				printf("������ ����.\n\n");

				per = rand() % 100 + 1;//���� ����
				if (1 <= per && per <= 5)//5%
				{
					system("cls");
					printf("�ƹ��͵� �������� �ʾҴ�.\n");
				}
				if (6 <= per && per <= 100)//20%
				{
					system("cls");
					printf("�������� �����Ͽ���.\n\n");
					strcpy(monster, "������");
				}
			}
		break;
		}
		case 2:
		{
			system("cls");
			printf("���� ������ ���\n\n");
			for (i = 0; item[i] != '\0'; i++)
			{
				printf("%4s", item);
				scanf("%d", &i);
				i = i - 1;
				if (1 <= i && i <= 50)
				{
					printf("�������� ��ü�Ͻðڽ��ϱ�? Y/N\n>>");
					getchar();
					scanf("%c", &YN);
					printf("\n");
					if (YN == 'y' || YN == 'Y')
					{
						system("cls");
						printf("�������� ��ü�Ǿ����ϴ�.\n");
					}
					else if (YN == 'n' || YN == 'N')
					{
						system("cls");
						printf("���õ��� �ʾҽ��ϴ�.\n\n");
						continue;
					}
					else
					{
						system("cls");
						printf("Y/N�� �������ּ���.\n\n");
						continue;
					}
				}
				if (i == -1)
				{
					system("cls");
					continue;
				}
				else
				{
					system("cls");
					printf("1~50���̸� ���ð����մϴ�.\n");
					continue;
				}
			}
			break;
		}
		case 3:
		{
			system("cls");
			today++;
			hp = temp;
			printf("������ ���� ü���� ȸ���Ǿ���.\n");
			printf("�Ϸ簡 ������.\n\n");
			break;
		}
		}

		if (per >= 5)//���� ����
		{
			if (strcmp(monster, "������") == 0)
			{
				mhp = 50;
				printf("%s�� hp: %d\n", monster, mhp);//���� �Ǵ�

				while (1)
				{
					mdamage = rand() % 5 + 1;
					printf("%s�� ���ݷ�: 1~5\n", monster);
					printf("��� �ұ�?(1. �ο�� 2. ����ģ��.)\n>>");
					scanf("%d", &work);
					system("cls");
					if (work == 1)
					{
						system("cls");
						mhp = mhp - damage;
						hp = hp - mdamage;
						printf("%s�� hp�� %d�޾Ҵ�.\n", monster, damage);
						printf("%s�� hp: %d\n", monster, mhp);
						printf("���� hp�� %d�޾Ҵ�.\n", mdamage);
						printf("���� hp: %d\n\n", hp);
						if (mhp <= 0)//�������� ȹ��
						{
							system("cls");
							printf("%s��/�� �׾���.\n\n", monster);
							iper = rand() % 101 + 1;
							if (1 <= iper && iper <= 100)
							{
								printf("������ 1�� �����.\n");
								for (i = 0; i < 50; i++)
								{
									strcpy(item, "������ 1");
								}
								goto back;
							}
						}
						if (hp <= 0)
						{
							system("cls");
							printf("10���� �޾ҽ��ϴ�.\n\n");
							
							printf("�ٽ� �����Ͻðڽ��ϱ�? Y/N\n>>");
							scanf("%c", &YN);
							if (YN == 'y' || YN == 'Y')
							{
								system("cls");
								printf("��Ȱ�ϼ̽��ϴ�.\n\n");

								goto resurrection;
							}
							if (YN == 'n' || YN == 'N')
							{
								system("cls");
								printf("END\n\n");
								return 0;
							}
						}
					}
					if (work == 2)
					{
						system("cls");
						printf("������ �����ƴ�.\n\n");
						goto back;
					}
				}
			}
		}
		
	}
	//rand()�� (void)�� �̹� �ֱ⶧���� ���� �ʿ䰡 ����.
	//rnad() % 4 + 10�� �����Լ��� 4�� ������ �ȴٸ� �������� 0~3���� �׸��� 10�� ���ϴ� 10~13�� �ǰ� �ȴ�.
	return 0;
}