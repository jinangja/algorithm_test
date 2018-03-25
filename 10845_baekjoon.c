#include <stdio.h>
#include <string.h>

int arr[10000];

int main()
{

        int N, i, sample;
        int front = 0, back = 0;
        char cmd[6];

        scanf("%d", &N);

        for(i=0; i<N; i++)
        {
                scanf(" %s", cmd);

                if(strcmp(cmd,"push")==0)
                {
                        scanf("%d", &sample);
                        arr[back++] = sample;
                }
                else if(strcmp(cmd,"pop")==0)
                {
                        if(back-front <= 0)
                                printf("-1\n");
                        else
                        {
                                printf("%d\n", arr[front]);
                                front++;
                        }
                }
                else if(strcmp(cmd,"size")==0)
                {
                        printf("%d\n", back-front);
                }
                else if(strcmp(cmd,"empty")==0)
                {
                        if(back-front <= 0)
                                printf("1\n");
                        else
                                printf("0\n");
                }
                else if(strcmp(cmd,"front")==0)
                {
                        if(back-front <= 0)
                                printf("-1\n");
                        else
                                printf("%d\n", arr[front]);
                }
                else if(strcmp(cmd,"back")==0)
                {
                        if(back-front <= 0)
                                printf("-1\n");
                        else
                                printf("%d\n", arr[back-1]);
		}
        }

        return 0;
}

