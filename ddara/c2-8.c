//
//  c2-8.c
//  ddara
//
//  Created by 박영찬 on 2021/02/13.
//
/*
#include <stdio.h>

int card_conver(unsigned,int,char *);

int main()
{
    int i;
    unsigned no;
    int cd;
    int dno;
    char cno[512];
    int retry;
    
    puts("10진수를 기수 변환합니다.");
    do
    {
        printf("변환하는 음이 아닌 정수: ");
        scanf("%d", &no);
        do
        {
            printf("어떤 진수로 변환할까요?(2-36) : ");
            scanf("%d" , &cd);
        }while(cd < 2 || cd > 36);
        dno = card_conver(no, cd, cno);
        printf("%d진수로는",cd);
        for(i = dno - 1; i >= 0 ; i--)
            printf("%c" , cno[i]);
        printf("입니다.\n");
        printf("한번 더 할까요?(1 -- 예/ 0 -- 아니오 : ");
        scanf("%d" , &retry);
    }while (retry == 1);
    
    return 0;
}

int card_conver(unsigned x,int n , char d[])
{
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;
    
    if(x == 0)
        d[digits++] = dchar[0];
    else
        while (x)
        {
            d[digits++] = dchar[x%n];
            x /= n;
        }
    return digits;
}
*/
