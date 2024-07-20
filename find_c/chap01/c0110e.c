#include <stdio.h>

main(){
    char name[5]="Inho";
    int age = 20;
    printf("%s의 나이는 %d살이다.\n",name,age);

    printf("빛의 속도는\"%.1fkm/s\"입니다.\n",300000.0);
    printf("중력 가속도는 \'%.1fm/s\'입니다.\n",9.8);
    printf("정수는%%d로 표시하고 실수는 %%f로 표시한다.");
    return 0;
}
