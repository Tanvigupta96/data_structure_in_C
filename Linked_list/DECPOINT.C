#include<stdio.h>
#include<conio.h>
void dec_convert(int num,int newbase);
void dconvert(float d,int newbase);
void main()
{
	float decimal,d;
	int i,j,newbase,num,c,f;
	clrscr();
	do
	{
		printf("enter the no. u want to convert:");
		scanf("%f",&decimal);
		num=decimal;
		d=num-decimal;
		printf("%f %d %f",decimal,num,d);
		printf("\nenter ur choice");
		scanf("%d",&f);

		switch(f)
		{
		case 1:
		{dec_convert(num,2);
		dconvert(d,2);
		break;    }
		case 2:  { dec_convert(num,8);
		dconvert(d,8);
		break;}

		 case 3:{dec_convert(num,16);
		  dconvert(d,16);
		 break;}

		 default:printf("error!");
		 }
		 printf("\ndo u want to continue(1/0)" );
		 scanf("%d",&c);
	} while(f!=0);



getch();
}

void dec_convert(int num,int newbase)
{           int j=0,i=0,rem[30];
	printf("\nthe new base is:",newbase);

	while(num!=0)
	{
		rem[i++]=num%2;
		num=num/2;
	}
	  for(j=i-1;j>=0;j--)
	  {	if(rem[j]<10)
		printf("%d",rem[j]);

	  else
	  {
	  switch(rem[j])
	  {
		case 10: {printf("A");break;}
		case 11: {printf("B");break;}
		case 12: {printf("C");break;}
		case 13: {printf("D");break;}
		case 14: {printf("E");break;}
		case 15: {printf("F");break;}
		 }

	  }
      }
}


	void dconvert(float d,int newbase)
	{ int i,arr[64];
	printf(".");
	for(i=0;i<6;i++)
	{       d=d*newbase;

		arr[i]=(int)d;
		d=d-arr[i];

	}
	for(i=0;i<6;i++)

	{
	       printf("%d",arr[i]);
	}

}