#include <stdio.h>

main(){
        int value = 42;
        int *px;
        int * py;

        px = &value;
        py = &value;

        *px = 15;

        printf(" %d\n",*px);
        printf(" %d",*py);

        return 0;

}
