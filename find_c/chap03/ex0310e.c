#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int num1,dice;
    time_t t;

    printf("���� �� ���� �Է��Ͻÿ�. : ");
    scanf("%d",&num1);

    srand(time(&t));
    dice=(rand()%7)+1;
    printf("��ǻ�ͼ�:%d\n",dice);

    if(dice==num1){
        printf("��÷�Ǿ����ϴ�.");
    }else{
        printf("��");
    }

    return 0;
}
