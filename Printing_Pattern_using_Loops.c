#include<stdio.h>

int main()
{
    int i, j, n;
    scanf("%d",&n);
    
    for(i=n; i>1; i--)
    {
        for(j=n;j>=1;j--)
        {
            if(j>i) printf("%d ", j);
            else printf("%d ", i);
        }
        for(j=2;j<=n;j++)
        {
            if(j>i) printf("%d ", j);
            else printf("%d ", i);
        }
        printf("
");
    }    
    for(i=1; i<=n; i++)
    {
        for(j=n;j>=1;j--)
        {
            if(j>i) printf("%d ", j);
            else printf("%d ", i);
        }
        for(j=2;j<=n;j++)
        {
            if(j>i) printf("%d ", j);
            else printf("%d ", i);
        }
        printf("
");
    }
    
    return 0;
}