//
//  c2-9.c
//  ddara
//
//  Created by 박영찬 on 2021/02/16.
//
/*
#include <stdio.h>

int main()
{
    int i,n;
    int prime[500]; //소수를 저장하는 배열
    int ptr = 0; //이미 얻은 소수의 개수
    unsigned long counter = 0; //나눗셈 횟수
    prime[ptr++] = 2; //2는 소수
    
    for (n = 3; n<= 1000; n += 2) //홀수만을 대상으로
    {
        for(i = 1; i<ptr; i++) //이미 얻은 소수로 진행
        {
            counter++;
            if(n % prime[i] == 0) //나누어 떨어지므로 소수가 아님
                break; //탈출
        }
        if(ptr == i) //마지막까지 나누어지지 않았다면
            prime[ptr++] = n; //배열에 저장
    }
    
    for (i = 0 ; i < ptr; i++)
    {
        printf("%d\n", prime[i]);
    }
    printf("나눗셈을 진행한 횟수: %lu\n" , counter);
    
    return 0;
}
*/
