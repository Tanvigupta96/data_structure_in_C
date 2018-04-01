//wap to implement bubble sort in a 1-D array
#include<stdio.h>
void bubblesort(int a[],int n);
int main()
{


    int n,a[100];
     printf("\n enter the size of the array:");
    scanf("%d",&n);
    printf("\nenter the array you wish to sort:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n the array you entered is:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
}

bubblesort(a,n);
return 0;
}

void bubblesort(int a[],int n)
{
    int temp,flag;

    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
            }
        }
        if(!flag)
        break;
    }
    printf("\n the sorted array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
}
}


