#include<stdio.h>
#include<math.h>
int main()
{
	int arr[10]={2,7,11,15};
	
	for(int i=0; i<4; i++)
	{
		for(int j=i; j<4; j++)
		{
			for(int k=i; k<=j; k++)
			{
				printf("%d", arr[k]);
				if(k<j) printf(", "); 	
			}
			printf("\n");
		}
		for(int k=0; k<25; k++) printf("%c",205); 
	}
	return 0;
	
}