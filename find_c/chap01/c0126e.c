#include <stdio.h>

main(){
    int budget;
    int weather;

    printf("���� �Է�(�� ��):");
    scanf(" %d",&budget);

    if(budget<200){
        printf("���� �Է�(1: ���� 2:���):");
        scanf("%d",&weather);
        printf("��������\n");
        if(weather==1){
            printf("���");
        }else{
            printf("�ǳ�����");
        }
    }else{
        printf("�ؿܿ���");
    }
    return 0;
}
