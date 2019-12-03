#pragma once
#include "main_header.h"

string alpha_XY[10][10];
int rand_X, rand_Y;

void alphabet_main()
{
	system("cls");
	srand((unsigned int)time(NULL));
	alpha_initialization();
	point = 0, Hp = 3;
	char user_input;

	while (1)
	{
		Sleep(Speed); // 속도 조절 (새로 고침 속도)
		system("cls");
		rand_X = rand() % 10;
		rand_Y = rand() % 10;
		if (alpha_XY[rand_X][rand_Y] == " ")
			alpha_XY[rand_X][rand_Y] = 'A' + (rand() % 26);
		else
			break;

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << alpha_XY[i][j];
			}
			cout << endl;
		}

		if (_kbhit())
		{
			user_input = _getch();
			
			switch (user_input)
			{
			case 'a':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s ==  alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'b':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'c':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'd':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'e':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'f':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'g':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'h':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'i':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'j':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				};
			case 'k':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'l':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'm':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'n':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'o':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'p':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'q':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'r':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 's':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 't':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'u':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'v':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'w':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'x':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'y':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			case 'z':
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						std::string s = (const char*)user_input;
						if (s == alpha_XY[i][j])
						{
							alpha_XY[rand_X][rand_Y] = " ";
							point++;
							break;
						}
					}
				}
			default:
				Hp--;
				break;
			}
		}

		if (Hp <= 0)
		{
			ofstream alpha_point("alpha_point");
			alpha_point << point << endl;
			break;
		}

		cout << "\n[ Hp ] " << Hp << "[ 점수 ] " << point << "점\n\n" << endl;
	}
}

void alpha_initialization()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			alpha_XY[i][j] = " ";
		}
	}
}