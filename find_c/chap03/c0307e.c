#include <stdio.h>
#include <string.h>

main(){
    char juso[30];
    char city[10];
    char gu[10];
    char fullocation[30]="";

    puts("�ּ��Է�: ");
    gets(juso);
    puts(juso);

    puts("���� �Է�: ");
    gets(city);
    puts("�� �Է�: ");
    gets(gu);
    strcat(fullocation,city);
    strcat(fullocation,", ");
    strcat(fullocation,gu);
    puts(fullocation);

    return 0;
}
