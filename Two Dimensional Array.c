#include<stdio.h>
#include<stdlib.h>
void main() 
{
	//Static method 
	int a[2][2]={10,20,30,40};
	//Direct method
	int b[2][2];
	b[0][0]=11;
	b[0][1]=22;
	b[1][0]=33;
	b[1][1]=44;
	//Interactive method
	int c[2][2];
	int i,j;
	printf("Enter value for c Array\n");
	 for(i=0; i<2; i++)
	     for(j=0;j<2;j++)
	     scanf("%d",&c[i][j]);
	printf("Contents of Array a\n");
	 for(i=0;i<2;i++)
	     for(j=0; j<2; j++)
		 printf("%d\n",a[i][j]);
	printf("Contents of Array b\n");
	 for(i=0;i<2;i++)
	     for(j=0; j<2; j++);
		 printf("%d\n",b[i][j]);
	printf("Contents of Array c\n");
	 for(i=0;i<2;i++)
	     for(j=0; j<2; j++);
		 printf("%d\n",c[i][j]);	 	      
}
