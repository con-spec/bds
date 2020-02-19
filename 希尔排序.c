#include <stdio.h>
void shellsort(int k[],int n)
{
    int i,j,t,gap=n;
    while(gap>0)
    {
        gap=gap/2;
        for(i=0;i<gap;i++)
        {
            j=i+gap;
            if(k[i]>k[j])
            {
                t=k[i];
                k[i]=k[j];
                k[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",k[i]);
    }
    printf("\n");
}
void main()
{
    int a[]={1,9,2,8,3,7,4,6,8,6};
    int length=sizeof(a)/sizeof(a[0]);
    shellsort(a,length);
}




