#include <stdio.h>

main(){
    int i,j;
    int sum=0;

    printf("���ڸ� �ϳ� �Է��Ͻÿ� : ");
    scanf("%d",&j);

    for(i=1;i<=j;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }

    printf("Ȧ������ ���� %d�Դϴ�.",sum);

    return 0;
}
