//wap to multiply two 2-D arrays:
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,m,n,p,q,a[10][10],b[10][10],c[10][10];
    printf("enter the dimension of first 2-D matrix:");
    scanf("%d %d",&m,&n);
    printf("enter the dimension of second 2-D matrix:");
    scanf("%d %d",&p,&q);
    if(n==p)
    {
        printf("\nenter the elements of the first matrix:");
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


        printf("\nenter the elements of the second matrix:");
        for(i=0;i<p;i++){
                for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
            }
        }


        printf("the second array you entered is:\n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
            printf("%d\t",b[i][j]);
            }
            printf("\n");
        }


         printf("\matrices after multiplication are:\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++)
            {
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }

        }
        }
        for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d\t",c[i][j]);
            }
            printf("\n");

        }

    }

  else
    {printf("\n multiplication of the two matrices is not possible");
     }   return 0;
}
