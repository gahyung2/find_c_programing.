#include <stdio.h>
#include <string.h>

main(){
    char first[25]="�ȳ��ϼ���";
    char last[25]=" �����մϴ�";

    strcat(first,last);
    printf("%s\n",first);

    return 0;
}
