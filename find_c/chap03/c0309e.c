#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int dice;
    time_t t;

    srand(time(&t));
    dice=(rand()%6)+1;

    printf("%d",dice);

    return 0;
}
