#include <stdio.h>

/*
	1) 구조체와 함수
		구조체 변수를 함수의 인자로 전달하고, 또 함수로부터 반환 가능.


	2) 구조체와 Call-by-reference
		1번 예제에서 구조체 변수를 함수에 인자로 전달하고 반환받음. 
		이는 값을 복사하는 call-by-value 방식을 사용하고 있음.
		call-by-value 방식은 인자로 전달된 변수의 값을 복사하는 방식. 
		그런데 구조체 변수를 함수의 인자로 전달할 때도 
		변수가 저장된 주솟값을 인자로 전달하는 방식인 
		call-by-reference 방식 사용 가능.

//*/  ㅠㅠㅠㅠㅠㅡㅡㅜㅜㅜㅜㅜ 값의 복사다 주소의 복사가 아니다////
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
//	printf("학번: %d, 나이: %d\n", student.student_id, student.age);
//}
//
//int main() {
//	student student = setstudent(2022302, 20);
//	printf("%p\n", &student);
//	printstudent(student);
//}
