#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	3. ����ڷκ��� ���� �ܾ� �ϳ��� �Է¹޾� char�� �迭�� ����.
	�̶� ���ĺ� �빮��, �ҹ��� �� �Ѱ����θ� �Է�.
	�׸��� �迭�� ����� ������ �� 
	�ƽ�Ű�ڵ� ���� ���� ū ���ڸ� �˷��ִ� ���α׷� �ۼ�.

	���ܾ� �Է� : GOOD
	�ƽ�Ű�ڵ尪�� ���� ū ���� : O
*/

int main_practice() {
	// ���� ����
	char string[50];

	// �Է�
	scanf("%s", string);

	// ��
	int i;// �� ������ for �� �ۿ��� for �� �������� ���������� �ۿ�
	for (i = 1; string[i] != '\0'; i++) {
		if (string[i - 1] > string[i]) {
			string[i] = string[i - 1];
		}
	}

	// ���
	printf("%c", string[i - 1]);
}