#include <iostream>
#include <string>
#include <random>
using namespace std;

string& KawiBawiBo(string KaBabo);

int main()
{
	string KaBaBo;
	string user_name;
	
	cout << "컴퓨터와 사람이 가위 바위 보 대결을 펼칩니다." << endl;
	cout << "선수 이름을 입력하세요" << endl;
	cin >> user_name;
	while (1)
	{
		cout << user_name << ">>";
		cin >> KaBaBo;

		if (KaBaBo == "가위")
		{
			if (KawiBawiBo() == "주먹")
			{
				cout << "짐" << endl;
			}
			else if (KawiBawiBo() == "가위")
			{
				cout << "비김" << endl;
			}
			else
			{
				cout << "a";
			}
		}
	}

	return 0;
}

class KawiBawiBo
{
private:
	string computer;
	
public:
	string KawiBawiBo();
};