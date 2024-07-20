#include <stdio.h>
#include <ctype.h>

main(){
    char a1='b';
    char a2='B';

    printf("%c\n",toupper(a1));
    printf("%c\n",tolower(a2));

    return 0;
}
