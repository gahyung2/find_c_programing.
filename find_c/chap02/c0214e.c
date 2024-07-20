#include <stdio.h>

main(){
    int a,b;
    int a_sum=0;
    int b_sum=0;

    for(a=1;a<=2;a++){
        printf("AÄÚ½º:%d¹ÙÄû Â°\n",a);
        a_sum = a_sum + 1;
        for(b=1;b<=3;b++){
            printf("    BÄÚ½º:%d¹ÙÄû\n",b);
            b_sum = b_sum + 1;
        }
    }
    printf("ÃÑ AÄÚ½º:%d¹ÙÄû\n",a_sum);
    printf("ÃÑ BÄÚ½º:%d¹ÙÄû",b_sum);

    return 0;
}
