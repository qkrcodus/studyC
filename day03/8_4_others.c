#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
	4. 기타 제어문
	기타 제어문은 반복문 등에 추가되어 보보적인 역할을 하는 키워드로
	사용자가 코드를 목적에 맞게 작성하는 데 편의성을 높혀 줌.

	1) break//속한 가장 가까운 반복문을 부순다 if 아님 for while
		break는 현재 진행 중인 코드 블록을 강제 종료하는 역할
		switch문에 포함된 case 영역 외에도 while, for문 등 반복문을
		강제 종료할 때도 사용 가능.

	2) continue }로간다
		continue는 반복문에서 
		'이후의 코드를 생략하고 반복문의 처음으로 돌아가라'라는 의미로 사용.
		여기서 반복문의 처음이란 코드의 첫 부분이 아닌 조건식을 검사하는 반복문의 가장 첫 단계.
	

	3) return 
		return은 함수 끝에 입력돼서 해당 함수를 호출한 곳으로 데이터를 반환하는 역할
		또는, 함수의 종료를 알리는 기능.

*/

int main8_4() {
	int sum = 0;

	for (int i = 0; i < 10; i++){
	if (i % 2 == 0) {
		continue;
	}
	sum += i;
	printf("%d\n", i);
}
	printf("%d", sum);
	
} 
// return continue break 를 잘 이해해보자. 