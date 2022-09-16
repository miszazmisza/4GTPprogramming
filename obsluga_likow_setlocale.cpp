#include <iostream>
#include <fstream>
#include <cstdlib>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int litry, jakosc;
float cena;

char napis[50];

int main(int argc, char** argv) {
	
	fstream dane,zapis;
	dane.open("ceny.txt",ios::in);
	zapis.open("zapis.txt",ios::out);
	
	
	while(!dane.eof()){
		dane>>litry>>cena>>jakosc;
		
		
		system("Color 8B");
		setlocale(LC_ALL, "utf8");
		setlocale(LC_ALL,"");
		
		
		snprintf(napis, 50,"Ile: %04d , cena: %.2lf, jakoœæ: %x \n",litry,cena,jakosc);
		//cout<<litry<<"\n"<<cena<<"\n"<<napis;
		zapis<<napis;
	}
	
	
	dane.close();
	zapis.close();
	return 0;
}
