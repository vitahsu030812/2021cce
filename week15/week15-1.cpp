#include <stdio.h>
int main()
{
    int n,m,ans=1;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0&&m%i==0) ans=i;
    }
    printf("%d",ans);
}
