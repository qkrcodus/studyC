/* 
�ó�����

���α׷� ����
����ڰ� ���Ḧ �����ϰ� �ֹ��� �� �ִ� ���α׷� ����.

���α׷��� ����� ������ ����.
���1. ���� �߰�
���2. ���� ����
���3. ���� ���� Ȯ��
���4. ���� ���� �ֹ�

�⺻ ����
���� 1: ����� �ִ� 10�� ���� �ֹ�
���� 2: 1ȸ �ֹ� �� 1���� �ֹ� ����
���� 3: ����ڴ� �޴��� �����θ� �Է�


���α׷� ���� ���
1) ���� �߰�
���� �߰� ���Ŀ��� ����ڴ� ��� �ֹ� ���α׷��� ����� �� �־�� ��
========== What Do You Want ==========
1. �����߰�
2. ���� ����
3. ���� ���� Ȯ��
4. ���� ���� �ֹ�
5. ���α׷� ����

����: 1 Enter

========== Add Menu ==========
1.
2.
3.
4.

10. ���� ���
����: 1 Enter
~~ �߰�

========== What Do You Want ==========
1. �����߰�
2. ���� ����
3. ���� ���� Ȯ��
4. ���� ���� �ֹ�
5. ���α׷� ����


2) ���� ���� Ȯ��
3. ���� ���� Ȯ�� �޴��� �����ϸ� ����ڰ� �߰��� ���Ḧ ��� Ȯ�� �� �� ����
���� ���ô� �ֹ��� �� �� ������ ����

========== What Do You Want ==========
1. �����߰�
2. ���� ����
3. ���� ���� Ȯ��
4. ���� ���� �ֹ�
5. ���α׷� ����

����: 3 Enter
�ֹ� ǰ�� �Ѿ� ~~�Դϴ�.
�� ~, ~, ~


3) ���� ����
���� ���� Ȯ�� ���¿��� ���� ������ ������ �߸� �߰��� ���Ḧ ����

========== What Do You Want ==========
1. �����߰�
2. ���� ����
3. ���� ���� Ȯ��
4. ���� ���� �ֹ�
5. ���α׷� ����

========== Remove Menu ==========
~
~

����: Enter
~ �ֹ��� ��ҵǾ����ϴ�.

�߸��� ���� ���� �� �ٽ� ���� ���� Ȯ�� �޴��� �����ϸ� �� ���� �����Ǿ�� ��


4) ���� �ֹ�
���� ���� �ֹ��� �����ϸ� ����ڿ��� �ѱݾ��� Ȯ�ν��� �� �� Ȯ���ϴ� ���� ����
========== What Do You Want ==========
1. �����߰�
2. ���� ����
3. ���� ���� Ȯ��
4. ���� ���� �ֹ�
5. ���α׷� ����

����: 4 Enter

�ֹ� ǰ�� �Ѿ� ~~�Դϴ�. ǰ���� ������ �����ϴ�.
�� ~, ~, ~
�ֹ��Ͻðڽ��ϱ�?
1: yes
2: no

yes�� �����ϸ� ���α׷� ����

�ֹ� ǰ�� �Ѿ� ~~�Դϴ�. ǰ���� ������ �����ϴ�.
�� ~, ~, ~
�ֹ��Ͻðڽ��ϱ�?
1: yes
2: no
�ֹ��� �Ϸ�Ǿ����ϴ�.
�̿����ּż� �����մϴ�.


--------���� ����--------
��е�ī���			5600
ī���				5600
���ν����				4500
�Ƹ޸�ī��				2500
�ڸ���Ϻ����		6300
�ڹ�Ĩ��������Ǫġ��	6300
�ڸ���Ϻ�Ƽ			5600
�ݵ���				5000


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

// Ŀ�� ����
#define BLONDCAFFELATTE	1
#define CAFFELATTE		2
#define EINSPANNER	3
#define AMERICANO		4
#define GRAPEFRUIT_FRAPPUCCINO 5 
#define JAVACHIP_FRAPPUCCINO	6
#define GRAPEFRUIT_HONEYBLACKTEA	7	
#define COLDBREW			8	

// Ŀ�� ����
#define BLONDCAFFELATTE_PRICE	5600
#define CAFFELATTE_PRICE		5600
#define EINSPANNER_PRICE		4500
#define AMERICANO_PRICE		2500
#define GRAPEFRUIT_FRAPPUCCINO_PRICE  6300
#define JAVACHIP_FRAPPUCCINO_PRICE	6300
#define GRAPEFRUIT_HONEYBLACKTEA_PRICE		5600
#define COLDBREW_PRICE				5000

// �ֹ� ����Ʈ ����ü
typedef struct _ItemList {
	char* foods[MAX_LEN];
	int idxOfFoods;
	int totalPrice;
} ItemList;



// ����� ���� �޴� ��� �Լ�
void select() {
	/* ����ڰ� �����ϰ��� �ϴ� ���� ���� �޴� ���
	=> ���� �߰�, ����, ����, ���� ���� Ȯ�� ��
	*/
	printf("========== What Do You Want ==========\n");
	printf("	1. �����߰�\n");
	printf("	2. ���� ����\n");
	printf("	3. ���� ���� Ȯ��\n");
	printf("	4. ���� ���� �ֹ�\n");
	printf("	5. ���α׷� ����\n");


}


void showMenu() {
	puts("��е�ī���			5600");
	puts("ī���				    5600");
	puts("���ν����				4500");
	puts("�Ƹ޸�ī��				2500");
	puts("�ڸ���Ϻ����		    6300");
	puts("�ڹ�Ĩ��������Ǫġ��	    6300");
	puts("�ڸ���Ϻ�Ƽ			5600");
	puts("�ݵ���				    5000");
}

void showRemoveMenu() {

}


// ���� �߰� �Լ�
void addMenu(ItemList* itemlist) {
	/*
	����ڰ� ���Ḧ �����ϸ� ItemList ����ü ������ ��� �迭����
	�ش� ����(���ڿ�)�� �߰��ǰ� ������ ������ ����
	�׸��� ������ ������ �������� ����
	*/
	showMenu();
	int drinkNum;
	printf("������ �����?");
	scanf("%d", &drinkNum);
	switch (drinkNum);
	{
		case 1:










	
}


// ���� �׸��� �����ϸ� ����ü ��� �迭���� �׸��� �����ϴ� �Լ�
int removeItem(ItemList* itemlist, char* itemToRemove) {
	/*
	����ڰ� ������ ���Ḧ �����ϸ� ItemList ����ü ������ ��� �迭����
	�ش� ����(���ڿ�)�� ã�� ���� ����
	*/

}


// ���� �׸� ���� �Լ�
void removeMenu(ItemList* itemlist) {
	/*
	����ڰ� ������ ���Ḧ �����ϸ�
	removeItem �Լ��� ȣ���Ͽ� ���� ����
	*/

}


// �޴� Ȯ�� �Լ��� �ֹ� �Լ�
void checkMenu(ItemList* itemlist) {	

}

int order(ItemList* itemlist) {

}



// main �Լ�
int main() {
	ItemList itemList;
	itemList.idxOfFoods = 0;
	itemList.totalPrice = 0;
	int choice;

	while (1) {
		select();
		printf("����: ");
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
					puts("�ֹ� �Ϸ�. ���α׷��� �����մϴ�.");
				}
				else {
					puts("�ֹ� ����!");
					printf("\n\n");
				}
				break;
			case END:
				puts("���α׷��� �����մϴ�");
				return;
			default:
				puts("�߸��� �Է��Դϴ�. ������ ����մϴ�.");
				return;
		}
	}
}
