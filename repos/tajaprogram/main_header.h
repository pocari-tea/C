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
	int x; // 단어의 x좌표
	int have; // 단어인지 확인 (1 or 0으로)
	string word; //  저장 공간
};

hail hails[21]; // 20번째 hails는 판정선.
clock_t start, finish; // 시간

int secCheck = -1;// 시간 확인
double sec = 0.0; // 플레이 누적 시간
int Hp, point, choice = 0, Speed = 1000;