#include <stdio.h>
#include "cal_func.h"

main(){
    int a,b,cal;
    int result;
    float result2;
    printf("ù��° ���� �Է�:");
    scanf(" %d",&a);
    printf("�ι�° ���� �Է�:");
    scanf(" %d",&b);
    printf("��ȣ�Է�(1:���ϱ� 2:���� 3:���ϱ� 4:������):");
    scanf(" %d",&cal);

    if(cal==1){
        result=f_plus(a,b);
        printf("%d+%d=%d",a,b,result);
    }else if(cal==2){
        result=f_minus(a,b);
        printf("%d-%d=%d",a,b,result);
    }else if(cal==3){
        result=f_multiply(a,b);
        printf("%d*%d=%d",a,b,result);
    }else{
        result2=f_divide(a,b);
        printf("%d/%d=%.2f",a,b,result2);
    }
    return 0;
}
