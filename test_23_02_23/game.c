#define _CRT_SECURE_NO_WARNINGS 1 
#include "game.h"

void New(char arr1[11][11],char arr2[11][11],char a,char b) {
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			 arr1[i][j] = a;
			 arr2[i][j] = b;
		}
	}
}

void Creat(char arr2[11][11]) {
	printf("  1 2 3 4 5 6 7 8 9\n");
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if (j == 1) {
				printf("%d ", i);
			}
			printf("%c ", arr2[i][j]);
		}
		printf("\n");
	}
}
void Creat1(char arr1[11][11]) {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%c ", arr1[i][j]);
		}
		printf("\n");
	}
}

void Set(char arr1[11][11]) {
	for (int i = 0; i < 10; i++) {
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (arr1[x][y] == '1') {
			i--;
		}
		arr1[x][y] = '1';
	}
}

char Count(char arr1[11][11], int x, int y) {
	int count = 0;
	count = arr1[x - 1][y - 1] + arr1[x][y - 1] + arr1[x + 1][y - 1] + arr1[x - 1][y] + arr1[x + 1][y] + arr1[x - 1][y + 1] + arr1[x][y + 1] + arr1[x + 1][y + 1] - 7 * '0';
	return count;
}

void Play(char arr1[11][11], char arr2[11][11]) {
	int a = 0;
	do {
		printf("请输入x,y\n");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if (arr1[x][y] == '0') {
			if (arr2[x][y] == '*') {
				arr2[x][y] = Count(arr1, x, y);
				a++;
				if (a == 71) {
					printf("恭喜你赢了\n");
					break;
				}
			}
		}
		else if((x<0||x>10)||(y<0||y>10))
		{
			printf("输入有误请重新输入\n");
			  }
		else {
			printf("游戏失败\n");
			Creat1(arr1);
			break;
		}
			Creat(arr2);
		} while (1);
	}
