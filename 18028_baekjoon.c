#include <stdio.h>
#include <string.h>

int arr[10000];

int main()
{

        int N, i, sample;
        int top = 0;
        char cmd[6];

        scanf("%d", &N);

        for(i=0; i<N; i++)
        {
                scanf(" %s", cmd);

                if(strcmp(cmd,"push")==0)
                {
                        scanf("%d", &sample);
                        arr[top++] = sample;
                }
                else if(strcmp(cmd,"pop")==0)
                {
                        if(top<= 0)
                                printf("-1\n");
                        else
                        {
                                printf("%d\n", arr[top-1]);
                                top--;
                        }
                }
                else if(strcmp(cmd,"size")==0)
                {
                        printf("%d\n", top);
                }
                else if(strcmp(cmd,"empty")==0)
                {
                        if(top <= 0)
                                printf("1\n");
                        else
                                printf("0\n");
                }
                else if(strcmp(cmd,"top")==0)
                {
                        if(top <= 0)
                                printf("-1\n");
                        else
                                printf("%d\n", arr[top-1]);
                }
        }

        return 0;
}

