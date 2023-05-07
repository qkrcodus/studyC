#include <stdio.h>

/*

	1. 논리 연산자
	1) 논리 연산자
	논리 연산이란 결괏값으로 '참' 또는 '거짓'을 반환하는 연산.
	이때 사용하는 연산자를 논리 연산자라고 함.
	논리 연산자는 AND, OR, NOT 연산을 표현하며 사용 방법은 아래와 같음.

	연산자		의미		기능
	&&			AND			A와 B 모두 참이면 참을 반환.
							A && B
	||			OR			A와 B중 참이 있으면 참을 반환.
							A || B
	!			NOT			A가 참이면 거짓을, A가 거짓이면 참을 반환
							!A

	참고: AND와 OR는 이항 연산자이고, NOT 연산자는 단항 연산자.

	일반적으로 논리 연산자에서 피연산자는 '참'과 '거짓'을 나타내는데, 
	C언어에서는 참을 1로, 거짓은 0으로 표현
	ex)
	int result1 = 1 && 1	// 피연산자가 모두 참이므로 AND 연산의 결과는 참(1)
	int result2 = 1 || 0	// 피연산자 중에 참이 있으므로 OR 연산의 결과는 참(1)
	int result3 = !0		// 피연산자가 거짓이므로 NOT 연산의 결과는 참(1)


	2) 논리 연산자와 비교 연산자
	논리 연산자의 피연산자는 '참' 또는 '거짓'을 의미.
	그러나 피연산자 위치에 반드시 값이 와야만 하는 것은 아님.
	값을 반환하는 연산식이 대신 위치할 수 있음.

	ex)
	int result = 10 > 20 && 10 == 10;

*/

int main6_1() {
	//and
	printf("1and1=%d\n", 1 && 1);
	printf("1and0=%d\n", 1 && 0);
	printf("0and1=%d\n", 0 && 1);
	printf("0and0=%d\n", 0 && 0);
	//or
	printf("1or1=%d\n", 1 || 1);
	printf("1or0=%d\n", 1 || 0);
	printf("0or1=%d\n", 0 || 1);
	printf("0or0=%d\n", 0 || 0);
	//not
	printf("%d\n", !0); 
	printf("%d\n", !1);
	

}