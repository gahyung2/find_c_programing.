#include <stdio.h>

main(){
    int jumsu;
    int * pJumsu;

    printf("�����Է�: ");
    scanf(" %d",&jumsu);

    pJumsu = &jumsu;
    printf("ö���� ��������: %d",*pJumsu);

    return 0;
}
