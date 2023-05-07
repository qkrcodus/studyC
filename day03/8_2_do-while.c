#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*	
	2. do-while문에 의한 반복
	1) do-while문의 특징
		while문과 do-while문의 가장 큰 차이점은 바로 '조건에 대한 검사가 이루어지는 시점'
		while문은 조건에 대한 검사를 가장 먼저 진행하고 반복 여부를 결정하는 반면,
		do-while문은 조건에 대한 검사를 가장 마지막에 진행.
	
		do-while문의 기본 형태

		do{
			실행하고자 하는 문장
		}while(조건);


		ex)
		num = 1;
		do {
			printf("%d", num);
			num++;
		} while(num < 3);
	

	2) do-while문이 필요한 경우
		do-while문은 실행문을 실행 후 조건을 검사하기 때문에 
		반드시 1회 이상 실행문이 실행되어야 하는 프로그램에 사용하는 것이 좋음.

*/

int main8_2() {
	int num = 1;
	do {
		print("%d", num--);//출력은 1 ; 만났으니 0변화함
	} while (num < 0);//여기 실행시 num은 0

	
}