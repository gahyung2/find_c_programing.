#include <stdio.h>

changeSome(int i,float* newX, int iArr[5]);

main(){
    int i=10;
    int ctr;
    float x=20.2;
    int iArr[5]={10,20,30,40,50};
    printf("함수를 호출하기 전의 변수값: \n");
    printf("i=%d\n",i);
    printf("x=%.1f\n",x);
    for(ctr=0;ctr<5;ctr++){
        printf("iArr[%d]=%d\n",ctr,iArr[ctr]);
    }

    changeSome(i,&x,iArr);
    printf("함수를 호출한 후의 변수값: \n");
    printf("i=%d\n",i);
    printf("x=%.1f\n",x);
    for(ctr=0;ctr<5;ctr++){
        printf("iArr[%d]=%d\n",ctr,iArr[ctr]);
    }
    return 0;
}

changeSome(int i, float *newX,int iArr[5]){
    int j;
    i=11;
    *newX=30.3;
    for(j=0;j<5;j++){
            iArr[j]=1+10*j;
    }
    return 0;
}

