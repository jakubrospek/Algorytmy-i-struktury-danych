#include <iostream>
#include <algorithm>
using namespace std;

struct punkt
{
       string nazwa;
       int x,y;
       double odleglosc;
};

bool funkcja (punkt a, punkt b)
{
     return a.odleglosc<b.odleglosc;
}

main()
{
      //ios_base::sync_with_stdio(0);
      punkt tab[1000];
      int t,n;
      cin>>t;
      while(t--)
      {
         cin>>n;
         for(int i=0;i<n;i++)
         {
           cin>>tab[i].nazwa;
           cin>>tab[i].x>>tab[i].y;
           tab[i].odleglosc=tab[i].x*tab[i].x+tab[i].y*tab[i].y;
         }
         sort(tab,tab+n,funkcja);
         for(int i=0;i<n;i++)
           cout<<tab[i].nazwa<<" "<<tab[i].x<<" "<<tab[i].y<<endl;
      }
system("pause");
return 0;
}
