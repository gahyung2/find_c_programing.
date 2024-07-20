#include <stdio.h>

main(){
    int num[5];
    int sum,average;
    int i;
    sum = 0;

    for(i=0;i<5;i++){
        printf("숫자를 입력하세요:");
        scanf(" %d",&num[i]);

        sum+=num[i];
    }


    average=sum/5;

    printf("합: %d, 평균: %d",sum,average);

    return 0;
}
