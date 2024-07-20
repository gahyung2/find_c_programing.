#include <stdio.h>

main(){
    int dice;

    printf("주사위 숫자 입력(1~6): ");
    scanf(" %d",&dice);

    if(dice==6){
        printf("주사위 숫자는 6입니다.\n");
    }

    if(dice!=6){
        printf("주사위 숫자는 6이 아닙니다.\n");
    }

    if(dice>=3){
        printf("주사위 숫자는 3이상 입니다.");
    }
    return 0;
}
