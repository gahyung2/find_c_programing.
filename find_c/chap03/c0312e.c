#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int length=16;
    srand(time(0));

    while(length--){
        putchar(rand()%94+33);
    }
    return 0;
}
