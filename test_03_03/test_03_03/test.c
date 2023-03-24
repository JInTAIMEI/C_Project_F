#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//大多数浮点数再内存中无法精确保存
//int main() {
//	float a = 5.9;
//	printf("%f", a);
//	return 0;
//}


//int main() {
//	char* arr[] = { "ab\0c","cbd" };
//	printf("%p\n", arr[0]);
//	printf("%s", arr[0]);
//	return 0;
//}


//void Wdf(int arr1[2]) {
//	arr1[1] = 3;
//	int a = sizeof(arr1) / 4;
//	printf("%d", a);
//}
//int main() {
//	int arr[] = { 1,2 };
//	Wdf(arr);
//	printf("%d", arr[1]);
//	return 0;
//}


//不可行的
//int main() {
//	int arr[] = { 1,2 };
//	int arr1[2];
//	arr1[2] = arr;
//	return 0;
//}


//递归斐波那契数列
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	int arr[100];
//	arr[0] = 1;
//	arr[1] = 1;
//	for (int i=2;i < a;i++) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	printf("%d", arr[a - 1]);
//	return 0;
//}

//#include <string.h>
//
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//	printf("%d", strncmp(arr1, arr2, 8));
//	return 0;
//}