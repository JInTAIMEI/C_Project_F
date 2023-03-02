#define _CRT_SECURE_NO_WARNINGS 1 
#include "game.h"

void mune() {
	printf("***********************************\n");
	printf("***********   1.扫雷   ************\n");
	printf("***********   0.退出   ************\n");
	printf("***********************************\n");
}
int main() {
	srand((unsigned int)time(NULL));
	int q = 0;
	char arr1[11][11] = { 0 };
	char arr2[11][11] = { 0 };
	char a = '0';
	char b = '*';
	do{
	again:
		mune();
		scanf("%d", &q);
	if (q != 1 && q != 0) {
		printf("输入有误，请重新输入！\n");
		goto again;
	}
	else if (q == 0) {
		printf("游戏结束\n");
		break;
	}
	else(q == 1); {
		printf("开始游戏\n");
		New(arr1, arr2, a, b);//初始化数组
		Creat(arr2);//打印窗口
		Set(arr1);//设置雷
		//Creat1(arr1);//打印雷的位置
		Play(arr1, arr2);//开始扫雷
	}
	}while(1);
	return 0;
}
