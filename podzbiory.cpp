#include<iostream>
#include<string>

using namespace std;

main()
{

int test, n, k, i;

cin >> test;
for(i=0; i<test; i++)
{
         cin >> n;
         cin >> k;
         
         cout << n << " " << k << endl;
}


system("pause");
return 0;      
}

/*

#include <stdio.h>                                                                                             
int main()                                                                                                     
{                                                                                                              
        int t,n,k,i,j;                                                                                         
        scanf("%d",&t);                                                                                        
        while(t--)                                                                                             
        {                                                                                                      
                scanf("%d %d",&n,&k);                                                                          
                if(k==n)                                                                                       
                {                                                                                              
                        for(i=1;i<=n;i++)                                                                      
                                printf("%d ",i);                                                               
                        printf("\n");                                                                          
                }                                                                                              
                else                                                                                           
                {                                                                                              
                        for(i=1;i<n;i++)                                                                       
                                for(j=i+1;j<=n;j++)                                                            
                                        printf("%d %d\n",i,j);                                                 
                }                                                                                              
                printf("\n");                                                                                  
        }                                                                                                      
        return 0;                                                                                              
}

*/
