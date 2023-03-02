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


//int main() {
//	int a, b, c, d, e;
//	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//	printf("%f", (a + b + c + d + e) / 5.0);
//	return 0;
//}


//int main() {
//    int x = 0;
//    scanf("%d", &x);
//    int i = 0;
//    while(x>11) {
//        x -= 12;
//        i++;
//    }
//        printf("%d\n", (i * 4 + 2));
//    return 0;
//}


//int main() {
//	int a, b, c, d, x, y;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	x = a > b ? a : b;
//	y = c > d ? c : d;
//	printf("最大值：%d", x > y ? x : y);
//	return 0;
//}


//int main() {
//	int a;
//	scanf("%d", &a);
//	if (a == 100) {
//		printf("A");
//	}
//	else if (a < 0 && a >= -9) {
//		printf("F");
//	}else
//	switch (a/10) {
//		case 9:
//			printf("A");
//			break;
//		case 8:
//			printf("B");
//			break;
//		case 7:
//			printf("C");
//			break;
//		case 6:
//			printf("D");
//			break;
//		case 5:
//		case 4:
//		case 3:
//		case 2:
//		case 0:
//		case 1:
//			printf("E");
//			break;
//		default:
//			printf("F");
//	}
//	return 0;
//}


//int main() {
//	printf("%c%c%c%c%c%c%c%c%c%c%c%c", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
//	return 0;
//}


//int main() {
//	int a[10];
//	int b = 0;
//	int c = 0;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//		if (a[i] < 0) {
//			b++;
//		}
//		else if (a[i] > 0) {
//			c++;
//		}
//	}
//	printf("positive:%d\n", c);
//	printf("negative:%d", b);
//	return 0;
//}


//int main() {
//	int a;
//	scanf("%d", &a);
//	int b = 0;
//	int max = 0;
//	int min = 0;
//	for (int i=0; i < a; i++) {
//		scanf("%d",&b);
//		if (i == 0) {
//			max = b;
//			min = b;
//		}
//		if (i > 0) {
//			max = max > b ? max : b;
//			min = min < b ? min : b;
//		}
//	}printf("%d", max - min);
//	return 0;
//}


//int main() {
//	printf("%d", sizeof(char*));
//	return 0;
//}