#define _CRT_SECURE_NO_WARNINGS 1 
#include "game.h"

void mune() {
	printf("**********************************\n");
	printf("**********1.开始游戏**************\n");
	printf("**********0.退出游戏**************\n");
	printf("**********************************\n");
}

int main() {
	srand((unsigned int)time(NULL));
	char arr[3][3];
	int a = 0;
	char x;
	mune();
	//游戏界面
	while (1) {
		scanf("%d", &a);
		if (a == 1)
		{
			printf("游戏开始\n");
	//开始游戏
			BeginGame(arr);
	//构建图像
			Background(arr);
	//开始下棋
			do {
				printf("玩家下棋\n");
				Player(arr);
				printf("\n");
				Conputer(arr);
	//判断结果
				 x = IsWin(arr);
				if (x != 'c') {
					break;
				}
			} while (1);
	//宣布结果
			GameOver(x);
			break;
		}
		else if(a == 0){
			printf("退出游戏\n");
			break;
		}
		else {
			printf("输入错误，请重新输入\n");
		}
		mune();
	}
	return 0;
}