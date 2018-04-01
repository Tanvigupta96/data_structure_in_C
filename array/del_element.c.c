//wap to delete an element from the array:
void delete_ele(int a[],int n,int pos);
int main(){
    int a[100],pos,n,i;
    printf("\nenter the size of the array:");
    scanf("%d",&n);
    printf("\nenter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe elements you entered are:");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n enter the position from which you want to delete:");
    scanf("%d",&pos);

    delete_ele(a,pos,n);
}

void delete_ele(int a[],int pos,int n)
{
    int i;
    pos=pos-1;
    if(pos!=n)
    {
        for(i=pos;i<n;i++)
        {
            a[i]=a[i+1];
        }

    }
printf("\n the array after deletion is:");
     for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
}
