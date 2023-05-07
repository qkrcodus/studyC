#include <stdio.h>

/*
	길이가 5인 배열 arr을 선언하고 10, 20, 30, 40, 50으로 초기화.
	배열의 첫 번째 요소를 가리키는 포인터 변수 ptr 선언.
	포인터 변수 ptr에 저장된 값을 증가시키는 방식으로
	배열의 요소에 접근하여 배열의 모든 요소 출력.
*/

int main_practice() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* ptr = arr;
	int i;
	for (i = 0; i < 5; i++)
		printf("%d \n", *(ptr + i));
	
}