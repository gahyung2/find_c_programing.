#include <stdio.h>

main(){
    int dice;

    printf("�ֻ��� ���� �Է�(1~6): ");
    scanf(" %d",&dice);

    if(dice==6){
        printf("�ֻ��� ���ڴ� 6�Դϴ�.\n");
    }

    if(dice!=6){
        printf("�ֻ��� ���ڴ� 6�� �ƴմϴ�.\n");
    }

    if(dice>=3){
        printf("�ֻ��� ���ڴ� 3�̻� �Դϴ�.");
    }
    return 0;
}
