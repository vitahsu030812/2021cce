#include <stdio.h>
int main()
{
    int n;
    printf("�п�J�j�p:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int x=1;x<=i;x++)
        {
            printf(" ");
        }
        for(int k=1;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

