#include<stdio.h>
int main()
{
    int n1,n2,a[100],b[100],j,c=0,i,temp;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;i<n1;i++)
    {
        int flag=0;
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            c++;
        }
    }
    if(c==n1 && c==n2)
    printf("True");
    else
    printf("False");
}