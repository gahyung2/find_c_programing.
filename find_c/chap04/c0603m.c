#include <stdio.h>

main(){
    int num1,num2;
    int hap;

    printf("ù��° ����:");
    scanf(" %d",&num1);
    printf("�ι�° ����:");
    scanf(" %d",&num2);
    hap = f_sum(num1,num2);
    printf("�μ��� ��:%d",hap);
    return 0;
}

f_sum(int num1,int num2){
    int hap;
    hap=num1+num2;
    return hap;
}
