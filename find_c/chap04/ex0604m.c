#include <stdio.h>

main(){
    int num;
    int sum;

    printf("숫자입력 : ");
    scanf("%d",&num);
    sum=f_sum(num);
    printf("총합:%d",sum);
    return 0;
}

f_sum(int num){
    int i;
    int sum=0;
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    return sum ;
}

