#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main() {
//	char arr[] = "abv";
//	printf("%s\n", arr[]);//��֪��Ϊɶ���У�
//	return 0;
//}
//int main() {
//	const int a=10;
//	int arr[a] = {0};//a��const����ĳ������������ϻ��Ǳ������޷�ָ������Ĵ�С��
//	return 0;
//}
//extern int a = 13;
//int main() {
//	printf("%d", a);
//	extern int a = 12;//��������ⲿ�����ľֲ�����ʹ�ó�ʼֵ�趨�
//}
//#define a=10//#define���Ǹ�ֵ��䣻
//int main() {
//	printf("%d",a);//#define
//	return 0;
//}
//int main() {
//#define a 10
//	printf("%d", a);
//	return 0;
//}
//#include <string.h>//����strlen���������ͷ�ļ���
//int main() {
//	char arr[] = "abc";
//	printf("%d\n", strlen(arr));//��������ֻ��Ҫ��������������Ҫ�ӡ�����
//	char arr1[] = {'a', 'b', 'c'};//��������{}�������ģ����ǣ�����
//	printf("%d", strlen(arr1));
//	return 0;
//}
int main() {
    int a;
    scanf("%d", &a);
    if (a % 5 == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}