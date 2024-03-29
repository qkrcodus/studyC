#include <stdio.h>

/*

	대입연산자는 연산 결과를 변수에 저장하기 위해 사용하는 연산자.

	1. 대입 연산자
	대입 연산자도 산술 연산자와 같은 이항 연산자.
	대입 연산자는 연산자 오른쪽에 있는 값을 연산자 왼쪽에 있는 변수에 대입.

	ex)
	num = 10; // 변수에 10을 대입

	그런데 연산자의 오른쪽에 값이 아닌 연산식이 있을 경우,
	연산식을 모두 처리한 다음 왼쪽에 있는 변수에 그 결과를 대입.

	ex)
	num = 10 + 20; // 10 + 20을 먼저 계산 후 num에 대입 // =는 후순위



	2. 복합 대입 연산자
	대입 연산자는 다른 연선자와 결합하여 추가적 의미를 가질 수도 있음.
	이를 가리켜 복합 대입 연산자라고 함.
	아래는 복합 대입 연산자의 종류 정리.

	복합 대입 연산자	사용 예		의미
	+=					num += 10	num에 10을 더한 값을 num에 대입
	-=					num -= 10	num에 10을 뺀 값을 num에 대입
	*=					num *= 10	num에 10을 곱한 값을 num에 대입
	/=					num /= 10	num에 10을 나눈 값을 num에 대입
	%=					num %= 10	num에 10으로 나눈 값의 나머지를 num에 대입

	*/

int main5_2() {
	//복합 대입연산자
	int num = 10;

	num += 50;
	printf("num+=50의 결과:%d\n", num);
	num -=20;
	printf("num-=20의 결과:%d\n", num);
	num *= 5;
	printf("num*=5의 결과:%d\n", num);
	num /= 10;
	printf("num/=10의 결과:%d\n", num);
	num %= 11;
	printf("num%=11의 결과:%d\n", num);

}