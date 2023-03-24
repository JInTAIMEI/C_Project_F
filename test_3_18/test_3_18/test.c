#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>

//int compar(const void* a,const void* b) {
//	int z = *(int*)a - *(int*)b;
//	return z;
//}
//void my_qsort(void* base, size_t nitems, size_t size, int (*compar)(const void*, const void*)) {
//	void* ret = base;
//	int i = 0;
//	int s = 0;
//	int n = nitems;
//	while (n != 1) {
//		for (i = 1; i < n; i++) {
//			if ((*compar)(base, (char*)base + size) > 0) {
//				s = size;
//				while (s--) {
//					char n = *(char*)base;
//					*(char*)base = *((char*)base + size);
//					*((char*)base + size) = n;
//					base = (char*)base + 1;
//				}
//			}
//		}
//		n--;
//		base = (char*)ret;
//	}
//}
//int main() {
//	int arr[] = { 4,3,2,1 };
//	//char arr[] = { 'd','c','b','a'};
//	my_qsort(arr,4,4,compar);
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main() {
//	char a = 'a';
//	char* p = &a;
//	unsigned int z = *(int*)p;
//	printf("%u", z);
//	return 0;
//}


//int main() {
//	printf("%d", sizeof(short));
//	return 0;
//}


//int compar1(const void* a, const void* b) {
//	return *(char*)a - *(char*)b;
//}
//int compar2(const void* a, const void* b) {
//	return *(int*)a - *(int*)b;
//}
//int compar3(const void* a, const void* b) {
//	return *(float*)a - *(float*)b;
//}
//int main() {
//	char arr1[] = { 'd','c','b','a' };
//	int arr2[] = { 4,3,2,1 };
//	float arr3[] = { 9.65f,6.43f,3.23f,1.34f };
//	qsort(arr1, 4, 1, compar1);
//	qsort(arr2, 4, 4, compar2);
//	qsort(arr3, 4, 4, compar3);
//	for (int i = 0; i < 4; i++) {
//		printf("%c ", arr1[i]);
//	}printf("\n");
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr2[i]);
//	}printf("\n");
//	for (int i = 0; i < 4; i++) {
//		printf("%.2f ", arr3[i]);
//	}
//	return 0;
//}