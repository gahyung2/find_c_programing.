#include <stdio.h>

main(){
    int a;
    char b;
    char c[10];

    printf("숫자 입력:");
    scanf("%d",&a);
    printf("%d\n",a);

    printf("문자 입력:");
    scanf(" %c",&b);
    //scanf("%c",&b);로 하면 에러가 남(엔터의 영향)
    printf("%c\n",b);

    printf("문자열 입력:");
    scanf("%s",c);
    printf("%s\n",c);
    return 0;
}
