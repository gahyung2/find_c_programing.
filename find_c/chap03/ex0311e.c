#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int a;
    int count=0;
    int num1,num2;
    int result;

    srand(time(0));
    //time(0)�� 1970�� 1��1�� ������ ����� �ð��� �� ������ ��ȯ
    for(a=1;a<=3;a++){
        num1=(rand()%10)+1;
        num2=(rand()%10)+1;

        printf("%d * %d= ",num1,num2);
        scanf(" %d",&result);

        if(result==num1*num2){
            printf("����\n");
            count=count+1;
        }else{
            printf("����\n");
        }
    }
    printf("���� ����:%d",count);
    return 0;
}
