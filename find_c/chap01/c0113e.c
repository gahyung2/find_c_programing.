#include <stdio.h>

main(){
    char name[20];
    int age;
    char hakjum;

    printf("성명 입력: ");
    scanf(" %s",name);
    printf("성명은 %s\n",name);

    printf("나이 입력:");
    scanf(" %d",&age);
    printf("나이는 %d\n",age);

    printf("학점 입력: ");
    scanf(" %c",&hakjum);
    printf("학점은 %c\n",hakjum);

    return 0;
}
