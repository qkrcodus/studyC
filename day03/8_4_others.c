#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
	4. ��Ÿ ���
	��Ÿ ����� �ݺ��� � �߰��Ǿ� �������� ������ �ϴ� Ű�����
	����ڰ� �ڵ带 ������ �°� �ۼ��ϴ� �� ���Ǽ��� ���� ��.

	1) break//���� ���� ����� �ݺ����� �μ��� if �ƴ� for while
		break�� ���� ���� ���� �ڵ� ������ ���� �����ϴ� ����
		switch���� ���Ե� case ���� �ܿ��� while, for�� �� �ݺ�����
		���� ������ ���� ��� ����.

	2) continue }�ΰ���
		continue�� �ݺ������� 
		'������ �ڵ带 �����ϰ� �ݺ����� ó������ ���ư���'��� �ǹ̷� ���.
		���⼭ �ݺ����� ó���̶� �ڵ��� ù �κ��� �ƴ� ���ǽ��� �˻��ϴ� �ݺ����� ���� ù �ܰ�.
	

	3) return 
		return�� �Լ� ���� �Էµż� �ش� �Լ��� ȣ���� ������ �����͸� ��ȯ�ϴ� ����
		�Ǵ�, �Լ��� ���Ḧ �˸��� ���.

*/

int main8_4() {
	int sum = 0;

	for (int i = 0; i < 10; i++){
	if (i % 2 == 0) {
		continue;
	}
	sum += i;
	printf("%d\n", i);
}
	printf("%d", sum);
	
} 
// return continue break �� �� �����غ���. 