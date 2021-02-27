//
//  c3-q6.c
//  ddara
//
//  Created by 박영찬 on 2021/02/27.
//
/*
#include <stdio.h>
#include <stdlib.h>

int cmp(const long *a,const long *b);

int main(void)
{
    int nx,ky;
    long *x,*p;
    
    printf("요소 갯수: ");
    scanf("%d",&nx);
    x = calloc(nx,sizeof(long));
    puts("내림차순으로 입력하시오.");
    printf("x[0] : ");
    scanf("%ld", &x[0]);
    for(int i = 1; i< nx; i++)
    {
        do
        {
            printf("x[%d] : ",i);
            scanf("%ld",&x[i]);
        } while (x[i] > x[i-1]);
    }
    printf("찾는 요소: ");
    scanf("%d", &ky);
    
    p = bsearch(&ky, x, nx, sizeof(int), (int (*)(const void*,const void*))cmp);
    
    if(p == NULL) puts("검색에 실패하였습니다.");
    else
    {
        printf("%d는 x[%d]에 존재합니다.\n",ky,(int)(p-x));
    }
    free(x);
    return 0;
}

int cmp(const long *a, const long *b)
{
    if(*a < *b) return 1;
    else if(*a > *b) return -1;
    else return 0;
}
*/
