#include <stdio.h>
#include <math.h>

main(){
    int num1=-25;
    float num2=-25.0;

    printf("-25�� ���밪:%d\n",abs(num1));
    printf("-25.0�� ���밪:%.1f\n",fabs(num2));
    printf("10�� 3��: %.0f\n",pow(10,3));
    printf("64�� ������:%.0f",sqrt(64));

    return 0;
    }
