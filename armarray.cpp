#include<stdio.h>
#include<math.h>
int main()
{
	int arr[]={1634,153,123,352};
	int n= sizeof(arr)/sizeof(arr[0]);
	int i,count,temp,remain,sum=0;
	printf("Elems in array : \t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	for(i=0;i<n;i++)
	{ temp=arr[i];
	  count = 0;
		while(arr[i]>0)
		{
			arr[i]=arr[i]/10;
			count++;
		}
		
		arr[i]=temp;
	   
	   while(arr[i]>0)
	   {
	   	    remain=arr[i]%10;
		    sum=sum + pow(remain,count);
			arr[i]=arr[i]/10;  
	   }
	   
	   if(temp==sum)
	   {
	   	printf("\n\n%d is ARMSTRONG",temp);
	   }
	   else{
	   	printf("\n\n%d is NOT ARMSTRONG",temp);
	   }
		
		}
		
	}
	
