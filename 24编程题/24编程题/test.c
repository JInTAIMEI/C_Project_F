#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

//1.
//int main() {
//	int arr[5] = { 8,8,8,8,8 };
//	for (int i = 5; i < 10; i++) {
//		arr[(i - 1) % 5] += arr[i % 5] / 3;
//		arr[(i + 1) % 5] += arr[i % 5] / 3;
//		arr[i % 5] = arr[i % 5] / 3 + arr[i % 5] % 3;
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
// return 0;
//}


//3.
//int main() {
//	int N, M;
//	int R;
//	scanf("%d", &N);
//	scanf("%d", &M);
//	int n = N;
//	int m = M;
//	while(1){
//		R = n % m;
//		if (R==0) {
//			printf("最大公约数：%d\n", m);
//			printf("最小公倍数为：%d", M * N / m);
//			break;
//		}
//		n = m;
//		m = R;
//	}
// return 0;
//}



//4.
//int main() {
//	int flag = 1;
//	for (int i = 2; i < 100; i++) {
//		flag = 1;
//		int j = 2;
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0)
//				flag = 0;
//		}
//		if (flag)
//			printf("%d ", i);
//	}
//return 0;
//}



//5.
//int main() {
//	int arr[40];
//	int a = 0;
//	int flag = 1;
//	for (int i = 2; i < 100; i++) {
//		flag = 1;
//		int j = 2;
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0)
//				flag = 0;
//		}
//		if (flag) {
//			arr[a] = i;
//			a++;
//		}
//			
//	}
//	for (a = 0; a < 40; a++) {
//		if (arr[a + 1] - arr[a] == 2)
//			printf("%d和%d是孪生素数\n", arr[a], arr[a + 1]);
//	}
// return 0;
//}


//6.
//int main() {
//	int num = 0;
//	int arr[9] = { 2,3,4,5,6,7,8,9,10 };
//	for (int i = 2; i < sqrt(10); i++) {
//		for (int j = 1; j < 9; j++) {
//			if (arr[j-num] % i==0 && i<=sqrt(arr[j-num])) {
//				for (int m = (j-num); m < (8-num); m++) {
//					arr[m] = arr[m + 1];
//				}
//				num++;
//			}
//		}
//	}
//	for (int i = 0; i < (9-num); i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//7.
//int main() {
//	int arr[20] = {0};
//	int s = 0;
//	int a = 0;
//	scanf("%d", &a);
//	int b = a;
//	int flag = 1;
//	for (int i = 2; i <= a; i++) {
//		flag = 1;
//		int j = 2;
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0)
//				flag = 0;
//		}
//		if (flag) {
//			if (a % i == 0) {
//				arr[s] = i;
//				s++;
//				a /= i;
//				i = 1;
//			}
//		}
//	}
//	printf("%d=", b);
//	for (int i = 0; i <= (s-1); i++) {
//		printf("%d", arr[i]);
//		if(i !=s-1)
//		printf("*");
//	}
//	return 0;
//}


//8.
//int main() {
//	int arr[20] = { 0 };
//	int s = 0;
//	for (int a = 2; a <= 10000; a++) {
//		s = 0;
//		for (int i = 2; i < a; i++) {
//				if (a % i == 0) {
//					arr[s] = i;
//					s++;
//				}
//			}
//		int sum = 0;
//		for (int i = 0; i < s; i++) {
//			sum += arr[i];
//			arr[i] = 0;
//		}
//		if (++sum == a)
//			printf("%d ", a);
//	}
//return 0;
//}


//9.
//int Way(int a) {
//	int s = 0;
//	for (int i = 1; i <= a/2; i++) {
//		if (a % i == 0) {
//			s += i;
//		}
//	}
//	return s;
//}
//
//int main() {
//int b = 0;
//int c = 0;
//for (int a = 2; a <= 10000; a++) {
//	b = Way(a);
//	c = Way(b);
//	if (c == a&& a < b)
//		printf("%d %d\n", a, b);
//}
//	return 0;
//}


//10.
//int main() {
//	char arr[10] = { 0 };
//	int a = 0;
//	int s = 0;
//	while ((arr[a++] = getchar()) != '\n') {
//		s++;
//	}
//	for (int i = 0; i < s; i++) {
//		printf("%c", arr[i]);
//		if (i != s - 1) {
//			printf(",");
//		}
//	}
//	return 0;
//}


//11.
//int Way(int z) {
//	int j = 0;
//	while (z > 9) {
//		j += z % 10;
//		z /= 10;
//	}
//}
//int main() {
//	char arr[10] = { 0 };
//	int a = 0;
//	int s = 0;
//	while ((arr[a++] = getchar()) != '\n') {
//		s++;
//	}
//	int z = 0;
//	for (int i = 0; i < s; i++) {
//		z += arr[i] - '0';
//	}
//	while (z > 9) {
//		z = Way(z);
//	}
//	printf("%d", z);
//	return 0;
//}


