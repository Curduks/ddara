//
//  asd1.c
//  ddara
//
//  Created by 박영찬 on 2021/02/01.
//

#include <stdio.h>

void spira(int);
void nrpira(int);

int main(int argc, const char * argv[])
{
    int a;
    printf("숫자 입력: "); scanf("%d", &a);
    nrpira(a);
}



void spira(int n)
{
    
    for (int i=1; i<=n; i++)
    {
        for(int k=n; k>i ; k--)
            putchar(' ');
        for(int j=0; j<(i-1)*2+1; j++)
            putchar('*');
        putchar('\n');
    }
    
}

void nrpira(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int k=0;k<i;k++)
            printf(" ");
        for(int j=(n-1)*2+1; j>=(i-1)*2+1 ; j--)
            printf("%d",i);

        putchar('\n');
    }
}
