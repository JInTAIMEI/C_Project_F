#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BeginGame(char arr[3][3]);
void Background(char arr[3][3]);
void Player(char arr[3][3]);
void Conputer(char arr[3][3]);
char IsWin(char arr[3][3]);
void GameOver(char a);