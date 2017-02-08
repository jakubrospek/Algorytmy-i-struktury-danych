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
