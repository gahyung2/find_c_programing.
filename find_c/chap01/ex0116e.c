#include <stdio.h>

main(){
    int num1,num2,result1,result2;

    printf("���� 2���� �Է��Ͻÿ� :");
    scanf("%d %d",&num1,&num2);

    result1=num1/num2;
    result2=num1%num2;

    printf("�� ���� ���� %d�̴�.",result1);
    printf("�� ���� �������� %d�̴�.",result2);

    return 0;
}
