#include<stdio.h>
void main()
{
    int n,a[100],i,num,k,temp;

    printf("enter array");
    scanf("%d",&n);

    printf("enter sorted array");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter element");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(a[i]>num)
        {
            k=i;
            break;
        }
    }
    for(i=n;i>=k;i--)
    {
        a[i]=a[i-1];
    }

    a[k]=num;

    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }

}
