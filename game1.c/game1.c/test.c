#define _CRT_SECURE_NO_WARNINGS 1 
#include "game.h"

void mune() {
	printf("**********************************\n");
	printf("**********1.��ʼ��Ϸ**************\n");
	printf("**********0.�˳���Ϸ**************\n");
	printf("**********************************\n");
}

int main() {
	srand((unsigned int)time(NULL));
	char arr[3][3];
	int a = 0;
	char x;
	mune();
	//��Ϸ����
	while (1) {
		scanf("%d", &a);
		if (a == 1)
		{
			printf("��Ϸ��ʼ\n");
	//��ʼ��Ϸ
			BeginGame(arr);
	//����ͼ��
			Background(arr);
	//��ʼ����
			do {
				printf("�������\n");
				Player(arr);
				printf("\n");
				Conputer(arr);
	//�жϽ��
				 x = IsWin(arr);
				if (x != 'c') {
					break;
				}
			} while (1);
	//�������
			GameOver(x);
			break;
		}
		else if(a == 0){
			printf("�˳���Ϸ\n");
			break;
		}
		else {
			printf("�����������������\n");
		}
		mune();
	}
	return 0;
}