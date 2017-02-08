#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

struct punkt
{
string nazwa;
int x, y;
int odleglosc;
};

void quicksort(punkt tablica[], int lewy_skrajny, int prawy_skrajny){
     int i=lewy_skrajny;
     int j=prawy_skrajny;
     int k=tablica[(lewy_skrajny+prawy_skrajny)>>1].odleglosc;
     do{
         while(tablica[i].odleglosc<k) i++;
         while(tablica[j].odleglosc>k) j--;
         if(i<=j){
         swap(tablica[i],tablica[j]);                  
         i++;
         j--;
         }
     }while(i<=j);
     if(lewy_skrajny<j) quicksort(tablica,lewy_skrajny,j);
     if(prawy_skrajny>i) quicksort(tablica,i,prawy_skrajny);     
}

main()
{

int test, linijka;
punkt tablica[1000];
cin >> test;
for(int t=0; t<test; t++)
{
cin >> linijka;
for(int l=0; l<linijka; l++)
{
 cin>>tablica[l].nazwa;
 cin>>tablica[l].x>>tablica[l].y;
 tablica[l].odleglosc=tablica[l].x*tablica[l].x+tablica[l].y*tablica[l].y;
}

quicksort(tablica,0,linijka-1);

for(int l=0;l<linijka;l++)
cout<<tablica[l].nazwa<<" "<<tablica[l].x<<" "<<tablica[l].y<<endl;        
}
system("pause");
return 0;
}

