#include<stdio.h>

int main()
{
int i,j,n,o;

    printf("donner n:\n");  scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        o=n-i;
        for(j=0;j<i;j++)
        {
            while(o>0)
            {
                printf(" ");
                o--;
            }
            printf("* ");
        }
        printf("\n");
    }

printf("\n");
system("pause");
return 0;
}
