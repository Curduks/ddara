//
//  c3-q5.c
//  ddara
//
//  Created by 박영찬 on 2021/02/25.
//
/*
#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int*, int, int);

int main(void)
{
    int n,key,idx;
    int *a;
    
    printf("요소 개수: ");
    scanf("%d", &n);
    a = calloc(n, sizeof(int));
    puts("오름차 순으로 입력하시오.");
    printf("a[0]: ");
    scanf("%d",&a[0]);
    for (int i =1; i < n; i++)
    {
        do
        {
            printf("a[%d]: ", i);
            scanf("%d", &a[i]);
        }while(a[i] < a[i-1]);
    }
    printf("찾는 요소: ");
    scanf("%d", &key);
    
    idx = bin_search2(a, n, key);
    
    printf("a[%d]에 있습니다.\n", idx);
    
    free(a);
    
    return 0;
}

int bin_search2(const int a[] , int n, int key)
{
    int pl = 0; //맨 앞
    int pr = n-1; //맨 끝
    int pc; //중앙
    
    do
    {
        pc = (pl+pr) / 2 ;
        if(a[pc] == key)
        {
            if (a[pc-1] == key)
            {
                do
                {
                    pc--;
                } while (a[pc-1] == key);
                return pc;
            }
            return pc;
        }
        else if(a[pc] < key)
            pl = pc+1;
        else
            pr = pc-1;
    } while (pl <= pr);
    
    return -1;
}
*/
