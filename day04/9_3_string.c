#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
	3. ���ڿ� ���� ǥ��
	1) �迭�� ���ڿ� ����
		C������ ū����ǥ("")�� �̿��ؼ� ���ڿ� ǥ��.
		���ڿ��̶� ���� ���� ���� ������ �����Ǿ� �ִ� �����͸� �ǹ�.

		ex)
		"Hello. World"

		C ���� ���ڿ��� ������ ���� char�� �迭�� ���� �� ����.
		�� ���ڿ��� �迭�� �����ϱ� ���� ������ ���� �ڵ� �ۼ�

		ex)
		char greet[] = "Hello, World";// 5+2+5+1(�ι���)=13

		������ ���ڿ��� �����ϰ� �ִ� ������ ������ �� 12��.
		�׷��� sizeof �����ڸ� ����� ���� ���� ������ Ȯ���غ��� 13.
		�̴� ������ �ƴ϶� C �� ���ڿ��� ǥ���� �� ���ڿ��� �����ϴ�
		������ �� �������� '\0'�̶�� ���ڸ� �����ϱ� ����
		�� ��, �������� ���Ե� '\0' ���ڸ� ������ '��(Null) ����'��� ��.
		Null�� ������ ������ ��Ÿ����, ���ڿ��� ���� �� ���ڿ��� ���̶�� �ǹ̷� ���.
		���� ���ڿ��� �����ϱ� ���� char�� �迭�� ������ ��,
		�� ���ڰ� ������ �������� �����ؼ� �迭�� ���̸� �����ؾ߾� ��.
		

	2) �� ���ڿ� ���ڿ�
		������ ���� �迭�� ���̿� ���� ������ ������ �ٸ� ���ڿ��� �ִٰ� ����.
		
		ex) 
		char goodbye[50] = "Good bye";

		50ĭ ���� �� ���� �ʿ��� ������ 9ĭ�̰�, ���ڿ� ������ �� ���ڰ� ����.//41ĭ�� �����Ⱚ

		�� ���ڴ� ���ڿ��� ���� ǥ��. 
		printf �Լ��� ���ڿ��� ����� ���� �� ���� �������� ��� ����.
		���ڿ��� ���� ���� %s�� ����� ���.

		ex)
		printf("%s\n", goodbye);
		
		�� ���ÿ��� printf �Լ��� "Good bye"��� ���ڿ� ���.
		printf �Լ��� char�� �迭���� �� ���ڰ� ���� �������� ����ϵ��� ����.


	3) ���ڿ��� �Է°� ���
		(1) printf �Լ��� ���� ���ڿ��� ���
			printf �Լ��� ���ڿ��� ����� ���� �� ���ڷ� ���ڿ��� ���Ḧ �˸� �� ����.

		(2) scanf �Լ��� ���� ���ڿ��� �Է�
			scanf�Լ��� ���� �Է��� ���� ����(�����̽�, ��, ���� ��)�� ���� ����.
			////���ڿ��� �Է��� ���� & �����ڸ� ������� ����.
			���ڿ� �Է��� ����Ǹ� ���ڿ� ���� �� ���ڰ� �ڵ����� ����.
			/////scanf("%d",&arr[0])arr[0]�� �ּҰ� �ƴ� ������
*/


int main_9_3() {
	// 1. �迭�� ���ڿ� ����
	char greet[] = "Hello, World!";
	printf("���ڿ� greet�� ���̴� %d�Դϴ�\n", sizeof(greet));//char �� 1byte size of �� 12

	// 2. �� ���ڿ� ���ڿ�
	char goodbye[50] = "Good bye";
	printf("%s\n", goodbye);
	printf("%d\n", sizeof(goodbye));

	// 3-1. printf �Լ��� ���� ���ڿ� ���
	char mind[30] = "I Love Programming";
	printf("%s\n", mind);

	mind[6] = '\0';// printf �� �ι��� ���������� ����Ѵ�
	printf("%s\n", mind);

	mind[1] = '\0';
	printf("%s\n", mind);

	// 3-2. scanf �Լ��� ���� ���ڿ� �Է�
	char str[50];

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", str);//scanf�� ���� _ ��� ������������ �ν��ؼ� �����

	printf("�Էµ� ���ڿ�: %s\n", str);
	printf("%p\n", str);//�������ּ�
	printf("%x", str);//
}