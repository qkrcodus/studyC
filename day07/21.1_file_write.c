#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

    C ������ fprintf, fputs�� ����Ͽ� ���� ���
    ���Ͽ� ���ڿ��� �� ���� ���� fopen �Լ��� ���Ͽ� ���� �� 
    ���� �����͸� ��� fprintf, fputs�Լ��� ���

    1. fprintf
        printf�� ���������� ���� �����ڰ� ���� ��

        ����
        char string[10];
        char num;
        FILE *file = fopen(���ϸ�, ���ϸ��);
            �����ϸ� ���� ������, �����ϸ� NULL ��ȯ
        fprintf(file, %s, string);
            �����ϸ� �� ���ڿ��� ����, �����ϸ� ���� ��ȯ
        fclose(file);
            �����ϸ� 0  �����ϸ� -1 ��ȯ


    2. fputs
        ���� ������ ���� ��� ����

        ����
        FILE *file = fopen(���ϸ�, ���ϸ��);
        fputs(���ڿ�, fp);
        fclose(file);


    ���� ��忡�� ������ ���� ������ ����
    "r"     �б�            ������ ���� �� ���
                            ������ ������ ����
    "w"     ����            ������ ������ �� ���
                            ���� ������ ������ ���
    "a"     �߰�            ���� ���� ���� �߰�
                            ���� ������ ������ ������ ����
    "r+"    �б�/����       ������ �а� �� �� ���
                            ������ �����ؾ� ��� �����ϸ� ������ ������ NULL�� ��ȯ
//    "w+"    �б�/����       ������ �а� �� �� ���
//                            ���� ������ ������ ������ ���� ��
//    "a+"    �߰�(�б�/����) ������ �а� ���� �߰��� �� ���
//                            ���� ���� ������ ������ ������ ����
//                            �б�� ������ ��� �������� ����
//                            ����� ������ �������� ����
//    
//    t       �ؽ�Ʈ ���      ������ �аų� �� �� ���๮�� \n�� \r\n�� ��ȯ
//                             ^Z ������ ������ �ν�
//    b       ���̳ʸ� ���    ������ ������ �״�� �а�, ���� �״�� ���
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