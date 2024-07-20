#include <stdio.h>

main(){
    int num1,num2,sum;

    printf("주사위를 한 번 던졌을 때나온 수:");
    scanf(" %d",&num1);

    sum = num1;

    if(num1==1 || num1==6){
         printf("두 번째 던졌을 때 나온 수:");
         scanf(" %d",&num2);
         sum=sum+num2;
    }
    printf("두 수의 합=%d",sum);
    return 0;
}
