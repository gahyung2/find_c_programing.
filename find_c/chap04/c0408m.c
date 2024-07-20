//포인터를 여러 개 사용하고 싶다면 포인터 배열을 생성할 수 있다.
#include <stdio.h>

main(){
    char *par[2]={"haha","hoho"};

    printf("%s\n",par[0]);
    printf("%s",par[1]);

    return 0;
}
