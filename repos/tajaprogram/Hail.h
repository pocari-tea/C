#pragma once
#include "main_header.h"

#define DELETE_KEY 8
#define ENTER_KEY 13

string inputString;

void Hail_main()
{
	Hp = 3, point = 0;
	system("cls");
	hail_initialization(); // 단어 배열 초기화
	start = clock(); // 게임 시작 시간 기록
	while (1)
	{
		static int i = 0;
		finish = clock();
		if (secCheck < (int)sec) // sleep을 사용하면 프로그램이 멈춘다. 고로 좋지 않은 코드
		{
			make_hail(); // 새로운 단어 생성
			finish = clock(); // 해당 단어가 생성된 시간 기록
			secCheck = (int)sec; // secCheck 재설정
		}

		sec = (double)(finish - start) / CLK_TCK; // 현재까지 진행한 시간
		prnscreen(); // 화면 출력
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
			break; // 게임 오버
		}
	}
	system("cls");
	cout << "\nYOU DIED!" << endl;
	system("PAUSE");
}

void hail_initialization() // 단어 배열 초기화
{
	for (int i = 0; i < 21; i++)
	{
		hails[i].have = 0;
		hails[i].x = 0;
		hails[i].word = " ";
	}
}

void make_hail() // 새로운 단어 생성
{
	srand((unsigned int)time(NULL));

	for (int i = 20; i >= 0; i--)
	{
		hails[i].word = hails[i - 1].word; // 기존 단어는 밀기
		hails[i].x = hails[i - 1].x;
		hails[i].have = hails[i - 1].have;
		hails[i - 1].have = 0;
		hails[i - 1].x = 0;
		hails[i - 1].word = " "; // 뒷 줄은 공백처리
	}
	hails[0].have = 1;
	hails[0].x = rand() % 37 + 1;
	hails[0].word = random_word(); // 랜덤 단어 배치
}

void prnscreen(bool input) // 화면 출력 함수
{
	if (secCheck < (int)sec || input) {
		system("cls");
		for (int i = 0; i < 20; i++)
		{
			cout << hails[i].word << endl; // 단어 출력
		}
		cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl; // 판정선
		if (hails[20].have == 1) // 판정선에 단어가 넘어감
		{
			Hp--;
			hails[20].have = 0;
		}
		cout << "\n[ Hp ] " << Hp << "[ 점수 ] " << point << "점\n\n" << endl; // Hp, 시간, 점수 출력
		cout << "단어>" << endl; // 단어 입력
		cout << inputString;
	}
}

string random_word() // 랜덤 단어 반환
{
	ifstream word_File("hail_word.txt");
	srand((unsigned int)time(NULL));
	// 파일 읽기
	string line;
	int rand_line_count = rand() % File_Count(); // 랜덤 라인 줄
	int Line_Count = -1;

	if (word_File.is_open())
	{
		do
		{
			getline(word_File, line);
			Line_Count++; // 랜덤 라인이 맞는지 검사
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
		while (!word_File.eof()) // 파일 마지막줄까지 읽기
		{
			getline(word_File, line);
			Line_Count++;
		}
	}
	word_File.close();

	return Line_Count;
}

void user_input() // 유저 입력
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