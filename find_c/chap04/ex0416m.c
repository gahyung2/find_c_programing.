#include <stdio.h>

main(){
    int i,j;
    int s_count;
    int rank;
    int tot_score=0;
    int s_score[30];
    char s_name[30][10];
    float average;
    printf("�л��� �Է�:");
    scanf("%d",&s_count);

    for(i=0;i<s_count;i++){
        printf("�̸� �Է�:");
        scanf(" %s",s_name[i]);
        printf("���� �Է�:");
        scanf(" %d",&s_score[i]);
    }

    for(i=0;i<s_count;i++){
        tot_score=tot_score+s_score[i];
        rank=1;
        for(j=0;j<s_count;j++){
            if(s_score[i]<s_score[j]){
                rank=rank+1;
            }
        }
        printf("%s�л� ����:%d�� ���:%d��\n",s_name[i],s_score[i],rank);
    }
    printf("=====\==================\n");
    average=(float)tot_score/s_count;
    printf("��ü�л� ����:%.1f",average);
    return 0;
}
