/*const를 붙여 변수를 선언할 때는 초기값을 설정해야 한다.
  const를 붙여 선언하면 변수의 ㄱ밧은 상수가 되어
  컴파일 할 때 led가 13으로 치환된다.
  실행파일의 멤리 용량을 줄일 수 있다. */

#include <stdio.h>

main(){
    const int led=13;
    printf("%d",led);
    return 0;
}
