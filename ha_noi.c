#include <stdio.h>

int main()
{
    int t, n, i, j, k, stala, tymcz, cel;
    long long int krok, m;
    char wieze[3][61];
    char licz[3];
    scanf("%d", &t);
    
    for(k=0; k<t; k++)
    {
             scanf("%d%lld", &n, &krok);
             for(i=0; i<3; i++)
             {
                      licz[i]=0;
                      for(j=0; j<n; j++)
                      wieze[i][j]=0;
             }
             tymcz=n;
             stala=0;
             cel=1;
             m=(1<<(n/2));
             m*=(1<<(n/2));
             if(n%2)
             m*=2;
             while(n)
             {
                     if(krok>=m/2)
                     {
                                  wieze[cel][n-1]=1;
                                  licz[cel]++;
                                  krok-=m/2;
                                  stala=3-stala-cel;
                     }
                     else
                     {
                         wieze[stala][n-1]=1;
                         licz[stala]++;
                         cel=3-stala-cel;
                     }
                     n--;
                     m/=2;
             }
             n=tymcz;
             for(i=0; i<3; i++)
             {
                      printf("%d: ", i+1);
                      for(j=n-1;  licz[i]; j--)
                      if(wieze[i][j])
                      {
                                     printf("%d", j+1);
                                     licz[i]--;
                                     if(licz[i])
                                     printf("|");
                      }
                      printf("\n");
             }
    }
system("pause");
return 0;
}
