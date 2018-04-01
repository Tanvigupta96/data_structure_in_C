//wap to implement selection sort in 1-D array:
#include<stdio.h>
void selection_sort(int a[],int n);
int main()
{
    int n, a[100];
    printf("\n enter the size of the array:");
    scanf("%d",&n);
    printf("\n enter the elements you want to sort:");
    for(int i=0;i<n;i++)
    {scanf("%d",&a[i]);
    }
    printf("\nthe elements you entered are:");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
    selection_sort(a,n);
    return 0;
}

void selection_sort(int a[],int n)
{
    int i,j,temp,min,pos;
    for(i=0;i<n-1;i++)
    {
        pos=i ; //pos will hold the index of the minimum element
        for(j=i+1;j<n;j++)
        {

            if(a[j]<a[pos])
                pos=j;
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
    printf("\nthe elements after sorting are:");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
}
