#include <stdio.h>

main(){
    int num1,num2;

    printf("숫자를 입력하시오 :");
    scanf(" %d",&num1);

    printf("숫자를 입력하시오 :");
    scanf(" %d",&num2);

    if(num1 - num2 == 1 || num2 - num1 == 1){
        printf("두 수는 연속된 수 입니다.");
    }else{
        printf("두 수는 연속된 수가 아닙니다.");
    }

    return 0;
}

