//
//  c3-3.c
//  ddara
//
//  Created by 박영찬 on 2021/02/20.
//
/*
#include <stdio.h>
#include <stdlib.h>

int search(int *, int, int);
int search2(int *, int, int);

int main(void)
{
    int i, nx, ky, idx;
    int *x;
    puts("선형 검색(보초법)");
    printf("요소 개수: ");
    scanf("%d", &nx);
    x = calloc(nx+1, sizeof(int));
    for(i=0; i< nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("검색값 : ");
    scanf("%d" , &ky);
    idx = search2(x, nx, ky);
    if(idx == -1)
        puts("검색에 실패했습니다.");
    else
        printf("%d은[는] x[%d]에 있습니다.\n", ky , idx);
    free(x);
    return 0;
}

int search(int a[],int n, int key)
{
    int i = 0;
    a[n] = key;
    
    while(1)
    {
        if(a[i] == key)
            break;
        i++;
    }
    
    return i == n ? -1 : i;
}

int search2(int a[], int n, int key)
{
    int i;
    a[n] = key;
    
    for(i=0; i<= n; i++)
    {
        if(i == n)
            return -1;
        else if(a[i] == key)
            return i;
        
    }
    
    
    return 0;
}
*/
