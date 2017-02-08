#include<iostream>
#include<string>

using namespace std;

// stos 10-elementowy

int stos[10];
int szczyt=0, n;
char input;

void push()
{

     if(szczyt < 10){
     cout << ":)" << endl;   /* wrzuæ na stos */
     stos[szczyt] = n;
     szczyt++;
     }
     else{
     cout << ":(";   /* stos jest ju¿ pe³ny */
     }

}

void pop()
{
     
     if(szczyt != 0){
     szczyt--;
     cout << stos[szczyt]<< endl;//return stos[szczyt];
     }
     else{
     cout << ":(";   /* stos jest ju¿ pusty */
     }

}

int main()
{



while(cin >> input)
{
          if(input=='+')
          {
          cin >> n;
          push();
          }
                        
          if(input=='-')
          {
          pop();
          }

}
system("pause");
return 0;
}
