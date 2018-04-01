//wap to merge two sorted arrays:
#include<stdio.h>
int* bubblesort(int[],int);
void merge(int[],int[],int,int);
int main()
{
    int a[50],b[50],c[50],m,n,i,j;
    printf("\nenter the size of the array1:");
    scanf("%d",&m);
    printf("\nenter the size of the array2:");
    scanf("%d",&n);
    printf("\nenter the elements of the array1:");
    for(i=0;i<m;i++){
            scanf("%d",&a[i]);
    }

    printf("\n enter the elements of the array2:");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    printf("the array1,you entered is:");
     for(i=0;i<m;i++){
            printf("%d\t",a[i]);
    }

    printf("\n");
    printf("the array2,you entered is:");
     for(i=0;i<n;i++){
            printf("%d\t",b[i]);
    }

    printf("\n");

    bubblesort(a,m);
    printf("\n");
    bubblesort(b,n);
    printf("\n");

    printf("sorted array1 is:");
     for(i=0;i<m;i++){
            printf("%d\t",a[i]);
    }
    printf("\n");


    printf("sorted array2 is:");
     for(i=0;i<n;i++){
            printf("%d\t",b[i]);
    }
    printf("\n");
    merge(a,b,m,n);
    return 0;

}

int* bubblesort(int a[],int n)
{
    int temp,i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
                }
        }

    }
return(a);
}


void merge(int a[],int b[],int m,int n)
{
    int i,j,k,c[50];
    i=j=k=0;
    while(i<m&&j<n){
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k=k+1;
            i=i+1;
        }
        else
        {
            c[k]=b[j];
            k=k+1;
            j=j+1;
        }

    }
    while(i<m)
    {
        c[k]=a[i];
        k=k+1;
        i=i+1;
    }
    while(j<n)
    {

        c[k]=b[j];
        k=k+1;
        j=j+1;
    }

    printf("\n the two array\s after merging are:");


    for(i=0;i<(m+n);i++)
    {
    printf("%d\t",c[i]);


    }
}

