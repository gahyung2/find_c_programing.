#include <stdio.h>

main(){
    int i=7;
    char name[]="abcde fghij";

    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(name));
    printf("%d",strlen(name));

    return 0;
}
