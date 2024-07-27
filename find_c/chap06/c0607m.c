#include <stdio.h>

int scores[5];
int average;

main(){
    get_scores();
    cal_average();
    print_average();
    return 0;
}

get_scores(){
    int i;
    for(i=0;i<5;i++){
        printf("점수 입력:");
        scanf("%d",&scores[i]);
    }
}

cal_average(){
    int i,sum=0;
    for(i=0;i<5;i++){
        sum=sum+scores[i];
    }
    average=sum/5;
}

print_average(){
    printf("평균은 %d입니다.\n",average);
}
