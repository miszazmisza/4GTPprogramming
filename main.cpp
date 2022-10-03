#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

const int ilewynikow = 2000;
double tab[ilewynikow][3];

bool Cwiartka(double x, double y, double r) {
  return (abs(x) > r && abs(y) > r);
}

void okregi();


int main() {
	
	setlocale(LC_ALL,"");
	ifstream plik("okregi.txt");
	double a, b, c;
	for (int i = 0; i < ilewynikow; i++) {
	    plik >> a >> b >> c;
	    tab[i][0] = a;
	    tab[i][1] = b;
	    tab[i][2] = c;
	}
	plik.close();
	  
	okregi();  
}


void okregi() {
	
  int zlicz1 = 0, zlicz2 = 0, zlicz3 = 0, zlicz4 = 0, zlicz0 = 0;
  
  for (int i = 0; i < ilewynikow; i++) {
    
	float x = tab[i][0], y = tab[i][1], r = tab[i][2];
	if (Cwiartka(x, y, r)) {
      if (x > 0 && y > 0) zlicz1++;
      if (x < 0 && y > 0) zlicz2++;
      if (x < 0 && y < 0) zlicz3++;
      if (x > 0 && y < 0) zlicz4++;
    }
    else zlicz0++;
  }
  cout << "W I æwiartce: " << zlicz1 << endl<< "w II: " << zlicz2 << endl<< "w III: " << zlicz3 << endl<< "w IV: "
   << zlicz4 << endl<< "w ¿adnej æwiartce: " << zlicz0 << endl;
}
