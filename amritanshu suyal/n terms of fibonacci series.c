#include <stdio.h>

int main()
{
    int a=0,b=1,n;
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        printf("%d ",a);
    int sum = a+b;
    a=b;
    b=sum;
    }

    return 0;

}
