#pragma once

#include<iostream>
#include<string>
#include<Windows.h>
#include<MMSystem.h>
#include <ctime>
#include <fstream>
#include <sstream>
#include <ctime>
#include <thread>
#include <conio.h>

#pragma comment(lib,"winmm.lib")
#pragma warning(disable: 4996)
using namespace std;
using std::thread;

string random_word();
int File_Count();
void user_input();
void alphabet_main();
void hail_initialization();
void alpha_initialization();
void make_hail();
void prnscreen(bool input = false);
void game_choice();
void Hail_main();
void viewlog();

class hail {

public:
	int x; // �ܾ��� x��ǥ
	int have; // �ܾ����� Ȯ�� (1 or 0����)
	string word; //  ���� ����
};

hail hails[21]; // 20��° hails�� ������.
clock_t start, finish; // �ð�

int secCheck = -1;// �ð� Ȯ��
double sec = 0.0; // �÷��� ���� �ð�
int Hp, point, choice = 0, Speed = 1000;