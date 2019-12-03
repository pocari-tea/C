#pragma once
#include <string>
#include <iostream>
using namespace std;

class Player {
	string name;
	string word;
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	string sayWord();
	bool succeed(string lastWord);
};
class Player;

class WordGame {
private:
	string title;
	string startWord;
	int nPlayers;
	Player *players;
	void createPlayers()
	{
		cout << "참가자는 몇명?>>";
		cin >> nPlayers;
		cout << "참가자의 닉네임들>>";
		for (int i = 0; i < nPlayers; i++)
		{
			cin >> players->setName;
			players->getName;
		}
	}
public:
	WordGame(string title, string startWord)
	{
		cout << "시작단어를 쓰시오" << endl;
		cin >> startWord;
	}
	void run()
	{
		 
	}
	~WordGame()
	{

	}
};