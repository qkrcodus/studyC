/* 
시나리오

프로그램 개요
사용자가 음료를 선택하고 주문할 수 있는 프로그램 구현.

프로그램의 기능은 다음과 같음.
기능1. 음료 추가
기능2. 음료 삭제
기능3. 선택 음료 확인
기능4. 선택 음료 주문

기본 가정
가정 1: 음료는 최대 10잔 까지 주문
가정 2: 1회 주문 시 1개만 주문 가능
가정 3: 사용자는 메뉴를 정수로만 입력


프로그램 실행 모습
1) 음료 추가
음료 추가 이후에도 사용자는 계속 주문 프로그램을 사용할 수 있어야 함
========== What Do You Want ==========
1. 음료추가
2. 음료 삭제
3. 선택 음료 확인
4. 선택 음료 주문
5. 프로그램 종료

선택: 1 Enter

========== Add Menu ==========
1.
2.
3.
4.

10. 동작 취소
선택: 1 Enter
~~ 추가

========== What Do You Want ==========
1. 음료추가
2. 음료 삭제
3. 선택 음료 확인
4. 선택 음료 주문
5. 프로그램 종료


2) 선택 음료 확인
3. 선택 음료 확인 메뉴를 선택하면 사용자가 추가한 음료를 모두 확인 할 수 있음
다음 예시는 주문을 세 번 진행한 상태

========== What Do You Want ==========
1. 음료추가
2. 음료 삭제
3. 선택 음료 확인
4. 선택 음료 주문
5. 프로그램 종료

선택: 3 Enter
주문 품목 총액 ~~입니다.
⇒ ~, ~, ~


3) 음료 삭제
선택 음료 확인 상태에서 음료 삭제를 선택해 잘못 추가한 음료를 삭제

========== What Do You Want ==========
1. 음료추가
2. 음료 삭제
3. 선택 음료 확인
4. 선택 음료 주문
5. 프로그램 종료

========== Remove Menu ==========
~
~

선택: Enter
~ 주문이 취소되었습니다.

잘못된 음료 삭제 후 다시 선택 음료 확인 메뉴를 선택하면 한 잔이 삭제되어야 함


4) 음료 주문
선택 음료 주문을 선택하면 사용자에게 총금액을 확인시켜 준 후 확인하는 과정 진행
========== What Do You Want ==========
1. 음료추가
2. 음료 삭제
3. 선택 음료 확인
4. 선택 음료 주문
5. 프로그램 종료

선택: 4 Enter

주문 품목 총액 ~~입니다. 품목은 다음과 같습니다.
⇒ ~, ~, ~
주문하시겠습니까?
1: yes
2: no

yes를 실행하면 프로그램 종료

주문 품목 총액 ~~입니다. 품목은 다음과 같습니다.
⇒ ~, ~, ~
주문하시겠습니까?
1: yes
2: no
주문이 완료되었습니다.
이용해주셔서 감사합니다.


--------음료 가격--------
블론드카페라떼			5600
카페라떼				5600
아인슈페너				4500
아메리카노				2500
자몽허니블렌디드		6300
자바칩초코프라푸치노	6300
자몽허니블랙티			5600
콜드브루				5000


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

#define TRUE 1
#define FALSE 0

#define ADD 1
#define REMOVE 2
#define CHECK 3
#define ORDER 4
#define END 5

// 커피 종류
#define BLONDCAFFELATTE	1
#define CAFFELATTE		2
#define EINSPANNER	3
#define AMERICANO		4
#define GRAPEFRUIT_FRAPPUCCINO 5 
#define JAVACHIP_FRAPPUCCINO	6
#define GRAPEFRUIT_HONEYBLACKTEA	7	
#define COLDBREW			8	

// 커피 가격
#define BLONDCAFFELATTE_PRICE	5600
#define CAFFELATTE_PRICE		5600
#define EINSPANNER_PRICE		4500
#define AMERICANO_PRICE		2500
#define GRAPEFRUIT_FRAPPUCCINO_PRICE  6300
#define JAVACHIP_FRAPPUCCINO_PRICE	6300
#define GRAPEFRUIT_HONEYBLACKTEA_PRICE		5600
#define COLDBREW_PRICE				5000

// 주문 리스트 구조체
typedef struct _ItemList {
	char* foods[MAX_LEN];
	int idxOfFoods;
	int totalPrice;
} ItemList;



// 사용자 선택 메뉴 출력 함수
void select() {
	/* 사용자가 진행하고자 하는 행위 선택 메뉴 출력
	=> 음료 추가, 음료, 삭제, 선택 음료 확인 등
	*/
	printf("========== What Do You Want ==========\n");
	printf("	1. 음료추가\n");
	printf("	2. 음료 삭제\n");
	printf("	3. 선택 음료 확인\n");
	printf("	4. 선택 음료 주문\n");
	printf("	5. 프로그램 종료\n");


}


void showMenu() {
	puts("블론드카페라떼			5600");
	puts("카페라떼				    5600");
	puts("아인슈페너				4500");
	puts("아메리카노				2500");
	puts("자몽허니블렌디드		    6300");
	puts("자바칩초코프라푸치노	    6300");
	puts("자몽허니블랙티			5600");
	puts("콜드브루				    5000");
}

void showRemoveMenu() {

}


// 음료 추가 함수
void addMenu(ItemList* itemlist) {
	/*
	사용자가 음료를 선택하면 ItemList 구조체 변수의 멤버 배열에는
	해당 음료(문자열)가 추가되고 음료의 개수가 증가
	그리고 음료의 가격이 총합으로 누적
	*/
	showMenu();
	int drinkNum;
	printf("선택할 음료는?");
	scanf("%d", &drinkNum);
	switch (drinkNum);
	{
		case 1:










	
}


// 삭제 항목을 선택하면 구조체 멤버 배열에서 항목을 삭제하는 함수
int removeItem(ItemList* itemlist, char* itemToRemove) {
	/*
	사용자가 삭제할 음료를 선택하면 ItemList 구조체 변수의 멤버 배열에서
	해당 음료(문자열)을 찾아 삭제 진행
	*/

}


// 삭제 항목 선택 함수
void removeMenu(ItemList* itemlist) {
	/*
	사용자가 삭제할 음료를 선택하면
	removeItem 함수를 호출하여 삭제 진행
	*/

}


// 메뉴 확인 함수와 주문 함수
void checkMenu(ItemList* itemlist) {	

}

int order(ItemList* itemlist) {

}



// main 함수
int main() {
	ItemList itemList;
	itemList.idxOfFoods = 0;
	itemList.totalPrice = 0;
	int choice;

	while (1) {
		select();
		printf("선택: ");
		scanf("%d", &choice);
		printf("\n\n");

		switch(choice)
		{
			case ADD:
				addMenu(&itemList);
				printf("\n\n");
				break;
			case REMOVE:
				removeMenu(&itemList);
				printf("\n\n");
				break;
			case CHECK:
				checkMenu(&itemList);
				printf("\n\n");
				break;
			case ORDER:
				if (order(&itemList)) {
					puts("주문 완료. 프로그램을 종료합니다.");
				}
				else {
					puts("주문 보류!");
					printf("\n\n");
				}
				break;
			case END:
				puts("프로그램을 종료합니다");
				return;
			default:
				puts("잘못된 입력입니다. 동작을 취소합니다.");
				return;
		}
	}
}
