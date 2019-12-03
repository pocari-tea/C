#include "main_header.h"
#include "Hail.h"
#include "alphabet.h"
#include "log.h"

int main()
{
	system("cls");
	cout << "\n\n" << endl;
	cout << "     HH       HH     AAA     IIIIII LL " << endl;
	cout << "     HH       HH   AA   AA     II   LL " << endl;
	cout << "     HH       HH  AA     AA    II   LL " << endl;
	cout << "     HHHHHHHHHHH AA       AA   II   LL " << endl;
	cout << "     HH       HH AAAAAAAAAAA   II   LL    " << endl;
	cout << "     HH       HH AA       AA   II   LL " << endl;
	cout << "     HH       HH AA       AA IIIIII LLLLLLLLLLL \n" << endl;
	system("PAUSE");


	while (1)
	{
		system("cls");
		cout << "\n\n\n                            [ 메인메뉴 ]\n\n\n\n" << endl;
		cout << "                            1. 게임선택\n" << endl;
		cout << "                            2. 게시판\n" << endl;
		cout << "                            3. 게임종료\n" << endl;
		cout << "                       선택>";
		cin >> choice;

		switch (choice)
		{
		case 1:
			game_choice();
			break;
		case 2:
			viewlog();
			break;
		case 3:
			system("cls");
			return 0;
			break;
		default:
			break;
		}
	}

	return 0;
}

void game_choice()
{
	system("cls");
	cout << "\n\n\n                            [ 게임종류 ]\n\n\n\n\n" << endl;
	cout << "                            1. [ 우박 ]\n\n";
	cout << "                            2. [ 알파벳 ]\n\n";
	cout << "                            3. [ 돌아가기 ]\n\n";
	cout << "                       선택>";
	cin >> choice;

	switch (choice)
	{
	case 1:
		Hail_main();
		break;
	case 2:
		alphabet_main();
		break;
	case 3:
		main();
		break;
	default:
		break;
	}
}