#include <stdio.h>

main(){
    int i,j;
    for(i=2;i<=9;i++){
        printf("%d��\n",i);
        for(j=1;j<=9;j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }
    return 0;
}
