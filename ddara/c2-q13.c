//
//  c2-q13.c
//  ddara
//
//  Created by 박영찬 on 2021/02/17.
//
/*
#include <stdio.h>

typedef struct
{
    int y;
    int m;
    int d;
}Date;

Date After(Date x, int n);
Date Before(Date x , int n);
Date DateOf(int , int ,int );

int isleap(int);
int dayofyear(int,int,int);
void Print(Date);

int mdays[][12] =
{
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}
};

int main(void)
{
    Date date;
    int n;
    
    printf("년 월 일 입력: ");
    scanf("%d %d %d", &date.y , &date.m, &date.d);
    printf("n일 앞,뒤의 날짜 입력: ");
    scanf("%d",&n);
    
    Print(After(date, n));
    Print(Before(date, n));
    
    return 0;
}


int isleap(int year)
{
    return year % 4 == 0 && year %100 != 0 || year % 400 == 0;
}

Date DateOf(int y, int m, int d)
{
    Date temp;
    temp.y = y;
    temp.m = m;
    temp.d = d;
    
    return temp;
}

Date After(Date temp,int n)
{
    temp.d += n;
    
    while(temp.d > mdays[isleap(temp.y)][temp.m-1])
    {
        temp.d -= mdays[isleap(temp.y)][temp.m-1];
        if(++temp.m > 12)
        {
            temp.m = 1;
            temp.y++;
        }
        
    }
    
    return temp;
}

Date Before(Date temp,int n)
{
    temp.d -= n;
    
    
    while (temp.d < 1)
    {
        if(--temp.m < 1)
        {
            temp.m = 12;
            temp.y--;
        }
        temp.d += mdays[isleap(temp.y)][temp.m-1];
    }
    
    return temp;
}

void Print(Date x)
{
    int y = x.y;
    int m = x.m;
    int d = x.d;
    
    char * ws[] = { "일" , "월" , "화" , "수" , "목", "금", "토"};
    if( m == 1 || m == 2)
    {
        y--;
        m += 12;
    }
    printf("%04d년 %02d월 %02d일(%s)\n" , x.y , x.m , x.d , ws[(y+y / 4-y / 100 +y / 400 + (13*m+8)/5 +d) % 7]);
}
*/
