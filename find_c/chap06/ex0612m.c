#include <stdio.h>

void swap(int *pA,int *pB);

void main(void){
    int a=10;
    int b=20;
    printf("a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d b=%d\n",a,b);
    return 0;
}

void swap(int *pA, int *pB){
    int tmp;
    printf("swap()»£√‚\n");
    tmp = *pA;
    *pA = *pB;
    *pB = tmp;
}
