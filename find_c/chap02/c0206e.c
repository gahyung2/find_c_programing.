#include <stdio.h>

main(){
    int x,y;
    int large, small;

    printf("���� 2���� �Է��ϼ���:");
    scanf("%d %d",&x,&y);

    large=x>y?x:y;
    small=x>y?y:x;

    printf("ū ���� %d\n",large);
    printf("���� ���� %d",small);

    return 0;
}
