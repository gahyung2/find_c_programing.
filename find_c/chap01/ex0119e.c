#include <stdio.h>

main(){
    int num1,num2,sum;

    printf("�ֻ����� �� �� ������ ������ ��:");
    scanf(" %d",&num1);

    sum = num1;

    if(num1==1 || num1==6){
         printf("�� ��° ������ �� ���� ��:");
         scanf(" %d",&num2);
         sum=sum+num2;
    }
    printf("�� ���� ��=%d",sum);
    return 0;
}
