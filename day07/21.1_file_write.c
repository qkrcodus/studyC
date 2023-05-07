#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

    C 언어에서는 fprintf, fputs를 사용하여 파일 출력
    파일에 문자열을 쓸 때는 먼저 fopen 함수로 파일에 연결 후 
    파일 포인터를 얻어 fprintf, fputs함수를 사용

    1. fprintf
        printf와 마찬가지로 형식 지정자가 들어가야 함

        사용법
        char string[10];
        char num;
        FILE *file = fopen(파일명, 파일모드);
            성공하면 파일 포인터, 실패하면 NULL 반환
        fprintf(file, %s, string);
            성공하면 쓴 문자열의 길이, 실패하면 음수 반환
        fclose(file);
            성공하면 0  실패하면 -1 반환


    2. fputs
        형식 지정자 없이 사용 가능

        사용법
        FILE *file = fopen(파일명, 파일모드);
        fputs(문자열, fp);
        fclose(file);


    파일 모드에는 다음과 같은 종류가 있음
    "r"     읽기            파일을 읽을 때 사용
                            파일이 없으면 에러
    "w"     쓰기            파일을 생성할 때 사용
                            기존 파일이 있으면 덮어씀
    "a"     추가            파일 끝에 값을 추가
                            기존 파일이 없으면 파일을 생성
    "r+"    읽기/쓰기       파일을 읽고 쓸 때 사용
                            파일이 존재해야 사용 가능하며 파일이 없으면 NULL을 반환
//    "w+"    읽기/쓰기       파일을 읽고 쓸 때 사용
//                            기존 파일이 있으면 내용을 덮어 씀
//    "a+"    추가(읽기/쓰기) 파일을 읽고 쓰고 추가할 때 사용
//                            기존 만약 파일이 없으면 파일을 생성
//                            읽기는 파일의 모든 구간에서 가능
//                            쓰기는 파일의 끝에서만 가능
//    
//    t       텍스트 모드      파일을 읽거나 쓸 때 개행문자 \n와 \r\n을 변환
//                             ^Z 파일의 끝으로 인식
//    b       바이너리 모드    파일의 내용을 그대로 읽고, 값을 그대로 사용
//
//*/
//
//
//int main_21_1() {
//    // fprintf
//    FILE* file = fopen("test.txt", "w");
//    char* string = "Hello world";
//    int number = 10;
//
//    if (file != NULL) {
//        fprintf(file, "%s\n", string);
//        fprintf(file, "%d\n", number);
//    }
//    fclose(file);
//}
//
//
//    // fputs
//    FILE* file2 = fopen("test.txt", "a");
//    char* string2 = "It is about the end of the class";
//
//    if (file2 != NULL) {
//        fputs(string2, file2);
//    }
//
//    fclose(file2);
//}
//iwanntto go home so bad send me home 
//int main() {
//    FILE* file = fopen("test.txt", "r");
//    char string[100];
//    int num;
//    fscanf(file, "%s\n%d", string, &num);
//
//    printf("%s\n", string);
//    printf("%d\n", num);
//    puts("");
//
//    //2.fgets
//    char buffer[20];
//    FILE*file2=fopen("test.txt", "r");
//    fgets(buffer, sizeof(buffer), file2);
//    printf("%s\n", buffer);
//
//} 