#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//void* my_memcpy(void * dest,const void * src,size_t num) {
//	char* ret = dest;
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[5] = { 0 };
//	int* p = (int*)my_memcpy(arr2,arr1,20);
//	for (int i = 0; i < 5; i++) {
//		printf("%d", *(p + i));
//	}
//
//}

//void* my_memmove(void *dest,void *src,size_t num) {
//	while (num--) {
//		if (dest < src) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//		else {
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = my_memmove(arr+2, arr, 20);
//	for (int i = 0; i < 9; i++) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//int my_strlen(char* str) {
//	int n = 0;
//	while (*str) {
//		n++;
//		str++;
//	}
//	return n;
//}
//int main() {
//	char arr[30] = { 0 };
//	gets(arr);
//	int sum = my_strlen(arr);
//	printf("%d", sum);
//	return 0;
//}


//char* my_strcpy(char* dest,const char* src) {
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main() {
//	char arr1[] = "abcd";
//	char arr2[5] = { 0 };
//	char* p = my_strcpy(arr2, arr1);
//	printf("%s", p);
//	return 0;
//}


//int my_strcmp(const char* str1,const char* str2) {
//	while (*str1 == *str2 && *str1) {
//		str1++;
//		str2++;
//	}
//	if (*str1 == *str2)
//		return 0;
//	if (*str1 < *str2)
//		return -1;
//	if (*str1 > *str2)
//		return 1;
//
//}
//int main() {
//	char arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	int a = my_strcmp(arr1, arr2);
//	printf("%d", a);
//	return 0;
//}


//char* my_strcat(char* dest,const char* src) {
//	char* ret = dest;
//	while (*dest) {
//		dest++;
//	}
//	while(*dest++ = *src++);
//	return ret;
//}
//int main() {
//	char arr1[] = "world";
//	char arr2[20] = "Hello \0xxxxxxxx";
//	char* p = my_strcat(arr2, arr1);
//	printf("%s", p);
//	return 0;
//}


//char* my_strstr(char* dest, char* src) {
//	while(*dest) {
//		char* str1 = src;
//		char* str2 = dest;
//		while (*str2 == *str1) {
//			str1++;
//			str2++;
//			if (*str1 == 0)
//				return dest;
//		}
//		dest++;
//	}
//}
//int main() {
//	char arr1[] = "bc";
//	char arr2[] = "abbcde";
//	char* p = my_strstr(arr2,arr1);
//	printf("%s", p);
//	return 0;
//}


//int main() {
//    int flag = 1;
//    int n = 0;
//    int m = 0;
//    int arr1[20][20] = { 0 };
//    int arr2[20][20] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d ",&arr2[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (arr1[i][j] != arr2[i][j]) {
//                flag = 0;
//            }
//
//        }
//    }
//    if (flag)
//        printf("Yes\n");
//    else
//        printf("No\n");   
//
//    return 0;
//}


//int main() {
//	int a = 1;
//	printf("%d\n", a++);
//	printf("%d", a);
//}


//int main() {
//    int arr1[50] = { 0 };
//    int arr2[50] = { 0 };
//    int n = 0;
//    int a = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    scanf("%d", &a);
//    for (int i = 0; i < n; i++) {
//        if (arr1[i] != a) {
//            arr2[sum] = arr1[i];
//            sum++;
//        }
//    }
//    for (int i = 0; i < sum; i++) {
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}


//int main() {
//	for (int i = 0; i < 2000; i++) {
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%04d ", i);
//	}
//	return 0;
//}


//int main() {
//    int year = 0;
//    int month = 0;
//    while (scanf("%d %d", &year, &month) != EOF) {
//        int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//            if (month == 2) {
//                printf("29\n");
//            }
//            else {
//                printf("%d\n", arr[month - 1]);
//            }
//        }
//        else {
//            printf("%d\n", arr[month - 1]);
//        }
//    }
//    return 0;
//}


//int main() {
//    float a = 0;
//    int day = 0;
//    int month = 0;
//    int flag = 0;
//    scanf("%f %d %d %d", &a, &month, &day, &flag);
//    if (month == day) {
//        if (month == 11) {
//            a = 0.7 * a - 50 * flag;
//            if (a < 0) {
//                printf("0.00");
//            }
//            else
//                printf("%.2f", a);
//        }
//        else if (month == 12) {
//            a = 0.8 * a - 50 * flag;
//            if (a < 0) {
//                printf("0.00");
//            }
//            else
//                printf("%.2f", a);
//        }
//    }
//    else {
//        printf("%.2f", a);
//    }
//}


//#include <string.h>
//int Way(char* str1, char* str2) {
//	char* ret = str1;
//	int sum = 0;
//	while (*str1 != '\0') {
//		str1++;
//		sum++;
//	}
//	char* west = str1 - sum;
//	char* east = str1-1;
//	while (west <= east) {
//		char a = '0';
//		a = *west;
//		*west = *east;
//		*east = a;
//		west++;
//		east--;
//	}
//	return strcmp(ret, str2);
//}
//int main() {
//	char arr1[] = "AABCD";
//	char arr2[] = "DCBAA";
//	int a = Way(arr2, arr1);
//	printf("%d", a);
//	return 0;
//}


//char* Way(char* str1,int n) {
//	char* ret = str1;
//	int sum = 0;
//	while (*str1 != '\0') {
//		str1++;
//		sum++;
//	}
//	char* west = str1 - sum;
//	char* east = str1-1;
//	while (west <= east && n--) {
//		char a = '0';
//		a = *west;
//		*west = *east;
//		*east = a;
//		west++;
//		east--;
//	}
//	return ret;
//}
//int main() {
//	char arr1[] = "AABCD";
//	int n = 1;
//	char* a = Way(arr1,n);
//	printf("%s", a);
//	return 0;
//}

