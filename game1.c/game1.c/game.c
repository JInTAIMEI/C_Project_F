#define _CRT_SECURE_NO_WARNINGS 1 
#include "game.h"

void BeginGame(char arr[3][3]) {
	//将数组都初始化成“ ”
	for (int i = 0; i < 3; i++) {
		int j = 0;
		for(j = 0; j < 3; j++) {
			arr[i][j] = ' ';
		}
	}
}

void Background(char arr[3][3]) {
	//把背景画出来
	for (int i = 0; i < 3; i++) {
		int j = 0;
		for (j = 0; j < 3; j++) {
			printf(" %c ", arr[i][j]);
			if (j < 2) 
				printf("|");
			else
				printf("\n");
			}
			if (i < 2) {
				printf("---|---|---\n");
		}
		}
	}

void Player(char arr[3][3]) {
	int x = 0;
	int y = 0;
	while (1) {
		scanf("%d %d", &x, &y);
		if (arr[x - 1][y - 1] == ' ') {
			arr[x - 1][y - 1] = '*';
			break;
		}
		else {
			printf("坐标错误，请重新输入");
		}
	}
	Background(arr);
}

void Conputer(char arr[3][3]) {
	while (1) {
		int x = rand() % 3;
		int y = rand() % 3;
		if (arr[x][y] == ' ') {
			arr[x][y] = '#';
			break;
		}
	}
	Background(arr);
}

char IsWin(char arr[3][3]) {
	int i = 0;
	for (i = 0; i < 3; i++) {
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ') {
			if (arr[i][0] == '*') {
				return '*';
			}
			if (arr[i][0] == '#') {
				return '#';
			}
		}
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ') {
			if (arr[0][i] == '*') {
				return '*';
			}
			if (arr[0][i] == '#') {
				return '#';
			}
		}
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ') {
		if (arr[0][0] == '*') {
			return '*';
		}
		if (arr[0][0] == '#') {
			return '#';
		}
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != ' ') {
		if (arr[0][2] == '*') {
			return '*';
		}
		if (arr[0][2] == '#') {
			return '#';
		}
	}
	int count = 0;
	for (i = 0; i < 3; i++) {
		int j = 0;
		for ( j = 0; j < 3; j++) {
			if (arr[i][j] != ' ') {
				count++;
				if (count == 9) {
					return 'p';
				}
			}
		}
	}
	return 'c';
}

void GameOver(char a) {
	if (a == '*') {
		printf("玩家赢");
	}
	if (a == '#') {
		printf("电脑赢");
	}
	if (a == 'p') {
		printf("平局");
	}
}