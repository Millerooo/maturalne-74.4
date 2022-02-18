#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class file{
	ifstream plik;
	string a;

public:
	
	void otworz();
	void Czy_spelnia();
	void Rodzaj_znaku();


};
void file::otworz(){
	plik.open("hasla.txt");
	if(plik.good() == true)
    {
        while(!plik.eof())
        {
            getline(plik, a);
            cout << a << endl;
            
        }
        plik.close();
        
        ofstream wynik("wyniki_hasla.txt");
          wynik<<a;
          cout<<a;
     
}
void file::Czy_spelnia()
{
bool cyfra=false, mala_litera=false, duza_litera=false;
for (int i=0; i<n; i++)
{
 char c = S[i];
 if ( '0' <= c && c <= '9' ) cyfra = true;
 else if ( 'a' <= c && c <= 'z' ) mala_litera = true;
 else if ( 'A' <= c && c <= 'Z' ) duza_litera = true;
}
} 

void file::Rodzaj_znaku(){
	if(cyfra && mala_litera && duza_litera)
		cout<<'w hasle wystapil kazdy rodzaj znaku !'
}

}
int main() {
	file plik;
	plik.otworz();
	plik.Czy_spelnia();
	plik.Rodzaj_znaku();
	
	return 0;
}
