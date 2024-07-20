#include <stdio.h>

main(){
    int num1,num2,result1,result2;

    printf("숫자 2개를 입력하시오 :");
    scanf("%d %d",&num1,&num2);

    result1=num1/num2;
    result2=num1%num2;

    printf("두 수의 몫은 %d이다.",result1);
    printf("두 수의 나머지는 %d이다.",result2);

    return 0;
}
