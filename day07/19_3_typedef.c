//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
///*
//	3. typedef ����
//	1) typedef ����
//		typedef ������ ������ �����ϴ� �ڷ����� �� �̸��� �ο��ϴ� ��.
//		���� �̸��� ���ο� �̸����� ����� ���� �ƴ϶� �� �̸��� �߰��� ���� ��.
//		���� int �ڷ����� ���ο� �̸����� INTEGER��� �̸��� ���̰� �ʹٸ�
//		������ ���� ���� ����.
//		
//		��� ��
//		typedef int INTEGER;
//
//
//		���� ���� ���� �� INTEGER�� �ڵ� ������ int�� ������ ���� ����.
//		�׷��� �̸��� ����� ���� �ƴ϶� �� �̸��� �߰��� ������
//		������ int�� ����� ������ ���� ����.
//
//		typedef ���� ��ġ�� ������ �ִ� ���� �ƴϳ� �Ϲ������� ���α׷� ���� ��ġ�� �����ϴ� ��찡 ����.
//
//
//	2) ����ü�� typedef
//		����ü �̸��� typedef ���� ����� �� �� ����.
//		���ǵ� ����ü�� typedef�� �����ϰ�, ���Ӱ� �ٿ��� �̸����� ���� ����.
//
//		��� ��
//		struct point {
//			int x;
//			int y;
//		}		
//		typedef struct point POINT;
//
//		����ü�� typedef ���� �ÿ��� struct ������ ����.
//		typedef�� struct point�� �� �̸��� �ο������Ƿ�
//		���� ����ü ������ ������ �� struct Ű���� ���� ����.
//		���� ���� ����ü�� typedef ������ ��ģ �Ŀ��� ������ ����
//		����ü ���� ���� ����.
//		
//		���� ��		
//		POINT position = {30, 60};
//
//		
//		����ü�� ���� typedef ������ ������ ���� ���·ε� ����.
//		
//		���ʿ��� ������ ������ typedef ���� ��
//		typedef struct {
//			int x;
//			int y;
//		} POINT;
//
//		�� ������ �ռ� ���캻 ����ü�� ���� typedef ����� ����.
//		�ٸ� ���⼭�� POINT��� �̸� �ܿ��� ����ü ������ ������ ����� ����.
//
//		
//		�ٸ� �Ϲ����� ���� ������ ���� ����
//		�Ϲ��� ��
//		typedef struct _point {
//			int x;
//			int y;
//		} point;
//*/
////1. typedef ���� def 
//typedef int INT;
//typedef int* PINT;
//typedef unsigned int UINT;
//int main() {
//	// ���� ������ ����� �ڷ��� �̸��� ���� ����
//	typedef char CHAR;
//	typedef char* STR;
//	// typedef ���� ���� �ڷ����� ���� �ڷ����� ���� ���� ����
//	INT num = 3;
//	PINT ptr = &num;
//	UINT unum = 5;
//    CHAR ch = 'c';
//	STR str = "Hello!";
//
//	printf("%d %d %d\n", num, *ptr, unum);
//	printf("%c %s\n", ch, str);
//}
//
//// 2. ����ü�� typedef
// //����� ���ÿ� typedef ����
//typedef struct {
//	int x;
//	int y;
//} point;
//typedef struct _point{
//	int x;
//	int y;
//}point;
//struct person {
//	char name[30];
//	int age;
//};
//// ���ǵ� ����ü�� typedef ����
//typedef struct person person;
//
//typedef struct _employee {
//	char name[30];
//	int salary;
//} employee;
//
//int main() {
//	point position = { 30, 60 };
//	person saram = { "�����", 10 };
//	employee worker = { "�ٷ���", 100000000 };
//
//	printf("x: %d, y: %d\n", position.x, position.y);
//	printf("�̸�: %s, ����: %d\n", saram.name, saram.age);
//	printf("�̸�: %s, ����: %d\n", worker.name, worker.salary);
//}