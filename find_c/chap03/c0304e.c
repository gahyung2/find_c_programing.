#include <stdio.h>
#include <ctype.h>

main(){
    char c1='a';
    char c2='A';

    if(islower(c1)){
        printf("c1�� ���� ���ĺ� �ҹ����Դϴ�.\n");
    }
    if(isupper(c2)){
        printf("c2�� ���� ���ĺ� �빮���Դϴ�. ");
    }
    return 0;
}
