#include <stdio.h>

main(){
    int num;
    int count=0;
    int s=0;

    while(1){
        printf("���� �Է�(0:������, 1~9:���� ����):");
        scanf("%d",&num);
        if(num==0){
            break;
        }
        s=s+num;
        count=count+1;
    }
    printf("%d�� ���� ��: %d",count,s);

    return 0;
    }
