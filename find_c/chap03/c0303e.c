#include <stdio.h>
#include <ctype.h>

main(){
    char c1='a';
    char c2='1';

    if(isalpha(c1)){
        printf("c1�� ���� ���ĺ��Դϴ�.\n");
    }

    if(isdigit(c2)){
        printf("c2�� ���� �����Դϴ�.");

    }
    return 0;
}
