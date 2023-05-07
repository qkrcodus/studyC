#include <stdio.h>


/*
	3. 함수 포인터
	1) 함수 포인터
		함수에도 메모리 주소가 존재.
		변수와 마찬가지로 함수도 메모리 공간에 
		저장되어 있다가 필요한 순간에 호출하여 실행.
		C 언어는 함수의 주소를 저장할 수 있는 포인터 
		변수를 제공하며 이를 '함수 포인터'라고 부름.
		
		ex)
		int myFunc(int num) {}	// 반환형이 int이고 매개변수로 한 개의 
		int형 변수가 선언된 myFunc 함수.

		myFunc는 함수의 이름. 함수의 기능을 사용하기 위해 함수를 호출하려면 함수의 이름을 사용.
		즉, 함수의 이름은 메모리 공간에 저장되어 있는 함수 실행문의 시작 주솟값 의미.
		함수의 이름이 함수가 저장된 메모리 공간의 주솟값.
		따라서 함수의 주소를 함수 포인터로 저장하기 위해서는 이름을 참조해야 하는데,
		함수 포인터는 이름을 참조하는 것만으로는 충분하지 않음.
		함수를 참조하기 위해서는 함수의 선언문에 포함된 반환형과 매개변수가 함께 참조되어야 함.

		ex)
		int (*fptr)(int, int);
		fptr = myFunc;

		fptr은 값의 변경이 가능한 변수이지만, 
		myFunc는 값(주솟값)을 변경할 수 없는 상수 형태의 함수 포인터.


	2) void형 포인터
		포인터 변수를 선언할 때 자료형을 정의하기도 하지만 그렇지 않을 때도 있음.
		자료형을 정의하지 않는 포인터 변수를 가리켜 'void형 포인터'라고 함.
		// 매개변수가 없는 경우나 반환값필요없을때 
		ex)
		void* ptr;

		void형 포인터는 여느 포인터 변수와 마찬가지로 주솟값을 저장하는 역할을 함.
		void형 포인터에는 어떠한 변수의 주솟값이든 저장할 수 있고, 함수의 주솟값도 담을 수 있음.
		void형 포인터는 형에 대한 정보를 가지고 있지 않아 포인터 연산이 불가능하다는 특징이 있어
		단순히 주솟값을 저장할 수 있다는 의미만 있음.
*/

//int add(int num1, int num2) {
//	return num1 + num2;
//}
//
//int main() {
//	int (*fptr)(int, int);
//	fptr = add;
//
//	printf("합계: %d", fptr(9, 6));
//}

//int add(int num1, int num2) {
//	return num1 + num2;
//}
//	int main() {
//		int(*fptr)(int, int);
//		fptr = add;
//
//		printf("합계:%d", fptr(1, 2));
//
//	}
