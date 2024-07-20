#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int a;
    int count=0;
    int num1,num2;
    int result;

    srand(time(0));
    //time(0)은 1970년 1월1일 이후의 경과된 시간을 초 단위로 반환
    for(a=1;a<=3;a++){
        num1=(rand()%10)+1;
        num2=(rand()%10)+1;

        printf("%d * %d= ",num1,num2);
        scanf(" %d",&result);

        if(result==num1*num2){
            printf("정답\n");
            count=count+1;
        }else{
            printf("오답\n");
        }
    }
    printf("정답 개수:%d",count);
    return 0;
}
