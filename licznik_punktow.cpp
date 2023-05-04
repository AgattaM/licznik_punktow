#include <iostream>
using namespace std;
int main(){
 int i=0,z=0,s=0,p; //z-jak zyczenie, s-suma, p-pomocnicza, i-do zliczania
 int opcja;
 cout<<"-----------------------------------------------------\n";
 cout<<"Witamy w programie zliczającym punktu (sumujacym). \nDane mozesz oddzielac za pomoca enterow jak i spacji.\nMilego korzystania!\n";
 cout<<"\nProgram autorstwa Agaty Majewskiej.\nWersja: 1.0\nData wydania: 04.05.2023\n";
 cout<<"-----------------------------------------------------\n\n";
 cout<<"Wybierz tryb działania programu:";
 cout<<"\n1 Petla\n";
 cout<<"2 Skonczona liczba krokow.\n";
 cout<<"Aby wrocic do menu wpisz -100.\n";
 cin>>opcja;
 while(opcja!=1&&opcja!=2){
    cout<<"Opcja wybrana nie poprawnie, sproboj ponownie\n";
    cout<<"Wybierz tryb działania programu:";
    cout<<"\n1 Petla\n";
    cout<<"2 Skonczona liczba krokow.\n";
    cout<<"Aby wrocic do menu wpisz -100.\n";
    cin>>opcja;
 }
 if(opcja==2){
    cout<<"Podaj liczbe krokow po ktorych program wyswietli wynik: \n";
    cin>>z;
 }
 else if(opcja==1){
    cout<<"Wybrales opcje petli.\nAby wyswietlic wynik wpisz -1.\nAby wyzerowac wpisz -2.\nUwaga! wyswietlenie wyniku nie zeruje punktow.\n";
 }
 cout<<"Czekam na liczby. Aby potwierdzic wybor kliknij enter.\n";
 while(true){
    cin>>p;
    s+=p;
    if(p==-100){
        cout<<"Wybierz tryb działania programu:";
        cout<<"\n1 Petla\n";
        cout<<"2 Skonczona liczba krokow.\n";
        cin>>opcja;
        while(opcja!=1&&opcja!=2){
            cout<<"Opcja wybrana nie poprawnie, sproboj ponownie\n";
            cout<<"Wybierz tryb działania programu:";
            cout<<"\n1 Petla\n";
            cout<<"2 Skonczona liczba krokow.\n";
            cout<<"Aby wrocic do menu wpisz -100.\n";
            cin>>opcja;
        }
        cout<<"Zeruje dane\n";
        s=0;
        i=0;
    }
    else if(opcja==1){
        if(p==-1){
            s+=1;
            cout<<"Suma: "<<s<<"\n";
        }
        else if(p==-2){
            s=0;
            cout<<"Wyzerowano licznik.\n";
        }
    }
    else if(opcja==2){
        i++;
        if(i>=z){
            i=0;
            cout<<"Suma: ";
            cout<<s<<"\nWyzerowano licznik.\n";
            s=0;
        }
    }

 }
return 0;
}
