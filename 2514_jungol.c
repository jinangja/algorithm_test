#include <stdio.h>
//#include <string.h>

#define MAXCNT 10000

int main()
{
	char arr[MAXCNT]={0,};
	int i=0, koiflag=0, ioiflag=0;

	scanf("%s", arr);

	while(arr[i]!=0)
	{
		if(arr[i]=='K' && arr[i+1]=='O' && arr[i+2]=='I' )
			koiflag++;

		if(arr[i]=='I' && arr[i+1]=='O' && arr[i+2]=='I' )
			ioiflag++;
		i++;
	}

	printf("%d\n%d\n", koiflag, ioiflag);
}
