#include <stdio.h>

main(){
    int num1,num2;

    printf("���ڸ� �Է��Ͻÿ� :");
    scanf(" %d",&num1);

    printf("���ڸ� �Է��Ͻÿ� :");
    scanf(" %d",&num2);

    if(num1 - num2 == 1 || num2 - num1 == 1){
        printf("�� ���� ���ӵ� �� �Դϴ�.");
    }else{
        printf("�� ���� ���ӵ� ���� �ƴմϴ�.");
    }

    return 0;
}

