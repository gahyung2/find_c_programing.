#include <stdio.h>

main(){
    int a[100];
    int s=0;
    int i=0;
    int j;

    while(1){
        printf("�����Է�(0:������, 1~9:�����հ�):");
        scanf("%d",&a[i]);

        if(a[i]==0){
            break;
        }
        i=i+1;
    }

    for(j=0;j<i;j++){
        s=s+a[j];
    }
    printf("�հ�:%d",s);

    return 0;
}
