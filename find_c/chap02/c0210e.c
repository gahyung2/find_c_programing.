#include <stdio.h>

main(){
    int i;
    int s=0;

    for(i=1;i<=10;i++){
        s=s+i;
    }
    printf("1부터 10까지의 합:%d",s);

    return 0;
}
