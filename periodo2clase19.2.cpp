#include <iostream>

using namespace std;

void divisionSucesivaDe(int dividendo, int divisor);

int main()
{
	int dividendo, divisor;
	cout << "Ingrese el dividiendo: "; cin>>dividendo;
	cout << "Ingrese el divisor: "; cin>>divisor;
	divisionSucesivaDe(dividendo, divisor);
	
	return 0;
}

void divisionSucesivaDe(int dividiendo, int divisor){
	int cociente;
	while(dividiendo >= divisor)
	{ dividendo -= divisor; cociente++; }
	cout<<"El resto es: "<<dividendo<<end1;
	cout<<"El cociente es: "<<cociente<<end1;
}
