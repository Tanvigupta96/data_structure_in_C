//wap to concatenate two given arrays
#include<stdio.h>
void concat(int a[],int b[],int m,int n);
int main()
{
    int a[100],b[100],m,n;
    printf("\n enter the size of the array1:");
    scanf("%d",&m);
    printf("\n enter the size of the array2:");
    scanf("%d",&n);
    printf("\n enter the elements of the array1:");
    for(int i=0;i<m;i++){
    scanf("%d",&a[i]);
    }
    printf("\n enter the elements of the array2:");
    for(int i=0;i<n;i++){
    scanf("%d",&b[i]);
    }

    printf("\n the elements of the array 1 you entered are:");
    for(int i=0;i<m;i++){
    printf("%d\t",a[i]);
    }

    printf("\n the elements of the array 2 you entered are:");
    for(int i=0;i<n;i++){
    printf("%d\t",b[i]);
    }


concat(a,b,m,n);
return 0;
}

void concat(int a[],int b[],int m,int n)
{
    int i=0,j=0,k,c[100];
    k=m+n;
    for(i=0;i<m;i++)
        c[i]=a[i];
    for(j=0;j<n;j++){
        c[i]=b[j];
        i++;
    }
printf("\n the array after concatenation are:");
        for(i=0;i<k;i++){
            printf("%d\t",c[i]);
        }
}
