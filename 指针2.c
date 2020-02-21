#include <stdio.h>
void minmax(int a[],int len,int *max, int *min);
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,0};
    int max,min;
    minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
    printf("min=%d , max=%d\n",min,max);
}
void minmax(int a[],int len,int *max,int *min)
{
    int i;
    *min=*max=a[0];
    for(i=0;i<len;i++)
    {
        if(a[i]<*min)
        *min=a[i];
        if(a[i]>*max)
        *max=a[i];
    }
}