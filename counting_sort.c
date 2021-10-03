/***********Program of Counting Sort***********/
/***********Author : Bhavya Jindal ************/
/**********************/
#include<stdio.h>
void CountingSort(int A[],int n,int k)
{
    int c[k+1];
    int i,j;
    int b[n];
    for(i=0;i<=k;i++)
    {
        c[i]=0;
    }
    for(i=0;i<=n-1;i++)
    {
        c[A[i]]=c[A[i]]+1;
    }
    for(i=1;i<=k;i++)
    {
        c[i]=c[i]+c[i-1];
    }
    for(j=n-1;j>=0;j--)
    {
        b[c[A[j]]-1]=A[j];
        c[A[j]]=c[A[j]]-1;
    }
    for(i=0;i<n;i++)
    {
        printf("\t%d",b[i]);
    }
}
void main()
{
    int i,n,a[100];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k=a[0];
    CountingSort(a,n,k);
}
