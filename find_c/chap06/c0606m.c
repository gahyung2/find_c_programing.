/*전역변수: 함수 외부에서 변수를 정의
  지역변수: 중괄호 안에서 변수를 정의 */

  #include <stdio.h>

  int g1=10;

  main(){
    float n1;
    n1=9.0;
    printf("%d %.2f\n",g1,n1);
    f_again();
    return 0;
}

float g2=19.0;

f_again(){
    int n2=5;
    printf("%d %.2f %d\n",n2,g2,g1);
    return 0;
}
