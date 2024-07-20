#include <stdio.h>

main(){
    int jumsu;
    int * pJumsu;

    printf("점수입력: ");
    scanf(" %d",&jumsu);

    pJumsu = &jumsu;
    printf("철수의 국어점수: %d",*pJumsu);

    return 0;
}
