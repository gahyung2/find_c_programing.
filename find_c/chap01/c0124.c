#include <stdio.h>

main(){
    int card;

    printf("숫자 카드번호 입력:");
    scanf(" %d",&card);

    if(card<=13){
        printf("스페이드");
    }else if(card<=26){
        printf("다이아몬드");
    }else if(card<=39){
        printf("하트");
    }else if(card<=52){
        printf("클로버");
    }else{
        printf("에러");
    }
    return 0;
}

