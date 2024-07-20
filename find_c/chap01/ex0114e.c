#include <stdio.h>

main(){
    int width,hight,area;

    printf("직사각형의 가로를 입력하시오 : ");
    scanf("%d",&width);

    printf("직사각형의 세로를 입력하시오:");
    scanf("%d",&hight);

    area=width*hight;

    printf("직사각형의 넓이는 %d입니다.",area);

    return 0;
    }
