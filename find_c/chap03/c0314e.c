#include <stdio.h>
#include <string.h>

main(){
    char s1[10];
    char s2[10];

    printf("10�� �̸��� ���� ���ڿ� �Է�:");
    scanf(" %s",s1);
    printf("���� ���ڿ��� ù ��° ����: %c\n",s1[0]);
    printf("���� ���ڿ��� ������ ����:%c\n",s1[strlen(s1)-1]);

    printf("5�� �̸��� �ѱ� ���ڿ� �Է�: ");
    scanf("%s",s2);
    printf("�ѱ� ���ڿ��� ù��° ���� : %c%c\n",s2[0],s2[1]);
    printf("�ѱ� ���ڿ��� ������ ���� : %c%c\n",s2[strlen(s2)-2],s2[strlen(s2)-1]);

    return 0;

    }
