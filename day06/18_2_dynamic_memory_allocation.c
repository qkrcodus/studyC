#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
	1. 메모리 동적 할당
	1) malloc 함수
		메모리 공간을 힙 영역으로 할당하는 표준 함수.

		사용법
		#include <stdlib.h>	// malloc을 사용하기 위해서는 stdlib.h 헤더 필요
		malloc(size);		// 인자로 할당하고자 하는 메모리 공간의 크기를 바이트 단위로 전달 받음.
		
		int* numPtr = (int*)malloc(sizeof(int));
		
		malloc 함수는 할당된 메모리 공간의 주솟값 반환.
		반환되는 포인터 타입은 void형.
		따라서 malloc 함수로부터 반환된 포인터를 포인터형 변수에 
		저장하기 위해서는 반환값에 대한 형 변환 명시.
		
		malloc 함수를 통해 할당된 메모리 공간은 사용자가 해제하거나 
		프로그램이 종료되는 경우가 아니면 계속해서 메모리에 남아있음.
		해제를 원할 시 힙 영역 메모리 주소를 해제하는 free함수를 호출해야 함.

		free(numPtr)

		free 함수를 호출하지 않아도 프로그램이 종료되면 메모리 공간은 해제.
		실제 프로그램에서는 메모리의 생성과 소멸이 빈번하게 발생하는 경우가 많으므로
		직접 공간을 해제해줘야 함.


	2) 지역 변수 문제 해결


	3) 기타 동적 할당 함수
		메모리 동적 할당 시 malloc 함수를 가장 많이 사용.
		외에도 다른 동적 할당 함수를 탐구.

		(1) calloc 함수			
			calloc 함수는 인자로 할당하고자 하는 메모리 공간의 개수와 각 메모리 공간별 크기를 전달받음.
			크기 단위는 바이트이며, malloc 함수와 마찬가지로 할당된 메모리 공간의 주솟값을 void형 포인터로 반환.
			malloc함수와 인자를 전달하는 방식에서 차이를 보이지만, 결과적으로 동일한 역할 수행.
			다만 malloc 함수는 메모리 공간을 별도의 값으로 초기화하지 않으나,
			calloc 함수는 모든 비트를 0으로 초기화.

			사용법
			calloc(개수, 크기)

			차이점
			malloc(sizeof(int) * 30);
			calloc(30, sizeof(int));


		(2) realloc 함수
			malloc 함수나 calloc 함수와 목적이 조금 다른 동적 할당 함수.
			realloc 함수는 힙 영역에 할당되어 있는 메모리 공간의 크기를 조절하는 기능.
			realloc 함수는 인자로 확장하고자 하는 메모리 공간의 
			주솟값과 재할당된 메모리 크기를 인자로 전달 받음.
			조절된 크기에 대한 할당을 마치고 나면 해당 
			메모리 공간의 주솟값을 void형 포인터로 반환.
			realloc 함수를 통해 메모리 크기를 확장할 때는 기존 메모리 주소 뒤에 확장.
			그러나 기존 할당된 메모리 공간 뒤에 확장할 영역이 넉넉하지 않으면 
			새로운 메모리 주소에 새롭게 할당.

			사용법
			realloc(포인터, 새로운 크기);

*/

// 1. 지역변수 문제 해결
//char* getString() {
//	char* str = (char*)malloc(sizeof(char) * 100);
//	printf("좋아하는 단어는?: ");
//	gets(str);
//
//	return str;
//}
//
//int main() {
//	char* string = getString();
//	printf("당신이 좋아하는 다어는: %s\n", string);
//}

// 2. malloc
int main() {
	int* iptr = (int*)malloc(sizeof(int) * 5);			// int형 5개
	double* dptr = (double*)malloc(sizeof(double) * 5); // double 5개

	// 데이터 삽입
	for (int i = 0; i < 5; i++) {
		iptr[i] = 10 * (i + 1);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", iptr[i]);
	}
	puts("");

	dptr[0] = 3.14;
	dptr[1] = 4.14;
	dptr[2] = 5.14;
	printf("%g %g %G\n", dptr[0], dptr[1], dptr[2]);

	// 힙 영역 메모리 해제
	if (iptr != NULL) {
		free(iptr);
	}
	if (dptr != NULL) {
		free(dptr);
	}
}