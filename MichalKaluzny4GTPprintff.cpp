#include <cstdio>
#include <windows.h>
#include <iostream>
using namespace std;

int a;
float b;
long c;
int main()
{
	do{
	system("cls");
	Sleep(500);
	printf("Podaj nr zadania:\n 1 Zaokraglij \n 2 System szesnastkowy \n 3 Zera \n 4 Koniec\n");
	scanf("%d",&a);
	
	printf("Jakiej liczby uzyc?\n");
	  if(a==3||a==2){
	  	scanf("%ld",&c);
	  }else{
	  	scanf("%f",&b);
	  }
	switch(a){
		case 1:
			printf( "Zaokraglij: %.2f \n", b );
			system( "pause" );
    	break;
		case 2:
			printf( "System szesnastkowy: %X \n", c );
			system( "pause" );
		break;
		case 3:
			printf( "Zera: %06d \n", c );
			system( "pause" );		
		break;		
		case 4:
			system( "pause" );
		break;	
	}
    }while(a!=4);
}
