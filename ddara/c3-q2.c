//
//  c3-q2.c
//  ddara
//
//  Created by 박영찬 on 2021/02/20.
//

#include <stdio.h>
#include <stdlib.h>

int search(int *,int ,int);

int main(void)
{
    int i,nx,ky,idx;
    int *x;
    
    printf("요소 개수: ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    for (i = 0; i<nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d",&x[i]);
    }
    printf("검색값: ");
    scanf("%d", &ky);
    idx = search(x, nx, ky);
    
    if(idx == -1)
        puts("검색에 실패했습니다.");
    else
        printf("%d은(는) x[%d]에 있습니다.\n", ky , idx);
    free(x);

    return 0;
}

int search(int a[],int n, int key)
{
    int i;
    
    printf("   |");
    for(i=0;i<n;i++)
        printf("%3d",i);
    printf("\n---+");
    for(i=0; i< n; i++)
        printf("---",i);
    printf("-\n");
    
    for(i=0; i<n; i++)
    {
        int j;
        printf("   |");
        printf("%*s" , 3 * (i -1) + 5 , "");
        printf("*\n");
        printf("%3dl", i);
        for(j=0; j<n;j++)
            printf("%3d" , a[j]);
        putchar('\n');
        
        if(a[i] == key)
            return i;
        
        printf("   |\n");
        
    }
    
    return -1;
}
