#include <stdio.h>

main(){
    int num;
    int sum;

    printf("�����Է� : ");
    scanf("%d",&num);
    sum=f_sum(num);
    printf("����:%d",sum);
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

