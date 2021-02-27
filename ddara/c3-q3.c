//
//  c3-q3.c
//  ddara
//
//  Created by 박영찬 on 2021/02/25.
//
/*
#include <stdio.h>
#include <stdlib.h>

int search_idx(const int*, int, int, int *);

int main(void)
{
    int n,key;//요소개수,key
    int *a; // 저장배열
    int *idx; //key가 들어간 위치 저장배열
    int size;
    
    printf("요소개수: ");
    scanf("%d" , &n);
    a = calloc(n, sizeof(int));
    idx = calloc(n, sizeof(int));
    for (int i = 0; i<n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("찾는 요소: ");
    scanf("%d", &key);
    size = search_idx(a, n, key, idx);
    if (size == 0)
        printf("일치하는 요소가 없습니다.\n");
    else
    {
        printf("일치하는 요소는 %d 개 입니다.\n", size);
        for (int i = 0; i < size; i++)
            printf("x[%d] ",idx[i]);
        putchar('\n');
    }
    free(a);
    free(idx);
    return 0;
}

int search_idx(const int a[], int n, int key, int idx[])
{
    int nx = 0;
    for(int i= 0 ; i< n; i++)
    {
        if(a[i] == key)
            idx[nx++] = i;
    }
    return nx;
}
*/
