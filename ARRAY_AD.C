#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	clrscr();
	printf("Enter values for 1st array:");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n values for 1st array:");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
	printf("\n Enter values for 2nd array:");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
			scanf("%d",&b[i][j]);
	}
	printf("\n values for 2nd array:");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
			printf("%d",b[i][j]);
	}
	printf("\n Addition of Arrays is:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
		       c[i][j]=a[i][j]+b[i][j];
		       printf("%d",c[i][j]);
		}
		printf("\n");
	}
	/*for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
			printf("%d",c[i][j]);
		printf("\n");
	}   */
	getch();
}