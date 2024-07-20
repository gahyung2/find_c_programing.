#include <stdio.h>

main(){
    int budget;
    int weather;

    printf("예산 입력(만 원):");
    scanf(" %d",&budget);

    if(budget<200){
        printf("날씨 입력(1: 맑음 2:비옴):");
        scanf("%d",&weather);
        printf("국내여행\n");
        if(weather==1){
            printf("계곡");
        }else{
            printf("실내스파");
        }
    }else{
        printf("해외여행");
    }
    return 0;
}
