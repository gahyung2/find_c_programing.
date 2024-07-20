//포인터 배열
#include <stdio.h>

main(){
    char * pname[3]={"홍길동","김철수","박인호"};
    int i;

    for(i=0;i<3;i++){
        printf("%s\n",pname[i]);
    }

    return 0;
}
