#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	int div = 1000000000;
	int arr[10]={0,};
	int i=0, j=0, digit=0;
	int tmp=0;

	scanf(" %d", &N);

	while(div != 0)
	{
		tmp = N/div;
		
		if(tmp!=0 && digit==0)
		{
			digit = 1;
		}
		
		if(digit!=0)
		{
			arr[i] = tmp;
			i++;
			digit++;
		}

		N = N%div;
		div /= 10;
	}
	digit--;

	for(i=0; i<digit-1; i++)
	{
		for(j=i+1; j<digit; j++)
		{
			if(arr[i]<arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for(i=0; i<digit; i++)
		printf("%d",arr[i]);
	printf("\n");

	return 0;
}
