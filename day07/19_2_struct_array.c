#include <stdio.h>


/*
	2. ����ü�� �迭
	1) ����ü �迭�� ���� �� ����
		�迭�� ������ �ڷ����� �����͸� �ѵ� ��� �����ϴ� �ڷᱸ��.
		����ü ���� '����� ���� �ڷ���'���� ����ڴ� ����ü�� �̷����
		�迭�� ������ �� ������, �迭�� �����ϴ� �Ͱ� ������ ������� 
		����ü�� �̷���� �迭�� �����ϴ� ���� ����.

//		ex) �迭 ���� ��
//		int iarr[3];
//		struct person parr[3];
//
//*/
//
//
//struct person {
//	char name[30];
//	int age;
//};/// ���� ���� �ʱ�ȭ�� �Ұ����ϴ� �ڷ����� ������ ����
//int main() {
//	struct person boys[3] = {
//		{"��ҳ�", 12},
//	{"���ҳ�", 14},
//	{"û�ҳ�", 16}
//	}
//	struct person girls[3];
//	// ���� ������ ���� �ʱ�ȭ
//	strcpy(girls[0].name, "�̼ҳ�");
//	strcpy(girls[1].name, "���ҳ�");
//	strcpy(girls[2].name, "�ϼҳ�");
//	girls[0].age =11;
//	girls[1].age =13;
//	girls[2].age =15;
//
//	for (int i = 0; i < 3; i++) {
//		printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boys[i].name, boys[i].age);
//		printf("�ҳ��� �̸��� %s, ���̴� %d��\n", girls[i].name, girls[i].age);
//		puts("");
//	}
//}