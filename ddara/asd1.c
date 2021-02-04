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
    for(int i =1; i<6;i++)
    {
        for(int p=6; p>i;p--)
            printf("*");
        printf("\n");
    }
}
