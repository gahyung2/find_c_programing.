#include <stdio.h>

main(){
    float a;
    float * pa;
    float b;
    float * pb;
   float area;
    printf("�����Է�: ");
    scanf(" %f", &a);
    printf("�����Է�: ");
    scanf(" %f",&b);

    pa = &a;
    pb = &b;
    area = *pa * *pb;
    printf("����:%.1f",area);

    return 0;
}
