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

    printf("\n 아이들의 수: ");
    scanf(" %d",&kids);
    pkids=&kids;

    printf("\n코드입력(E:직원할인 C:카드할인 N:정상가격):");
    scanf(" %c",&code);
    pcode=&code;

    switch(*pcode){
        case('E'):
        printf("직원할인은 50%%를 할인한다.");
        printf("\n전체 티켓가격:$%.2f",(*pprice * 0.5 * *pkids));
        break;
    case('C'):
        printf("카드할인은 20%%를 할인한다.");
        printf("\n전체 티켓가격:$%.2f",(*pprice * 0.8 * *pkids));
        break;
    default:
        printf("정상가격 지불");
        printf("\n전체 티켓가격:$%.2f",(*pprice * *pkids));
        break;
    }

    return 0;
}
