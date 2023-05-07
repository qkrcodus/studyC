#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*
	1. 원산지(origin), 가격(price), 바리스타 이름(barista)을 멤버로 갖는
		coffee 구조체를 정의한 선언문을 작성.
		문자열 멤버 변수의 길이는 임의로 설정.
*/
typedef struct _coffee { 
	char original[30];
	int price;
	char barista[30];
} coffee;

/*
	2. 직원 관리를 위한 구조체 정의.
		문자열 형태의 이름, 문자열 형태의 전화번호, 정수 형태의 월급을
		저장할 수 있는 worker라는 이름의 구조체 정의.

		그리고 구조체 변수를 하나 선언한 다음 프로그램 사용자가 입력하는 정보로 이 변수를 채워 출력

		입력 예
		직원의 이름: 제임스
		직원의 전화번호: 010-1234-5678
		직원의 월급여: 1000000


		실행 예
		직원의 이름: 제임스
		직원의 전화번호: 010-1234-5678
		직원의 월급여: 1000000
*/

typedef struct _worker {
	char name[30];
	char phone_number[14];
	int salary;
} worker;


int main_practice2() {
	worker worker;

	char name[30];
	char phone_number[14];

	printf("직원의 이름: ");
	scanf("%s", name);
	strcpy(worker.name, name);

	printf("직원의 전화번호: ");
	scanf("%s", phone_number);
	strcpy(worker.phone_number, phone_number);

	printf("직원의 월급여: ");
	scanf("%d", &worker.salary);

	printf("직원의 이름: %s\n", worker.name);
	printf("직원의 전화번호: %s\n", worker.phone_number);
	printf("직원의 월급여: %d\n", worker.salary);
}


/*
	3. 2번 문제에서 정의한 구조체 worker에 WRKER라는 이름을 새롭게 부여하고
		해당 구조체를 기반으로 길이가 3인 배열 선언.
		그리고 세 명의 정보를 프로그램 사용자로부터 입력받아 배열에 저장한 다음
		배열에 저장된 데이터를 순서대로 출력.

		입력 예
		직원1의 이름: 제임스
		직원1의 전화번호: 010-1234-5678
		직원1의 월급여: 1000000

		직원2의 이름: 앤디
		직원2의 전화번호: 010-9878-1234
		직원2의 월급여: 1500000

		직원3의 이름: 테리
		직원3의 전화번호: 010-1231-2231
		직원3의 월급여: 2100000


		출력 예
		직원1의 이름: 제임스
		직원1의 전화번호: 010-1234-5678
		직원1의 월급여: 1000000

		직원2의 이름: 앤디
		직원2의 전화번호: 010-9878-1234
		직원2의 월급여: 1500000

		직원3의 이름: 테리
		직원3의 전화번호: 010-1231-2231
		직원3의 월급여: 2100000
*/