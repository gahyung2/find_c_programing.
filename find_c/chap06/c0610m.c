#include <stdio.h>
#include <string.h>

main(){
    char name[15] = "Hello World";

    change(name);
    printf("%s\n",name);
    return 0;
}

change(char name[15]){
    strcpy(name,"Thank you");
    return;
}

