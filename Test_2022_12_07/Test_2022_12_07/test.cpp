#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main() {
//	int a, b;
//	printf("输入两个数字：");
//	scanf("%d %d",&a,&b);
//	if (a > b) {
//		printf("最大值为：%d", a);
//	}
//	else if(a==b){
//		printf("无最大值");
//	}
//	else {
//		printf("最大值为：%d", b);
//	}
//
//	return 0;
//}
//int main() {
//	int a, b;
//	printf("输入两个数字：");
//	scanf("%d %d", &a, &b);
//	if (a > b) {
//		printf("%d>%d", a, b);
//	}
//	else if (a == b) {
//		printf("%d=%d", a, b);
//	}
//	else {
//		printf("%d<%d", a, b);
//	}
//	return 0;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 0) {
//		printf("偶数");
//	}
//	else {
//		printf("奇数");
//	}
//	return 0;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	for (int i = 0; i <= a; i++) {
//		printf("*");
//	}printf("\n");
//	for (int i = 0; i <= b; i++) {
//		printf("*");
//	}
//
//	return 0;
//}
int main() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("%f", (a + b + c + d + e) / 5.0);
	return 0;
}