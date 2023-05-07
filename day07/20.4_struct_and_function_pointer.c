#include <stdio.h>

/*
	함수 포인터도 포인터이므로 구조체 안에 넣어서 사용 가능.
*/
//int add(int a, int b) {
//	return a + b;
//}// 전역함수선언
//typedef struct _calculator{
//	int(*add)(int, int);
//}calculator;
//int main() {
//	calculator calculator;
//	calculator.add = add;
//	printf("sum:%d\n", calculator.add(10, 20));
//}