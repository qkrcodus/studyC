/*

	3. C 언어 프로그램 구성
		1) main 함수 
		
			#include <stdio.h>
			int main() {
				printf("Hello!");
			}

		
			main 함수는 C 언어 프로그램의 시작과 끝.
			C 언어 프로그램 시작 시 main 함수의 중괄호({})
			안에 작성된 코드가 순차적으로 수행.
			따라서 사용자는 구현하고자 하는 내용을 main 함수의 중괄호 안에 작성.
			함수의 중괄호 영역을 '함수의 몸체'라고도 함.
			몸체 안에 작성된 실행문 끝에는 항상 세미콜론(;)이 와야하는데,
			이는 C 언어의 문법적 규칙이므로 반드시 준수.

			** 주의사항
				main() 함수는 반드시 있어야 하며, main()함수가 없거나 2개 이상 있을 수 없음.
				대괄호([]), 중괄호({}), 소괄호(()),, 따옴표(" ")등은 반드시 하나의 쌍으로 구성.
				세미콜론(;)을 사용하여 문장의 끝을 표시.


		2) printf 함수
			위의 main 함수 몸체 안에는 다음과 같은 코드가 존재// 안은문자열
			printf("Hello!") 

			이는 printf라는 함수를 호출한 것으로 함수가 제공하는 기능을 사용하겠다는 의미.
			printf 함수는 소괄호 안에 전달된 데이터를 콘솔을 통해 출력.
			전달된 데이터는 C 언어 문법으로 표현 가능한 데이터만 가능.

			printf는 사용자가 직접 만들지 않아도 기본적으로 제공되는 '표준 함수'
			표준 함수를 모아둔 것을 '표준 라이브러리'라고 부름
			C 언어 에서는 다양한 표준 라이브러리가 있어 사용자 개발 편의를 향상시켜 줌.


		3) 헤더 파일 선언
			printf처럼 사용자가 직접 만들지 않아도 제공되는 표준 함수를 사용하기 위해서는
			반드시 다음과 같은 헤더파일 선언.

			#include <stdio.h>

			위 코드는 stdio.h 파일을 포함하겠다는 의미로 printf 함수와 같은 표준 함수를 사용할 수 있음.


		4) return을 통한 데이터 반환
			함수에는 시작과 끝이 있음.
			C 언어 프로그램이 시작되면 main 함수가 시작되고, 
			main 함수가 종료되면 C 언어 프로그램이 종료.
			이때, 함수가 종료됨녀서 데이터를 반환한다는 의미로 return 키워드 사용


		5) 주석의 사용
			주석은 프로그램 코드 내에 삽입된 사용자 메모 의미.
			컴파일 과정에서 컴파일러는 주석을 존재하지 않는 코드로 간주.
			따라서 프로그램 실행에는 아무런 영향을 주지 않음.
			따라서 주석은 필수 요소는 아니지만 주석을 적절히 잘 활용하면
			코드 유지보수가 용이.

			다음과 같은 두 가지 방법 존재

			1) 여러 줄의 내용을 단번에 주석으로 만드는 방법
				단축키: ctrl + k + c
				해제: ctrl + k + u

			2) 한 줄 짜리 주석을 만드는 방법( // )

*/