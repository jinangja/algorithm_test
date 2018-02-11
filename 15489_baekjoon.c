#include <stdio.h>

int main()
{
	int arr[31][31];
	int R, C, W;

	int i, j;
	int sum=0;

	scanf("%d %d %d", &R, &C, &W);

	//make pascal's triangle
	for(i=1; i<R+W; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(j==1) arr[i][j]=1;
			else if(j==i) arr[i][j]=1;
			else arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
		}
	}
	//get the sum of triangle
	for(i=0; i<W; i++)
	{
		for(j=0; j<=i; j++)
		{
			sum += arr[R+i][C+j];
		}
	}

	printf("%d\n", sum);
}
