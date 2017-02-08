#include<stdio.h>
long long int potega(long long int n)
{
    long long int j,p=1;
    for(j=0; j<n; j++)
    {
    p*=3;
    }
    return p;
}
int main()
{
    long long int t,i,n,w;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
             scanf("%lld", &n);
             w=potega(n)-1;
             printf("%lld\n", w);
    }
    system("pause");
    return 0;
}
