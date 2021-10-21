#include <stdio.h>
int main()
{
    int a=999,b=100,temp;
    printf("%d %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);

}
