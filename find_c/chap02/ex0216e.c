#include <stdio.h>

main(){
    int num;
    int i;

    printf("숫자를 입력하시오 : ");
    scanf("%d",&num);

    for(i=1;i<=9;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}
