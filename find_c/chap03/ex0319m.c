#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    char s1[100];
    char s2[20]="";
    int i;

    printf("영어단어를 입력하세요: ");
    scanf(" %s",&s1);
    for(i=0;i<strlen(s1);i++){
        s2[i]=s1[strlen(s1)-1-i];
    }
    printf("%s",s2);

    return 0;
}
