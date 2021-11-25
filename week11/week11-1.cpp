#include <stdio.h>
int a[10000000];
int main()
{
	int m,ans=0;
	scanf("%d",&m);
	for(int i=2;i<m;i++)
	{
		if(a[i]==0)
		{
			printf("%d ",i);
			ans++;
			for(int k=i+i;k<m;k=k+i) a[k]=1;
		}
	}
	printf("Á`¦@: %d\n",ans);
}