//12.
//int main() {
//	int j = 0;
//	int flag;
//	for (int i = 100; i < 1000; i++) {
//		int k = i;
//		flag = 3;
//		j = 0;
//		while (flag--) {
//			j += (k % 10) * (k % 10) * (k % 10);
//			k /= 10;
//			}
//		if (j == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//13.
//int main() {
//	int j = 0;
//	int sum = 0;
//	int m = 0;
//	int a = 1;
//	scanf("%d", &m);
//	for (int i = 1; i < m; i++) {
//		a *= 10;
//	}
//	int flag;
//	for (int i = a; i < a*10; i++) {
//		int k = i;
//		flag = m;
//		sum = 0;
//		while (flag--) {
//			j = 1;
//			for (int i = 0; i < m; i++) {
//				j *= (k % 10);
//			}
//			sum += j;
//			k /= 10;
//			}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//14.
//int main() {
//	int a = 0;
//	for (int i = 0; i <= 10000; i++) {
//		a = 0;
//		int k = i;
//		while (k > 0) {
//			a = a * 10 + k % 10;
//			k /= 10;
//		}
//		if (a == i)
//			printf("%d ", a);
//	}
//	return 0;
//}


//15.
//void Way0(int a,int *ou,int *ji,int *n) {
//	while (a > 0) {
//		if ((a % 10) % 2)
//			(*ji)++;
//		else
//			(*ou)++;
//		(*n)++;
//		a /= 10;
//	}
//}
//int Way1(int a) {
//	int i = 0;
//	while (a > 0) {
//		a /= 10;
//		i++;
//	}
//	return i;
//}
//int Way2(int a,int b) {
//	for (int i = 0; i < a; i++) {
//		b *= 10;
//	}
//	return b;
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	do {
//		int ji = 0;
//		int ou = 0;
//		int n = 0;
//		Way0(a, &ou, &ji, &n);
//		int w1 = Way1(n);
//		int w2 = Way1(ji);
//		int sum = Way2(w1 + w2, ou) + Way2(w1, ji) + n;
//		if (sum == a) {
//			printf("%d", a);
//			break;
//		}
//		a = sum;
//	} while (1);
//	return 0;
//}


//16.
//int main() {
//	int gj, mj, xj;
//	for (int gj = 0; gj <= 20; gj++) {
//		for (int mj = 0; mj < 34; mj++) {
//			for (int xj = 0; xj <= 300; xj++) {
//				if (gj * 5 + mj * 3 + xj / 3 == 100 && gj + mj + xj == 100 && xj % 3 == 0)
//					printf("公鸡%d只，母鸡%d只，小鸡%d只\n", gj, mj, xj);
//			}
//		}
//	}
//	return 0;
//}

//17.
//int main() {
//	float a = 0;
//	for (int i = 0; i < 4; i++) {
//		a += 6;
//		a /= 2;
//	}
//	printf("%f", a);
//	return 0;
//}

//18.
//int main() {
//	int a = 0;
//	int s = 0;
//	while (1) {
//		a++;
//		int k = a;
//		s = 0;
//		while (k % 5 == 1) {
//			k--;
//			k /= 5;
//			k *= 4;
//			s++;
//		}if (s >= 5) {
//			printf("%d", a);
//			break;
//		}
//	}
//	return 0;
//}



//19.
//int main() {
//	for (int a = 1; a <= 5; a++) {
//		for (int b = 1; b <= 5; b++) {
//			for (int c = 1; c <= 5; c++) {
//				for (int d = 1; d <= 5; d++) {
//					for (int e = 1; e <= 5; e++) {
//						if (d > c && e > a && a > b && b > d) {
//							printf("小刚：%d，小红：%d,李雷：%d,乐乐：%d,小明：%d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//20.
//int main() {
//	char* arr[3] = { '1','2','3'};
//	char a;
//	int flag;
//	for (int i = 0; i < 3; i++) {
//		flag = 0;
//		a = arr[i];
//		if (a == *arr)
//			flag++;
//		if (a != *(arr + 1))
//			flag++;
//		if (a != *arr)
//			flag++;
//		if (flag == 1) {
//			if (a == '1')
//				printf("老大");
//			if (a == '2')
//				printf("老二");
//			if (a == '3')
//				printf("老三");
//		}
//	}
//	return 0;
//}

//21.
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 4 == 0 && (a % 100 != 0 || a % 400 ==0)) {
//		printf("闰年");
//	}
//	else
//		printf("平年");
//	return 0;
//}

//22.
//int main() {
//	int arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year, mouth, day;
//	scanf("%d %d %d", &year, &mouth, &day);
//	int sum = 0;
//	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
//		for (int i = 0; i < mouth-1; i++) {
//			if (i == 1) {
//				arr[i] = 29;
//			}
//			sum += arr[i];
//		}
//		sum += day;
//	}
//	else {
//		for (int i = 0; i < mouth - 1; i++) {
//			sum += arr[i];
//		}
//		sum += day;
//	}
//	printf("%d", sum);
//	return 0;
//}


//23.
