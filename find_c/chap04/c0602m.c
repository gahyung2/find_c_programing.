#include <stdio.h>

main(){
    int num;
    printf("한 변의 길이 입력: ");
    scanf("%d",&num);
    f_square(num);
    return 0;
}

f_square(int num){
    printf("정사각형 넓이: %d",num*num);
    return ;
}
