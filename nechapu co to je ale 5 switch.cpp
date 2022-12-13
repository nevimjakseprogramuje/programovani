#include <iostream>
#include <string>
#include <unistd.h>
#include <Windows.h>


using namespace std;

int moznost;
int vypnout;
int x;
int y;

int a;   //prohození čísel
int b;   //prohození čísel
int arrA[3],temp;

int cislonadeleni;
float delit=2;
float delitel=5;

int mocnina,cislokteresemocni;

int main (){
    while(vypnout<1)  {
        system("cls");

cout<<"******************Vytejte v nevim ******************\n";
cout<<"\n";
cout<<"Zadej cislo funkce kterou chces provist:  \n";
cout<<"1:   Serazrni cisel od nejveciho po nejmensi\n";
cout<<"2:   Prohozeni hodnoty a,b \n";
cout<<"3:   Mocniny \n";
cout<<"4:   Prohozeni 3 promenich\n";
cout<<"5:   Delitelnost bezezbytku \n";
cout<<"****************************************************\n";
cin>>moznost;
switch(moznost){


case 1:
cout<<"Zadej tri cisla\n";
for (int x=0;x<3;x++){
       cin >>arrA[x];
}

for (int y=0;y<3;y++){


for (int x=0;x<3;x++){
    if(arrA[x]<arrA[x+1]){
        temp=arrA[x];
        arrA[x]=arrA[x+1];
        arrA[x+1]=temp;

    }
    }
}
 cout <<"Serazrni cisel od nejmensiho po nejvetsi:  \n";
 for (int x=0;x<=2;x++){
  cout <<arrA[x]  <<"  ";

 }

Sleep(4500);
break;




case 2:{
cout<<"Prohozeni hodnot\n";
cout<<"zadej hodnotu a\n";
cin >>a;
cout<<"zadej hodnotu b\n";
cin >>b;
swap(a,b);

  cout<<"hodnota a:  "<<a<<endl;
  cout<<"hodnota b:  "<<b<<endl;

    Sleep(2500);
}break;



case 3:{

  cout <<"Zadej cislo ktere chces mocnit\n";
  cin>>cislokteresemocni;
  cout <<"A na kolikatou\n";
  cin >>mocnina;

  int vysledek = cislokteresemocni;
  for(int i=0; i<(mocnina-1);i++)
    vysledek=vysledek * cislokteresemocni;

  cout<<"Vysledek:  "<<vysledek<<endl;



Sleep(2500);

}break;


case 4 :{
   int h;
   int j;
cout<<"zadej hodnotu pro h\n";
cin>>h;
cout<<"zadej hodnotu pro j\n";
cin>>j;

int z=h;
h=j;
j=z;

cout <<h<< " a "<<j<<" a "<<z+1<<"  "   ;





Sleep(2500);
}break;




case 5:{
int p;
int l;
int nwm;

cout<<"Zadej cislo, ktere chces delit\n";
cin>>nwm;
if(nwm%2==0   &&  nwm%5==0 )
{
    cout <<"cislo je delitelne 2 i 5";


}
else{
    cout<<"cislo neni delitelne 2 i 5";
}












//cout<<"Zadej hodnotu pro delenec\n";
//cin>>p;
//cout <<"Zadej hodnotu pro delitel\n";
//cin>>l;

//cout << p << "  je" << (x%l != 0? " neni " :"  " )<< "delitelne"   <<l<<"."<<endl;





Sleep(2500);
}
break;













}
}





return 0;

}

