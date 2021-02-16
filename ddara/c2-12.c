//
//  c2-12.c
//  ddara
//
//  Created by 박영찬 on 2021/02/16.
//
/*
#include <stdio.h>

int isleap(int);
int dayofyear(int,int,int);

int mdays[][12] =
{
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}
};

int main(void)
{
    int year,month,day;
    int retry;
    do
    {
        printf("년: "); scanf("%d", &year);
        printf("월: "); scanf("%d", &month);
        printf("일: "); scanf("%d", &day);
        printf("%d년의 %d일째입니다.\n" , year , dayofyear(year, month, day));
        printf("다시 할까여? 1 or 0 : ");
        scanf("%d", &retry);
    }while(retry == 1);
    
    return 0;
}

int isleap(int year)
{
    return year % 4 == 0 && year %100 != 0 || year % 400 == 0;
}

int dayofyear(int y , int m, int d)
{
    int i;
    int days = d;
    for(i =1; i<m; i++)
        days += mdays[isleap(y)][i-1];
    return days;
}
*/
