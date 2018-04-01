//wap to implement binary search in 1-D arry
#include<stdio.h>
void binsearch(int a[],int size,int key);
int main()
{
    int a[100],size,key;
    printf("\n enter the size of the array:");
    scanf("%d",&size);
    printf("\n enter the elements of the array:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n the elements you entered are:");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
}

printf("\n enter the element you want to search:");
scanf("%d",&key);
binsearch(a,size,key);
return 0;
}



void binsearch(int a[],int size,int key)
{
    int i=0,mid,j=size-1,flag=0;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(a[mid]==key)
        {
            printf("the element %d is found at the position:%d",key,mid+1);
            flag=1;
            break;
        }
            else if(a[mid]<key)
            i=mid+1;
        else
            j=mid-1;
    }
        if(flag==0)
        {
            printf("\n element %d not found",key);

        }
}
