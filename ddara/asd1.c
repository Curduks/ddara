//
//  asd1.c
//  ddara
//
//  Created by 박영찬 on 2021/02/01.
//

#include <stdio.h>

void sum(int);

int main(int argc, const char * argv[])
{
    sum(421);
    return 1;
}

void sum(int na)
{
    int sum=0;
    
    while(na>0)
    {
        sum += na%10;
        na = na/10;
    }
    
    printf("%d 입니다.\n" , sum);
}
