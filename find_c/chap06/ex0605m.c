#include <stdio.h>

main(){
    int num;
    int fac;

    printf("숫자입력: ");
    scanf("%d",&num);
    fac=f_factorial(num);
    printf("%d팩토리얼 값:%d",num,fac);
    return 0;
}

f_factorial(int num){
    int i;
    int fac=1;
    for (i=1;i<=num;i++){
        fac=fac*i;
    }
    return fac;
}
