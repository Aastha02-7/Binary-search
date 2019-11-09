#include<conio.h>
#include<stdio.h>
int main()
{
	int a[100],i,n,loc,mid,beg,end,item,flag=0;
	printf("Enter the number of element: ");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be search: ");
	scanf("%d",&item);
	loc=0;
	beg=0;
	end=n-1;
	while((beg<=end)&&(item!=a[mid]))
	{
		mid=((beg+end)/2);
		if(item==a[mid])
		{
			printf("Search is successfull\n");
			loc=mid;
			printf("Position of item %d\n",loc+1);
			flag++;
		}
		if(item<a[mid])
			end=mid-1;
		else
			beg=mid+1;
	}
	if(flag==0)
		printf("search is not succesfull\n");
	return 0;
}
