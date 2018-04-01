//wap to implement linear search on a 1-D array
#include<stdio.h>
void linsearch(int a[],int size,int ele);
int main()
{
    int a[100],size,ele,i;
    printf("\nenter the size of the array:");
    scanf("%d",&size);
    printf("\nenter the elements of the array:");
    for(i=0;i<size;i++){
    scanf("%d",&a[i]);
    }
    printf("\n the elements you have entered are:");
    for(i=0;i<size;i++){
    printf("%d\n",a[i]);
    }

    printf("\n enter the element you want to search:");
    scanf("%d",&ele);
    linsearch(a,size,ele);
    return 0;

}


void linsearch(int a[],int size,int ele)
{
    int flag=0,pos;
     for(int i=0;i<size;i++){
            if(a[i]==ele){
                flag=1;
                pos=i+1;
            }
     }
            if(flag==0){
                printf("\n element not found in the list");
                }
            else{
                    printf("\n element found at position:%d",pos);
            }



}
