#define _CRT_SECURE_NO_WARNINGS 1 
#include "game.h"

void mune() {
	printf("***********************************\n");
	printf("***********   1.ɨ��   ************\n");
	printf("***********   0.�˳�   ************\n");
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
		printf("�����������������룡\n");
		goto again;
	}
	else if (q == 0) {
		printf("��Ϸ����\n");
		break;
	}
	else(q == 1); {
		printf("��ʼ��Ϸ\n");
		New(arr1, arr2, a, b);//��ʼ������
		Creat(arr2);//��ӡ����
		Set(arr1);//������
		//Creat1(arr1);//��ӡ�׵�λ��
		Play(arr1, arr2);//��ʼɨ��
	}
	}while(1);
	return 0;
}
