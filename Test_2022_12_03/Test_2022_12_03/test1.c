#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main() {
//	char arr[] = "abv";
//	printf("%s\n", arr[]);//不知道为啥不行；
//	return 0;
//}
//int main() {
//	const int a=10;
//	int arr[a] = {0};//a是const定义的常变量，本质上还是变量，无法指定数组的大小；
//	return 0;
//}
//extern int a = 13;
//int main() {
//	printf("%d", a);
//	extern int a = 12;//不允许对外部变量的局部声明使用初始值设定项；
//}
//#define a=10//#define不是赋值语句；
//int main() {
//	printf("%d",a);//#define
//	return 0;
//}
//int main() {
//#define a 10
//	printf("%d", a);
//	return 0;
//}
//#include <string.h>//引用strlen函数所需的头文件；
//int main() {
//	char arr[] = "abc";
//	printf("%d\n", strlen(arr));//引用数组只需要用数组名，不需要加【】；
//	char arr1[] = {'a', 'b', 'c'};//数组是用{}框起来的，不是（）；
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