#include <iostream>
#include <string>
#include <random>
using namespace std;

string& KawiBawiBo(string KaBabo);

int main()
{
	string KaBaBo;
	string user_name;
	
	cout << "��ǻ�Ϳ� ����� ���� ���� �� ����� ��Ĩ�ϴ�." << endl;
	cout << "���� �̸��� �Է��ϼ���" << endl;
	cin >> user_name;
	while (1)
	{
		cout << user_name << ">>";
		cin >> KaBaBo;

		if (KaBaBo == "����")
		{
			if (KawiBawiBo() == "�ָ�")
			{
				cout << "��" << endl;
			}
			else if (KawiBawiBo() == "����")
			{
				cout << "���" << endl;
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