#include <stdio.h>


/*
	2. ������ �����ϱ�
	1) ������ ������
		�����Ϳ��� �ּڰ��̳� ���� ����Ǿ� �ִ� 
		���� ��Ÿ���� ���� *�� & �����ڸ� ����Ѵ�.
		������ �����ڷ� ���� �� ������ ���.

		&: ������ �ּڰ��� ��ȯ�ϴ� ������.
		   &�� �ǿ����ڷ� �ּҰ� �ִ� ������ �־����� ��.
		   ���ͷ� ����� �ǿ����ڰ� �� �� ����.
		   ������ Ÿ���� ���� ���� �� ������ �� �� ����.

		   ex)
		   int num = 5;
		   double* ptr1 = &num; // Ÿ�� ����ġ
		   int* ptr2 = &5;		// ���ͷ� ���

		*: �����Ͱ� ����Ű�� �޸𸮸� �����ϴ� * ������
		   ������ ������ �ǿ����ڷ� �ϸ�,
		   ������ ������ ����� �ּڰ��� �ش��ϴ� �޸� ������ �����Ͽ� 
		   �� ���� ����Ǿ� �ִ� ���� ��ȯ.

		   ex)
		   int num = 5;
		   int* ptr = &num;

		   �� �ڵ忡�� ptr�� ������ �����̰� num�� �ּڰ��� ����.
		   ���⿡ *�����ڸ� ����ϸ� �ش� �޸� �ּ�(num)�� ����Ǿ� �ִ� ���� ��ȯ.
		   ���� *ptr�� ��ǻ� num �ǹ�.

		   ex)
		   int num = 5;
		   int* ptr = &num;
		   *ptr = 10;
		   printf("%d\n", *ptr); // 10


	2) �����͸� ����ϴ� ����
		�����͸� ����Ϸ��� ������ ������ ������ �����ؾ� �ϰ� 
		������ �����ڸ� ����� �ּ� ����, ���� ���� ���� �����ؾ� ��.
		���� ������ ����� ���ŷο� �۾����� �� �ʿ��� ��찡 �ƴ϶�� 
		���� ������ ������ ������� �ʴ� ���� �� ����.

		�׷��� ������ ��쿡�� ������ ������ �ݵ�� ���.
		(1) �Ӻ���� ���α׷��ֿ��� �޸� ����
		(2) ���� �Ҵ� ���� �� ���� �Ҵ� �޸𸮿� ���� ���� �õ�.
		
*/


int main_10_2() {
	// ������ ������
	int num = 10;
	int* p_num = &num;

	*p_num = 20;
	printf("num: %d\n", num);
	(*p_num)++;
	(*p_num)++;
	printf("num: %d\n", num);
	printf("*p_num: %d\n", *p_num);

}