#include <stdio.h>

main(){
    int num;
    printf("�� ���� ���� �Է�: ");
    scanf("%d",&num);
    f_square(num);
    return 0;
}

f_square(int num){
    printf("���簢�� ����: %d",num*num);
    return ;
}
