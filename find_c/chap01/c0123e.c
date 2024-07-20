#include <stdio.h>

main(){
    int jumsu;

    printf("점수 입력:");
    scanf(" %d",&jumsu);

    if(jumsu>=90){
        printf("A학점");
    }else if(jumsu>=80){
        printf("B학점");
    }else if(jumsu>=70){
        printf("C학점");
    }else if(jumsu>=60){
        printf("D학점");
    }else{
        printf("F학점");
       }
    return 0;
}
