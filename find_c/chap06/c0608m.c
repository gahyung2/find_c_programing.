//값으로 전달하기
#include <stdio.h>

main(){
     int i;
     printf("정수 입력:");scanf("%d",&i);
     half(i);
     printf("%d",i);
     return 0;
}

half(int i){
    i=i/2;
    printf("%d\n",i);
    return;
}
