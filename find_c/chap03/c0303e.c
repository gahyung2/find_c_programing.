#include <stdio.h>
#include <ctype.h>

main(){
    char c1='a';
    char c2='1';

    if(isalpha(c1)){
        printf("c1의 값은 알파벳입니다.\n");
    }

    if(isdigit(c2)){
        printf("c2의 값은 숫자입니다.");

    }
    return 0;
}
