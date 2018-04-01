//wap to copy the contents of one array into other array
#include<stdio.h>
int* copy(int *a,int n)
{
    int b[100],i;

    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        return b;
    }
}


int main()
{
    int a[100],i,n,*b;
    printf("\nenter the size of the array:");
    scanf("%d",&n);
    printf("\nenter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nthe elements you entered are:");
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
    }

    b=copy(a,n);

    printf("\n after copying the elements are:");
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
        }
        return 0;

}

