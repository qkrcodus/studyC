#include <stdio.h>

/*
	1. 값의 저장을 위한 변수
		1) 변수의 이해
			변수란 메모리 공간에 붙여진 이름.
			C 언어 프로그램에서 사용되는 값은 모두 메모리 공간에 저장.
			메모리 공간에 이름을 붙여주면 다음부터 그 이름을 통해 메모리 공간에 접근 가능.


		2) 변수의 선언 및 초기화 방법
			변수를 생성하는 과정을 '변수의 선언',
			선언된 변수에 처음 저장될 값을 지정하는 것을 '변수의 초기화'라고 함.
			다음은 변수의 선언 및 초기화하는 기본적 방법

			변수의 선언 및 초기화
			자료형 변수명 = 값

			자료형: 저장된 값의 유형을 의미하는 것으로 정수, 실수, 문자 등으로 구분.
			변수명: 변수를 할당하면 선언된 자료형에 따라 기억장소가
					할당되고, 할당된 기억장소의 주소를 대신하여 사용하는 것이 변수명.
			값    : 변수의 자료형에 맞게 작성된 값으로, 변수에 할당된 메모리 공간에 저장.

			특정 자료형을 값을 저장할 수 있을 만큼의 메모리 공간을 할당받고
			거기에 사용자 지정 변수명 지정.
			동시에 해당 메모리 공간에는 사용자가 지정한 값을 저장.
			

		3) 다양한 변수의 선언 및 초기화 방법
			변수의 선언 및 초기화 방법은 별도로 진행도 가능하도,
			한 번에 진행할 수도 있음.

			다양한 변수의 선언 및 초기화 방법
			자료형 변수명1 = 값1 -> 선언 및 초기화
			자료형 변수명2;		 -> 선언 후 값을 저장하지 않음
			변수명2 = 값2		 -> 선언만 했던 변수명에 값 저장
			변수명3 = 값3		 -> 변수명을 선언하지 않고 값을 저장하므로 불가 -> 에러

			변수 선언은 메모리 공간을 할당받고 해당 메모리 공간에 이름을 붙이는 과정.
			변수 선언 후 해당 변수명은 특정 메모리 공간을 가리키게 되면서
			해당 변수에 대한 초기화를 별도로 진행 가능.
			그러나 변수의 선언 과정을 생략하고 변수 초기화는 불가능.
			이는 메모리가 할당되지 않았기 때문에 값의 저장이 불가능하기 때문.

			
			변수에 저장된 값의 변경
			int num = 3;	-> 선언 및 초기화 완료, 3 저장
			num = 5;		-> 3이 저장된 메모리 공간에 5 저장

			변수 값은 변경 가능.
			선언이 완료된 변수는 대입문을 여러 번 진행 가능.
			대입문이 수행될 때마다 해당 메모리 공간에 저장된 값 변경.
			즉, '덮어쓰기'가 진행된 것.


		4) 변수명 규칙
			변수명은 다음과 같은 규칙으로 작성

			변수 이름은 알파벳(대소문자 모두 가능), 숫자, 언더바(_)로만 구성
			변수의 이름은 숫자로 시작할 수 없으며 공백을 포함할 수 없음.
			이미 기능을 가지고 있는 키워드 변수명으로 사용할 수 없음.
			C 언어는 알파벳 대소문자 구분


		5) 변수의 출력과 printf 함수의 기본적 이해
			변수가 선언 및 초기화되면 변수 이름은 해당 메모리 공간을 가리키게 됨.
			따라서 변수 이름은 코드 내에서 해당 메모리 공간에 저장된 값을 대신하여 사용 가능.

			값을 출력하기 위한 printf 함수의 예
			printf("%d\n", number1);

			"%d\n": 정수형 변수 또는 값을 출력할 수 있는 형식문자 %d와
					출력 후 줄바꿈(개행)을 의미하는 "\n"을 이용해 출력
			number1: 형식 문자에 대입되어 실제로 출력되는 값. 
					 변수 뿐 아니라 값을 그대로 사용 가능.

			4.1 printf함수에서 상세히 언급

*/



int main2_1() {
	// 선언 및 초기화
	int number1 = 10;
	int number2 = 5;
	printf("%d %d\n", number1);
	printf("%d %d\n", number1,number2);
	//두변수 한번에 선언
	int number3, number4, number5 = 10;
	//초기화
	number3 = 3;
	number4 = 4;

	//사용 불가 변수명
	//int hello boy = 3; //공백
	//int $ %= 5;       //특수문자
	//int 8number = 8;         //숫자 시작
	//int if = 4;                //키워드

}
