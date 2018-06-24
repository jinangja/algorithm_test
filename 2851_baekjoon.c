#include <stdio.h>

int main()
{
	int sum = 0, tmp;
	int min = 100, cur = 0;
	int i, res = 0;
	for(i = 0; i < 10; i++)
	{
		scanf(" %d", &tmp);

		sum += tmp;

		if(sum < 100)
			cur = 100 - sum;
		else
			cur = sum - 100;

		if(min > cur)
		{
			min = cur;
		}

		if(!res && (sum > 100))
		{
			if(min < cur)
				res = sum - tmp;
			else
				res = sum;
		}
	}

	if(!res)
		res = sum;

	printf("%d\n", res);

	return 0;
}
