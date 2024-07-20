#include <stdio.h>
#include <string.h>

main(){
    char first[25]="안녕하세요";
    char last[25]=" 감사합니다";

    strcat(first,last);
    printf("%s\n",first);

    return 0;
}
