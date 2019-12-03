#pragma once
#include "main_header.h"

#define DELETE_KEY 8
#define ENTER_KEY 13

string inputString;

void Hail_main()
{
	Hp = 3, point = 0;
	system("cls");
	hail_initialization(); // �ܾ� �迭 �ʱ�ȭ
	start = clock(); // ���� ���� �ð� ���
	while (1)
	{
		static int i = 0;
		finish = clock();
		if (secCheck < (int)sec) // sleep�� ����ϸ� ���α׷��� �����. ��� ���� ���� �ڵ�
		{
			make_hail(); // ���ο� �ܾ� ����
			finish = clock(); // �ش� �ܾ ������ �ð� ���
			secCheck = (int)sec; // secCheck �缳��
		}

		sec = (double)(finish - start) / CLK_TCK; // ������� ������ �ð�
		prnscreen(); // ȭ�� ���
		if (_kbhit()) 
		{
			char data = _getch();
			if (data < 128)
			{
				if (data == DELETE_KEY)  
				{
					if (inputString.length() > 0) 
					{
						string newT = "";
						for (int i = 0; i < inputString.length() - 1; i++) 
						{
							newT += inputString[i];
						}
						inputString = newT;
					}
				}
				else if (data == ENTER_KEY) 
				{
					if (hails[i].word == inputString)
					{
						hails[i].word = " ";
						inputString = " ";
						point++;
					}
					else
					{
						Hp--;
					}
				}
				else 
				{
					char d [2] = { 0 };
					d[0] = data;
					inputString += d;
				}
			}
			prnscreen(true);
		}
		if (Hp <= 0)
		{
			ofstream hail_point("hail_point");
			hail_point << point << endl;
			break; // ���� ����
		}
	}
	system("cls");
	cout << "\nYOU DIED!" << endl;
	system("PAUSE");
}

void hail_initialization() // �ܾ� �迭 �ʱ�ȭ
{
	for (int i = 0; i < 21; i++)
	{
		hails[i].have = 0;
		hails[i].x = 0;
		hails[i].word = " ";
	}
}

void make_hail() // ���ο� �ܾ� ����
{
	srand((unsigned int)time(NULL));

	for (int i = 20; i >= 0; i--)
	{
		hails[i].word = hails[i - 1].word; // ���� �ܾ�� �б�
		hails[i].x = hails[i - 1].x;
		hails[i].have = hails[i - 1].have;
		hails[i - 1].have = 0;
		hails[i - 1].x = 0;
		hails[i - 1].word = " "; // �� ���� ����ó��
	}
	hails[0].have = 1;
	hails[0].x = rand() % 37 + 1;
	hails[0].word = random_word(); // ���� �ܾ� ��ġ
}

void prnscreen(bool input) // ȭ�� ��� �Լ�
{
	if (secCheck < (int)sec || input) {
		system("cls");
		for (int i = 0; i < 20; i++)
		{
			cout << hails[i].word << endl; // �ܾ� ���
		}
		cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl; // ������
		if (hails[20].have == 1) // �������� �ܾ �Ѿ
		{
			Hp--;
			hails[20].have = 0;
		}
		cout << "\n[ Hp ] " << Hp << "[ ���� ] " << point << "��\n\n" << endl; // Hp, �ð�, ���� ���
		cout << "�ܾ�>" << endl; // �ܾ� �Է�
		cout << inputString;
	}
}

string random_word() // ���� �ܾ� ��ȯ
{
	ifstream word_File("hail_word.txt");
	srand((unsigned int)time(NULL));
	// ���� �б�
	string line;
	int rand_line_count = rand() % File_Count(); // ���� ���� ��
	int Line_Count = -1;

	if (word_File.is_open())
	{
		do
		{
			getline(word_File, line);
			Line_Count++; // ���� ������ �´��� �˻�
		} while (Line_Count != rand_line_count);

		word_File.close();
	}

	return line;
}

int File_Count()
{
	ifstream word_File("hail_word.txt");
	string line;
	int Line_Count = 0;

	if (word_File.is_open())
	{
		while (!word_File.eof()) // ���� �������ٱ��� �б�
		{
			getline(word_File, line);
			Line_Count++;
		}
	}
	word_File.close();

	return Line_Count;
}

void user_input() // ���� �Է�
{
	while (1)
	{
		string input;
		if (_kbhit()) 
		{
			char data = _getch();
			cout << data;
		}
	}
}