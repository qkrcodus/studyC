#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	3. switch���� �̿��� ������ ����
	1) switch
		switch���� �پ��� ������ �˻��� �� �ְ� ����� ���� ������ 
		�ϳ��� ������ ���Ŀ� ���� �پ��� ������ �˻��� �� ���.

		switch���� �⺻ ���´� ������ ����.
		switch(ǥ����)// {}�� ���� ����
		{
		case 1:// 12���� ���� ���ڿ� ���� �� ��밡�� ==
			ǥ���� ����� 1�� ��� ����� ����
			break; }���� �����ؾ��ϴµ� �����ڴ�
		case 2:
			ǥ���� ����� 2�� ��� ����� ����
			break;
		default:
			ǥ���� ����� 2�� ��� ����� ����
			break; ����ʿ������ �ϰ��� �ְ�
		}

		switch���� ���ԵǴ� ǥ������ if���� ���ǰ� ������ ����.
		ǥ������" �����͸� ǥ���ϴ� ���� �Ǵ� ������ �ǹ��ϴµ�,
		�� ǥ������ ��ȯ�ϴ� ���� ���� switch�� ���� ����� ������ ����.

		case Ű���� ������ ���� ǥ��.
		ǥ������ ����� ��ȯ�Ǵ� ���� case�� ���� ��ġ�ϴ� ��쿡
		switch���� �ش� case ������ ���๮�� ����.
		case�� �������� ������ ���� ���� ���ϴ� ��ŭ case�� ���� ����.


	2) switch������ break�� ����
		Ű���� break�� switch���� �� ������ �����Ͽ� ǥ������
		�ᱣ���� �ش��ϴ� case ������ ����� �� �ֵ��� ���� ����.
		�׷��� switch������ break�� �ʼ� ��Ұ� �ƴϹǷ� ���� ����.

*/

int main() {
	/*int num;
	printf("input positive num:");
	scanf("%d", &num);

	switch (num + 1) {
	case 1:
		printf("num is 1\n");
		break;
	case 2:
		printf("num is 2\n");
		break;
	case 3:
		printf("num is 3\n");
		break;
	default:
		printf("num is not matched with any case\n");
		break;
	}






*/
//2. break in switch
	int num;
	printf("input positive num:");
	scanf("%d",&num);

	switch (num) {
	case 1:
	case 3:
	case 5:
		printf("odd\n");
		break;
	case 2:
	case 4:
	case 6:
		printf("even\n");
		break;
	}
}
	


	
