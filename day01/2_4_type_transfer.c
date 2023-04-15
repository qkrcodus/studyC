#include <stdio.h>

/*
	1. 자동형변환
		변수 초기화 시 대입 연산자(=) 왼쪽 변수와 오른쪽 데이터 자료형이 서로 일치하지 않으면
		왼쪽에 있는 변수를 기준으로 자동 형변환이 일어남.

		double number = 10; // 10.0으로 변환
		int number = 5.431; // 5로 변환


	2. 명시적 형 변환
		명시적 형 변환은 자동으로 형 변환이 일어나지 않을 때 강제로 
		형 변환을 명령하는 것을 의미.


*/


int main() {
	//1.자동형변환

	double num1 = 10; //실수
	int num2 = 3.14; //정수
	printf("%d\n", num1);// 실수형을 정수형으로 나타낼 수 없음 0
	printf("%f\n", num1);//10.0

	printf("%d\n", num2);//3
	printf("%f\n", num2);//정수형을 실수형으로 나타낼 수 없음 0

	printf("----------------------------------------------\n");
	//2.명시적형변환
	printf("%d\n", (short)3.141592);//3
	printf("%f\n", 3.141592);//3.141592
	printf("%f\n", (int)3.141592);//정수형을 실수형으로 나타낼 수 없음


	printf("%d\n", (10+20+30+30)/4);// 정수형들끼리 연산한건 정수처리됨 22로 
	printf("%f\n", (10 + 20 + 30 + 30) / 4);// 정수형 22는 실수형으로 나타낼 수 없음 0
	printf("----------------------------------------------\n");
	printf("%d\n",((double) (10 + 20 + 30 + 30) / 4));// 실수형 22.5를 정수로 나타낼 수 없음 0
	printf("%f\n",((double) (10 + 20 + 30 + 30) / 4));//22.5
}
