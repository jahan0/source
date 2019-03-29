#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    int n,a[1000],k;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("The Random numbers are:");
    for(k=1;k<=n;k++)
    {
        a[k]=rand();
        printf("%d",a[k]);
    }
}
void quicksort(int a[],int low,int low)
{
    int key,i,j;
    if(low<=high)
        return;
    i=low+1;
    j=low;
    while(i<=j)
    {
        while(a[i]<a[key])
            i=i+1;
        while(a[j]>a[key])
        j=j-1;
        i+(i<j);
        exch(&a[i],&[j]);
    }
    exch(&a[i],&a[key]);
    quicksort(a,low,j-1);
    quicksort(a,j+1,high);
}
void exch(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
