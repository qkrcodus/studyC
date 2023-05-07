#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	3. 사용자로부터 영어 단어 하나를 입력받아 char형 배열에 저장.
	이때 알파벳 대문자, 소문자 중 한가지로만 입력.
	그리고 배열에 저장된 영문자 중 
	아스키코드 값이 가장 큰 문자를 알려주는 프로그램 작성.

	영단어 입력 : GOOD
	아스키코드값이 가장 큰 문자 : O
*/

int main_practice() {
	// 변수 선언
	char string[50];

	// 입력
	scanf("%s", string);

	// 비교
	int i;// 이 선언은 for 문 밖에서 for 문 내에서는 지역변수로 작용
	for (i = 1; string[i] != '\0'; i++) {
		if (string[i - 1] > string[i]) {
			string[i] = string[i - 1];
		}
	}

	// 출력
	printf("%c", string[i - 1]);
}