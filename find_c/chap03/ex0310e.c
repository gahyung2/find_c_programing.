#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int num1,dice;
    time_t t;

    printf("숫자 한 개를 입력하시오. : ");
    scanf("%d",&num1);

    srand(time(&t));
    dice=(rand()%7)+1;
    printf("컴퓨터수:%d\n",dice);

    if(dice==num1){
        printf("당첨되었습니다.");
    }else{
        printf("꽝");
    }

    return 0;
}
