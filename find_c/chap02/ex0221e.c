#include <stdio.h>

main(){
    int num;
    int s=0;
    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d",&num);

    while(num>0){
        if(num%2==0||num%3==0){
             s=s+num;
        }
        num=num-1;
    }
    printf("�� �հ�:%d",s);
    return 0;
}
