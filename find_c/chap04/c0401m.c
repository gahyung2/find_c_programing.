//1)포인터 변수는 다른 변수의 주소를 저장함
//2)포인터 연산자
//   &주소 연산자
//   *역참조 연산자
#include <stdio.h>

main(){
    int age=20;
    int * pAge =&age;

    //int age;
    //int * pAge;
    //age=20;
    pAge=&age;

    printf("나이는 %d\n",age);
    printf("나이는 %d\n",*pAge);

    return 0;
}
