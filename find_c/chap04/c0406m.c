//�迭 �̸��� �迭�� ù ��° ��Ҹ� ����Ű�� �������̴�.
#include <stdio.h>

main(){
    int vals [5]={10,20,30,40,50};

    printf("ù��° ��:%d\n",vals[0]);
    printf("ù��° ��:%d\n",*vals);

    printf("{����° ��:%d\n",vals[2]);
    printf("����° ��:%d\n",*(vals+2));

    return 0;
}
