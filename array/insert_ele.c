//wap to implement insertion in a 1-D array:
#include<stdio.h>
void insert_ele(int a[],int num,int pos,int n);
int main()
{

    int a[100],n,i,pos,num;
    printf("\n enter the number and position:");
    scanf("%d%d",&num,&pos);
    printf("\n enter the number of elements in the array:");
    scanf("%d",&n);
    printf("\n Enter the elements:");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n you entered:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

        insert_ele(a,num,pos,n);
        return 0;
}

void insert_ele(int a[],int num,int pos,int n)
{
    int i;
    i=n-1;
    while(i>=(pos-1)){
        a[i+1]=a[i];
        i=i-1;
    }
    a[pos-1]=num;
    printf("\n new array is:\n");
    for(i=0;i<=n;i++){


        printf("%d\t",a[i]);
    }
}
