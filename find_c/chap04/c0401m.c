//1)������ ������ �ٸ� ������ �ּҸ� ������
//2)������ ������
//   &�ּ� ������
//   *������ ������
#include <stdio.h>

main(){
    int age=20;
    int * pAge =&age;

    //int age;
    //int * pAge;
    //age=20;
    pAge=&age;

    printf("���̴� %d\n",age);
    printf("���̴� %d\n",*pAge);

    return 0;
}
