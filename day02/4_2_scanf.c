 #define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
	1. scanf 함수의 이해
	1) 기본 입력 함수 scanf
		scanf 함수는 데이터 입력에 사용되는 함수.
		scanf 함수를 호출하려면 다음 두 가지 정보가 함께 전달되어야 함.

		*입력할 데이터의 자료형에 대응하는 형식 문자
		*입력할 데이터가 저장될 메모리 공간(변수)

		기본적인 사용법
		int num;			- 변수(입력될 데이터가 저장될 메모리 공간) // 공간확보
		scanf("%d", &num)	- 키보드로 입력된 정수를 변수 num에 저장 // a=0x65aecc 주소반환이 &a 

		여기서 &(ampersand)는 주소를 의미
		자세한 내용은 포인터에서 진행


	2) scanf 함수를 통한 입력 형태의 다양화
		입력 데이터의 개수를 여러 개 지정 가능
		각 입력 데이터의 형식 문자를 다르게 지정 가능.

		scanf("%d %d %d", &num1, &num2, &num3); // 동일 타입   입력시주의 1 2 3 이런식 314 32223 1234  1,2,3 이런식 x
		scanf("%f %d %f", &num1, &num2, &num3); // 다른 타입          


	3) scanf 함수의 형 변환
		scanf 함수는 사용자가 데이터 입력 시 입력 데이터를 형식 문자에 맞게 형 변환.
		입력 데이터와 형식 문자의 자료형이 다를 경우 scanf 함수는 다음과 같이 처리.
		(1). 사용자 입력 전달
		(2). 형식 문자에 맞게 입력 데이터의 형 변환
		(3). 형 변환 완료 데이터를 변수에 저장

*/

int main4_2() {
	////1. 기본 입출력
	//char ch;
	//int num;
	//float num2;

	//scanf("%c", &ch);  //scanf_s 쓰거나 맨위 명시해야 에러안뜸
	//scanf("%d", &num);
	//scanf("%f", &num2);

	//printf("%c,%d,%f\n", ch, num, num2);
	//printf("------------------------\n");
	//2.입력 형태 다양화
	//int num3, num4, num5;
	//float num6, num7;
	//printf("세 정수 입력");
	//scanf("%d %d %d", &num3,&num4,&num5);     // 구분자가 공백이면  두개나 세개나 동일취금
	//printf("입력된 정수:%d %d %d\n", num3, num4, num5);

	//printf("세 정수 입력");
	//scanf("%d,%d,%d", &num3, &num4, &num5); //구분자가 , 면 입력시 공백 불필요
	//printf("입력된 정수:%d %d %d\n", num3, num4, num5);

	//printf("실수 정수 실수 입력:");
	//scanf("%f %d %f", &num6, &num3, &num7);
	//printf("입력된 정수:%f %d %f\n", num6, num3, num7);
	
// 	  *
//   ***
//  *****
// *******
//공백없이 반복문없이 
// 
//
//

}