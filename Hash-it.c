#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

typedef struct mieszane_na_wejscu{
int znacznik;
int mieszane;
char tab[20];
}mieszane_na_wejscu;

int mechanizm_mieszajacy(char *wskaaznik){
long dodawanie=0;
long indeksi=1;
while(*wskaaznik!='\0'){
dodawanie+=(*wskaaznik)*indeksi;
++indeksi;
++wskaaznik;
}
return(19*dodawanie)%101;
}

typedef struct struktura_mieszajaca{
int wieeelkosc;
mieszane_na_wejscu granica[101];
}struktura_mieszajaca;

int szukanie_wolnego_miejsca(struktura_mieszajaca *wskaznik, char *lancuuuch){
int mieeeszaj=mechanizm_mieszajacy(lancuuuch);
int indeksk;
for(indeksk=0;indeksk<20;++indeksk){
int obliczaaj=(mieeeszaj+23*indeksk+indeksk*indeksk)%101;
if(wskaznik->granica[obliczaaj].znacznik==0) return 0;
if(wskaznik->granica[obliczaaj].znacznik==1) continue;
if(wskaznik->granica[obliczaaj].mieszane==mieeeszaj && (strcmp(wskaznik->granica[obliczaaj].tab,lancuuuch)==0)){
return 1;
}
}
return 0;
}

void wstawianie_struktury_mieszajacej(struktura_mieszajaca *wskaznik, char *lancuuchh){
int mieeszaaaj=mechanizm_mieszajacy(lancuuchh);
int indeksj;

if(szukanie_wolnego_miejsca(wskaznik,lancuuchh)==1)return;
for(indeksj =0; indeksj<20; ++indeksj) {
int obliczaaj=(mieeszaaaj+23*indeksj+indeksj*indeksj)%101;
if(wskaznik->granica[obliczaaj].znacznik==0||wskaznik->granica[obliczaaj].znacznik==1){
(wskaznik->wieeelkosc)++;
wskaznik->granica[obliczaaj].znacznik=2;
wskaznik->granica[obliczaaj].mieszane=mieeszaaaj;
strcpy(wskaznik->granica[obliczaaj].tab,lancuuchh);
break;
}
}
return;
} 

void usuwanie_struktury_mieszajacej(struktura_mieszajaca *wskaznik, char *llancuch){
int mieeeeeszaj=mechanizm_mieszajacy(llancuch);
int indeksj;
for(indeksj=0;indeksj<20;++indeksj){
int obliczaaj=(mieeeeeszaj+23*indeksj+indeksj*indeksj)%101;
if(wskaznik->granica[obliczaaj].znacznik==0)return;
if(wskaznik->granica[obliczaaj].znacznik==1)continue;
if(wskaznik->granica[obliczaaj].mieszane==mieeeeeszaj&&(strcmp(wskaznik->granica[obliczaaj].tab,llancuch)==0)){
wskaznik->granica[obliczaaj].znacznik=1;
(wskaznik->wieeelkosc)--;
}
}
}

int testy,indeksl;
scanf("%d",&testy);
for(indeksl=0;indeksl<testy;indeksl++){
struktura_mieszajaca mieszana_tablica;
int indeksi;
for(indeksi=0;indeksi<101;++indeksi){
mieszana_tablica.granica[indeksi].znacznik=0;
}
mieszana_tablica.wieeelkosc=0;
int wartosc;
scanf("%d",&wartosc);
char lancuch[15];
for(indeksi=0;indeksi<wartosc;++indeksi){
scanf("%s",lancuch);
if(lancuch[0]=='A'){
wstawianie_struktury_mieszajacej(&mieszana_tablica,lancuch+4);
}else{
usuwanie_struktury_mieszajacej(&mieszana_tablica,lancuch+4);
}
}
printf("%d\n", mieszana_tablica.wieeelkosc);
for(indeksi=0;indeksi<101;++indeksi){
if(mieszana_tablica.granica[indeksi].znacznik==2){
printf("%d:%s\n", indeksi, mieszana_tablica.granica[indeksi].tab);
}
}
}
system("pause");
return 0;
}
