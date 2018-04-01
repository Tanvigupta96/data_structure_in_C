//wap to perform transpose the matrix:
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,m,n,a[10][10],c[10][10];
    printf("enter the dimension of the 2-D matrix:");
    scanf("%d %d",&m,&n);
        printf("\nenter the elements of the matrix:");
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            }
        }
        printf("the first array you entered is:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
            }
            printf("\n");
        }


         printf("\matrices after transpose is:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            c[i][j]=a[j][i];
            printf("%d\t",c[i][j]);
            }
            printf("\n");
        }



     return 0;
}


