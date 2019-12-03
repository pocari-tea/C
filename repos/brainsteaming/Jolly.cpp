#include<iostream>
#include<string>
#include<stdlib.h>
#include<algorithm>
#include<list>

using namespace std;

void Jolly(int arr[])
{
	list <int> buff;

	cout << sizeof(arr) / sizeof(int) << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		buff.insert(abs(arr[i] - arr[i + 1]));

	if ()
		cout << "Jolly" << endl;
	else
		cout << "Not Jolly" << endl;
}

int len(int arr[])
{
	int cnt = 0;
	for (i = 0;; i++) {
		
	}
}

int main()
{
	int n1[] = { 4, 1, 4, 2, 3 };
	int n2[] = { 5, 1, 4, 2, -1, 6 };

	Jolly(n1);
	Jolly(n2);
}