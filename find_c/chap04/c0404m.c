#include <stdio.h>

main(){
    int kids;
    int *pkids;
    float price;
    float *pprice;
    char code;
    char *pcode;

    price = 17.50;
    pprice= &price;

    printf("\n ���̵��� ��: ");
    scanf(" %d",&kids);
    pkids=&kids;

    printf("\n�ڵ��Է�(E:�������� C:ī������ N:���󰡰�):");
    scanf(" %c",&code);
    pcode=&code;

    switch(*pcode){
        case('E'):
        printf("���������� 50%%�� �����Ѵ�.");
        printf("\n��ü Ƽ�ϰ���:$%.2f",(*pprice * 0.5 * *pkids));
        break;
    case('C'):
        printf("ī�������� 20%%�� �����Ѵ�.");
        printf("\n��ü Ƽ�ϰ���:$%.2f",(*pprice * 0.8 * *pkids));
        break;
    default:
        printf("���󰡰� ����");
        printf("\n��ü Ƽ�ϰ���:$%.2f",(*pprice * *pkids));
        break;
    }

    return 0;
}
