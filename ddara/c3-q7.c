//
//  c3-q7.c
//  ddara
//
//  Created by 박영찬 on 2021/02/27.
//
/*
#include <stdio.h>
#include <stdlib.h>

int cmp(const int *, const int *);
void *seqsearch(const void*,const void*,size_t,size_t,int(*)(const void*, const void*));

int main(void)
{
    int nx,ky;
    int *x,*p;
    
    printf("요소개수: ");
    scanf("%d", &nx);
    
    x = calloc(nx, sizeof(int));
    
    puts("오름차순으로 입력.");
    printf("x[0] : ");
    scanf("%d", &x[0]);
    
    for(int i = 1; i<nx;i++)
    {
        do
        {
            printf("x[%d] : ",i);
            scanf("%d",&x[i]);
        } while (x[i] < x[i-1]);
    }
    printf("찾는 요소: ");
    scanf("%d", &ky);
    
    return 0;
}

int cmp(const int *a,const int *b)
{
    if(*a < *b) return -1;
    else if(*a > *b) return 1;
    else return 0;
}

void *seqsearch(const void *key, const void *base, size_t nmeb, size_t size, int(*compar)(const void* , const void*))
{
    
    
    return 0;
}
*/
