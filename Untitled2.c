#include<stdio.h>
int main()
{
	int arr[20],n,i=0,j=0,el,c=0,comp=0;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched");
	scanf("%d",&el);
	for(i=0;i<n;i++)
	{
		c=0;
		comp++;
		if(arr[i]==el)
		{
			printf("\nelement %d is found",el);
			c=1;
			printf("\nno of comaprison required is %d",comp);
			break;
	    }
	}
	if(c==0)
	{
	    printf("\nelement %d not found",el);
	    printf("\nno of comaprison required is %d",n);
	}
}
