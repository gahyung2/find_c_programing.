#include <stdio.h>

main(){
    int i;
    int sum=0;

    for(i=1;i<=10;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("1���� 10���� ¦���� ��: %d",sum);

    return 0;
}
