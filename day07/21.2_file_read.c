#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	C 언어에서는 fscanf, fgets를 사용하여 파일 입력
	파일에 문자열을 쓸 때는 먼저 fopen 함수로 파일에 연결 후 
	파일 포인터를 얻어 fscanf, fgets 사용

	1. fscanf
		scanf와 마찬가지로 형식 지정자가 들어가야 함
		
		사용법
		FILE *file = fopen(파일명, ‘r’);	성공하면 파일 포인터, 실패하면 NULL 반환
		fscanf(file, “%s”, string);
		fscanf(file, “%s %d”, string, &num);
		fclose(file);						성공하면 0  실패하면 -1 반환
// 