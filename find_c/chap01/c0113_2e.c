#include <stdio.h>

main(){
    int a;
    char b;
    char c[10];

    printf("���� �Է�:");
    scanf("%d",&a);
    printf("%d\n",a);

    printf("���� �Է�:");
    scanf(" %c",&b);
    //scanf("%c",&b);�� �ϸ� ������ ��(������ ����)
    printf("%c\n",b);

    printf("���ڿ� �Է�:");
    scanf("%s",c);
    printf("%s\n",c);
    return 0;
}
