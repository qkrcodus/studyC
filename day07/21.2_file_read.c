#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	C ������ fscanf, fgets�� ����Ͽ� ���� �Է�
	���Ͽ� ���ڿ��� �� ���� ���� fopen �Լ��� ���Ͽ� ���� �� 
	���� �����͸� ��� fscanf, fgets ���

	1. fscanf
		scanf�� ���������� ���� �����ڰ� ���� ��
		
		����
		FILE *file = fopen(���ϸ�, ��r��);	�����ϸ� ���� ������, �����ϸ� NULL ��ȯ
		fscanf(file, ��%s��, string);
		fscanf(file, ��%s %d��, string, &num);
		fclose(file);						�����ϸ� 0  �����ϸ� -1 ��ȯ
// 