#include <stdio.h>

main(){
    int a=1;
    int b=2;
    int tmp;

    tmp=a;
    a=b;
    b=tmp;

    printf("a=%d\n",a);
    printf("b=%d",b);

    return 0;}
