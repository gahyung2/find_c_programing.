#include <stdio.h>

main(){
    int num[5];
    int sum,average;
    int i;
    sum = 0;

    for(i=0;i<5;i++){
        printf("���ڸ� �Է��ϼ���:");
        scanf(" %d",&num[i]);

        sum+=num[i];
    }


    average=sum/5;

    printf("��: %d, ���: %d",sum,average);

    return 0;
}
