#include<stdio.h>
#include<math.h>
int main()
{
	int a[20],i,key,n,flag =0;
	printf("Enter how many elements ?\n ");
	scanf("%d",&n);
	printf("enter the elements of array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	printf("enter element to serch");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	
	if(a[i]== key )
	{
		flag++;
		break;
	
	}
	if(flag!=0)
	printf("element found at index %d",i);
	else
	printf("element not found :");
	return 0;                            
}