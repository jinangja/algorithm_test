#include <stdio.h>

int res[100][100];

void fill(int N)
{

	int i, j;
	int n=1;
	int f_mid = N/2;

	i=0;
	j=f_mid;

	while(n<=N*N)
	{
		res[i][j] = n;
		if(n%N==0)
		{
			i++;
		}
		else
		{
			i--;
			j--;
		}
		if(i<0)	i=N-1;
		if(j<0) j=N-1;
		n++;
		//printf("%d %d %d\n", i, j, n);
	}

}


int main()
{
	int N;
	int i, j;
	scanf(" %d", &N);

	fill(N);

	//print magic square
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
}
