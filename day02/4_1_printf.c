#include <stdio.h>

/*

	1. printf 함수의 이해
	1) 기본 출력 함수 printf
		printf 함수는 콘솔 화면에 문자열을 출력하는 함수.
		C언어는 큰따옴표("")를 사용해 문자열을 표현.                        ''는 문자하나 
		따라서 printf 함수를 호출할 때 큰따옴표로 묶인 문자열을 전달하면
		프로그램 실행 시 전달된 문자열이 콘솔 화면에 출력.
		ex)
		printf("Hello world\n")
	
		printf 함수에 전달되는 문자열은 반드시 알파벳이나 
		한글 등의 일반 문자로만 구성되지 않아도 됨.
		printf 함수의 문자열을 구성할 수 있는 요소는 다음과 같음.
		(1) 일반적인 문자							(알파벳, 기호, 한글 등)  ""a"" 의 취급 , \"==> "
		(2) 특수 목적을 지닌 제어문자				(\n, \t, \r 등)            
		(3)	출력 양식을 정의할 수 있는 형식 문자	(%d, %c, %f 등)


	2) 제어 문자의 출력
		'특수 문자'라고도 부르는 제어 문자는 단순 출력을 목적으로 하는 
		일반적인 문자와는 달리 말 그대로 특수 목적이 있는 문자.
		C 언어에서 제어 문자는 백슬래시(\) 기호와 함께 조합되어 사용되며,
		이러한 제어 문자를 가리켜 '이스케이프 시퀀스(Escape Sequence)'라고도 부름.
	
		아래는 제어문자 중 필수를 추려 정리
		제어 문자		의미                          \랑 하나더 두개가 한문자로 인식 
		\n				개행
		\'				작은따옴표 출력
		\"				큰따옴표 출력
		\?				물음표 출력                        ?랑 %는 기능이 있으므로 사용시 주의하자.
		\\				백슬래시 기호 하나를 그대로 출력       %%=>%  \?=>?

		제어 문자는 독립된 문자 상수로도 사용될 수 있음. 
		따라서 char형 변수에 제어 문자를 대입하는 것도 가능.
		\기호가 ＼기호로 입력되는 경우도 있는데 이는 편집기 글꼴의 
		차이로 컴파일러는 둘을 같은 걸로 인식.


	3) printf 함수와 형식 문자
		printf 함수는 '형식화된 출력'을 수행하며 여기서 f는 formatted(형식화된)을 의미.
		즉, printf 함수는 문자열을 주어진 형식에 맞게 출력하는 함수라고 할 수 있음.
		여기서 형식이란 문자열을 통해 출력하고자 하는 데이터의 형(type)을 의미하는데,
		printf로 출력하고자 하는 데이터의 형식은 '형식 문자'를 통해 결정할 수 있음.
		형식 문자에 따른 문자열 출력의 기본 형태는 다음과 같음.

		printf("형식 문자1, 형식 문자2, ...", 출력 데이터1, 출력 데이터2);

		여기서 출력 데이터란 지정한 형에 맞게 문자열로 변환되어 출력될 데이터를 의미.
		출력 데이터로는 상수나 변수 또는 수식 등이 올 수 있음.
	
		아래 표는 형식 문자의 종류를 정리한 것.
		형식 문자	자료형						출력 형태
		%d			char, short, int			부호 있는 10진수 정수
		%u			unsigned int				부호 없는 10진수 정수
		%o			unsigned int				부호 없는 8진수 정수
		%x			unsigned int				부호 없는 16진수 정수
		%f			float						10진수 방식의 부동소수점 실수
		%lf			float, double				10진수 방식의 부동수수점 실수
		%e			float, double				지수 방식의 부동수점 실수	
		%g			float, double				값에 따라 %f와 %e 중 선택
		%c			char, short, int			값에 대응하는 문자			
		%s			char*						문자열
		%p			void *						포인터의 주솟값                              				
		%%										%를 출력 문자로 사용하기


	4) 형식 문자와 숫자를 조합하여 출력 형태 정의하기
		printf 함수의 형식 문자를 통해 데이터를 출력할 때 
		형식 문자와 숫자를 조합하여 출력 데이터 필드 폭을 지정할 수 있다.
		필드 폭이란 출력 데이터가 차지할 너비를 의미.

		(1) 정수를 통한 필드 폭 지정                                        이걸 쓰는 이유 %d월 %d일,&월,&일  ==> 1/1일 10/10일 
			* %10d: 출력 데이터는 폭 10칸을 확보하고 값은 오른쪽 정렬
			ex) _____RIGHT

			* %-10d: 출력 데이터는 폭 10칸을 확보하고 값은 왼쪽 정렬
			ex) LEFT______

			형식 문자를 구성하는 두 기호 %와 d 사이에 숫자를 입력하면
			해당 숫자의 절댓값 만큼 폭이 확보됨.
			출력 데이터의 길이가 폭의 길이보다 작으면 부족한 공간은 공백으로 대체.
			형식 문자는 숫자가 양수면 데이터를 오른쪽 정렬, 음수면 왼쪽 정렬.

			ex) 
			printf("%10d")
			printf("%-10d")

		(2) 실수를 통한 필드 폭 지정
			%f, %lf, %e에 숫자를 조합할 때는 소수점 이하 자릿수를 지정.
			실수는 기호 .이 포함되며, 이 또한 폭을 한 칸 차지하는 문자.

			* %8.2f: 폭 8칸을 확보하고 오른쪽에 정렬. 
					 소숫점 이하 자릿수는 2자리.
			ex) __RIG.HT

			* %-8.2f: 폭을 8칸 확보하고 값은 왼쪽 정렬.
					  소수점 이하 자릿수는 2자리.              
			ex) LE.FT___		

		형식 문자에 지정한 자릿수보다 데이터가 더 긴 경우 자릴수를 무시하고 출력    printf 소수점아래 여섯자리까지만출력 3.14는 4칸 차지
		정수형을 나타내는 형식문자를 사용하고 출력 데이터 또한 정수인 경우          %10.2d  ,100 의미없다 d는 정수형이라
		소수점 이하 자릿수를 지칭하더라도 이를 무시하고 정수형으로 출력.

*/

int main4_1() {
	//1.기본 입출력
	printf("Hello world\n");
	printf("------------------------\n");
	//2.제어 문자 출력
	printf("\"hello world\"\n");
	printf("\"hello \tworld\"\n"); // t 공백 4칸 
	printf("\"hello\bworld\"\n"); 
	printf("\"hello \v world\"\n");
	printf("------------------------\n");
	char ch = 'X'; 
	int num = 92;
	double pi = 314.1591535932;
	//3. 함수와 형식문자

	printf("%c\n", ch); 
	printf("%d\n", ch);
	printf("%d\n", num);
	printf("%x\n", num);//16진수 5c= 16*5+12
	printf("%o\n", num);//8진수 134
	printf("%f\n", pi); 
	printf("%e\n", pi);// e+02=100, 6자리출력

	printf("------------------------\n");
	//4.형식 문자와 숙자를 조합하여 출력형태 정의
	//4.1 정수 필드
	char ch2 ='h';
	int num3 = 314;

	printf("%5c\n", ch2);
	printf("%-5c4\n",ch2);
	printf("%-10d\n",num3);
	printf("%10d\n",num3);
//4.2 실수 필드
	double num4 = 3.14159258588;
	printf("%10f\n", num4);
    printf("%-10f\n", num4);// 소수점이하 6자리만 
    printf("%10.4f\n", num4); // 반올림된 값 출력
	printf("%-10.4f\n", num4); 
	

}