#include <stdio.h>


/*
	1. 배열의 이해
	1) 배열의 소개
		배열은 하나의 변수에 둘 이상의 값을 저장할 수 있는 구조.
		배열은 여러 개의 데이터를 하나의 묶음으로 관리할 수 있어,
		프로그램 내에서 변수 개수를 줄일 수 있어 편리.
		
	2) 배열의 선언
		배열도 변수와 마찬가지로 선언 및 초기화 과정을 거쳐 메모리에 저장.
		배열을 선언하기 위해 다음 세 가지 요소 필요.

		배열의 이름: 변수의 이름과 동일
		자료형: 배열에 포함될 데이터의 자료형
		배열의 길이: 배열에 포함될 데이터의 개수

		ex)
		int myArr[3];
		
		배열의 이름	: myArr
		자료형		: int
		배열의 길이	: 3

		int a;
		int b;

		위와 같이 배열을 선언하면 메모리 공간에는 
		int만큼의 크기를 가진 공간 3개가 나란히 붙어 있는 형태로 할당.
		배열의 요소들은 메모리 상에 나란히 연결되어 있음.
		따라서 배열은 여러 개의 변수를 한 번에 표현하는 데이터 구조.
		이렇게 나란히 선언된 배열을 1차원 배열이라고 함.


	3) 1차원 배열의 초기화 방법
		변수의 초기화는 변수에 저장할 값을 정의하는 과정
		배열도 변수와 마찬가지로 초기화 가능
		배열은 초기화를 할 때 여러 개의 데이터를 한 번에 저장 가능
		여러 개의 데이터를 중괄호로 묶어서 표현하는데 이를 '초기화 리스트'라고 함.
		초기화 리스트를 이용한 배열의 초기화는 반드시 배열의 선언과 동시에 이루어져야 함.
		배열을 초기화 하는 방법은 아래와 같음

		(1) int myArr[3];
			
		(2) int myArr[] = {1, 2, 3};
			컴파일러는 초기화 리스트에 들어 있는 데이터의 개수를 확인 후
			할당해야 할 배열의 길이 결정.
			따라서 선언과 초기화가 동시에 이루어질 경우 
			대괄호 안에 길이 정보를 입력하지 않아도 문제가 되지 않음.
			// 동일한 자료형만 들어간다
			// 파이썬의 list는 자료형이 사실 데이터 타입은 동일한거다  달라도된다[1,'a','abc']

*/

int main_9_1() {
	// 배열 선언 및 초기화
	int numbers[3] = { 1, 2, 3 };

	// 컴파일러가 오른쪽 값을 보고 크기를 채움
	char characters[] = { 'a', 'b', 'c', 'd', 'e' };
}