#include <stdio.h>
#include <string.h>

main(){
    char juso[30];
    char city[10];
    char gu[10];
    char fullocation[30]="";

    puts("주소입력: ");
    gets(juso);
    puts(juso);

    puts("도시 입력: ");
    gets(city);
    puts("구 입력: ");
    gets(gu);
    strcat(fullocation,city);
    strcat(fullocation,", ");
    strcat(fullocation,gu);
    puts(fullocation);

    return 0;
}
