#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int tab[10],i=0,n;
    char c;
    
    while (cin >> c  )
    {
          if (c=='+') 
          { 
                     cin >> n; 
                     if (i<10)
                     {
                              cout << ":)" << endl;
                              tab[i]=n;
                              i++;
                     } else 
                     cout << ":(";
          }
          if (c=='-')
          {
                     if (i>0) { i--; cout << tab[i]<< endl;  }  else
                     if (i<=0) cout << ":("<< endl;;
          }
    }
    return 0;
}
