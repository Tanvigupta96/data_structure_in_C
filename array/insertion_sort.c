//wap to perform insertion sort on a 1-D array:
#include<stdio.h>
void insertion_sort(int a[],int n);
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
    insertion_sort(a,n);
    return 0;
}


insertion_sort(int a[],int n)
{
    int i,hole,temp;
    for(i=1;i<n;i++)
    {
        hole=i;
        temp=a[i];
        while(hole>0&&a[hole-1]>temp)
        {
            a[hole]=a[hole-1];
            hole--;
        }

        a[hole]=temp;
    }
printf("\nthe element after insertion sort are:");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
}
