#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <math.h>
#include <time.h>

//�žų˷���
//int main() {
//	for (int i = 1; i < 10; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//10�����е����ֵ
//int main() {
//	int max = 0;
//	int arr[10] = {0};
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//		if (i == 0)
//			max = arr[0];
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("���ֵΪ��%d", max);
//	return 0;
//}


//�޷��ŵ���������ʱ��0���
//int main() {
//	unsigned char a = -128;
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	char a = 449;//������Ϊ111000001
//	printf("%c", a);//��ӡ�������
//	return 0;
//}


//int main() {
//	char arr[1000];
//	for (int i = 0; i < 1000; i++) {
//		arr[i] = -1 - i;
//	}
//		printf("%d", strlen(arr));
//	
//}


//��ӡ1/1-1/2+1/3����-1/100;
//int main() {
//	float sum = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 2 != 0)
//			sum += 1.0 / i;
//		else
//			sum -= 1.0 / i;
//	}
//	printf("%f", sum);
//	return 0;
//}


//��ӡ100���ڰ����ŵ���
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 10 == 9)
//			printf("%d ", i);
//		if (i / 10 == 9 && i % 10 != 9)
//			printf("%d ", i);
//	}
//	return 0;
//}


//�����˷���
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//дһ����������������ֵ
//void Swap(int* pa, int* pb) {
//	int a = 0;
//	a = *pa;
//	*pa = *pb;
//	*pb = a;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	Swap(&a,&b);
//	printf("%d %d", a, b);
//	return 0;
//}



//ƽ�����ж�
//void Pd(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		printf("����");
//	else
//		printf("ƽ��");
//}
//int main() {
//	int year = 0;
//	scanf("%d", &year);
//	Pd(year);
//	return 0;
//}


//������
//int main() {
//	for (int i = 100; i <= 200; i++) {
//		int a = sqrt(i);
//		for (int j = 2; j < a + 1; j++) {
//			if (i % j == 0)
//				break;
//			if(j == a)
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//������
//int main() {
//	srand((unsigned int)time(NULL));
//	int a = rand()%100;
//	while (1) {
//		int b = 0;
//		scanf("%d", &b);
//		if (a > b)
//			printf("��С��");
//		if (a < b)
//			printf("�´���");
//		if (a == b) {
//			printf("������");
//			break;
//		}
//	}
//	return 0;
//}


int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 0;
	scanf("%d", &a);
	int left = 0;
	int right = 9;
	int mid = left + (right - left) / 2;
	while (left <= right) {
		if (mid < a) {
			left = mid + 1;
		}
		else if (mid > a) {
			right = mid - 1;
		}
		else {
			printf("�ҵ��ˣ��±�Ϊ%d", mid);
			break;
		}
	}
	}