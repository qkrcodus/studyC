#include <stdio.h>

/*
	1) ����ü�� �Լ�
		����ü ������ �Լ��� ���ڷ� �����ϰ�, �� �Լ��κ��� ��ȯ ����.


	2) ����ü�� Call-by-reference
		1�� �������� ����ü ������ �Լ��� ���ڷ� �����ϰ� ��ȯ����. 
		�̴� ���� �����ϴ� call-by-value ����� ����ϰ� ����.
		call-by-value ����� ���ڷ� ���޵� ������ ���� �����ϴ� ���. 
		�׷��� ����ü ������ �Լ��� ���ڷ� ������ ���� 
		������ ����� �ּڰ��� ���ڷ� �����ϴ� ����� 
		call-by-reference ��� ��� ����.

//*/  �ФФФФФѤѤ̤̤̤̤� ���� ����� �ּ��� ���簡 �ƴϴ�////
//
//typedef struct {
//	int student_id;
//	int age;
//} student;
//
//student setstudent(int student_id, int age) {
//	student student = { student_id, age };
//
//	return student;
//}
//
//void printstudent(student student) {
//	printf("%p\n", &student);
//	printf("�й�: %d, ����: %d\n", student.student_id, student.age);
//}
//
//int main() {
//	student student = setstudent(2022302, 20);
//	printf("%p\n", &student);
//	printstudent(student);
//}
