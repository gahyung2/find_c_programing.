#include <stdio.h>

main(){
    int i,j;
    int sum=0;

    printf("숫자를 하나 입력하시오 : ");
    scanf("%d",&j);

    for(i=1;i<=j;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }

    printf("홀수들의 합은 %d입니다.",sum);

    return 0;
}
