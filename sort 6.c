#include<stdio.h>
#include<stdlib.h>

int main()
{
int t,i,j,k;
int *znaki;
int *suma;
scanf("%d",&t);
znaki=(int*)malloc(t*sizeof(int));
suma=(int*)malloc(t*sizeof(int));
for(i=0; i<t; i++)
{
         suma[i]=0;
         znaki[i]=0;
         scanf("%d", &znaki[i]);
}

for(i=0; i<t; i++)
{
         while(znaki[i])
         {
         suma[i]+=znaki[i]%10;
         znaki[i]/=10;
         }
}

for(k=t;k>=0;k--){
for(j=0;j<k;j++){ 
if(suma[j]<suma[j+1]){ 
int liczba=0; 
liczba=suma[j+1]; 
suma[j+1]=suma[j]; 
suma[j]=liczba; 
}
}
printf("%d\n",suma[j]);
}


system("pause");
return 0;
}
