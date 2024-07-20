#include <stdio.h>

main(){
    float a;
    float * pa;
    float b;
    float * pb;
   float area;
    printf("가로입력: ");
    scanf(" %f", &a);
    printf("세로입력: ");
    scanf(" %f",&b);

    pa = &a;
    pb = &b;
    area = *pa * *pb;
    printf("넓이:%.1f",area);

    return 0;
}
