#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

int main(){
	int flag = 0;
	int i = 0;
	int sz = 0;
	char arr1[100] = { 0 };
	while ((arr1[i++] = getchar()) != '\n') {
		sz++;
	}
	i = 0;
	char arr2[100] = { 0 };
	while ((arr2[i++] = getchar()) != '\n');
	for (int j = 0; j < sz; j++) {
		if (flag)
			break;
		for (int m = 0; m < sz; m++) {
			char mid = 0;
			mid = arr1[j];
			arr1[j] = arr1[m];
			arr1[m] = mid;
			if (strcmp(arr1, arr2) == 0) {
				printf("ПаµИ");
				flag = 1;
			}
			else {
				mid = arr1[j];
				arr1[j] = arr1[m];
				arr1[m] = mid;
			}
		}
	}
	return 0;
}
