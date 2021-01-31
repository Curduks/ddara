//
//  main.c
//  ddara
//
//  Created by 박영찬 on 2021/01/31.
//

#include <stdio.h>

void plus(int);

int main(int argc, const char * argv[])
{
    
    plus(312);
    plus(13212);
}

void plus(int n)
{
    int c = n;
    int result = 0;
    
    while(n>0)
    {
        result += n%10;
        n = n/10;
    }
    
    printf("%d의 자릿수 합은: %d 입니다.\n",c,result);
}
