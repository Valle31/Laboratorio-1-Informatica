#include <iostream>
using namespace std;

int main(){
	double nota1, nota2, nota3, promedio;
	cout << "Ingrese la primer nota: " << end1;
	cin >> nota1;
	cout << "Ingrese la segunda nota: " << end1;
	cin >> nota2;
	cout << "Ingrese la tercer nota: " << end1;
	cin >> nota3;
	promedio = (nota1 + nota2 + nota3)/3;
	if (promedio >= 7 and promedio >= 10){
		cout << "Aprobado";
	} else if (promedio >= 4 && promedio < 7){
		cout << "Regular";
	} else if (promedio > 0 && promedio < 4){
		cout << "Reprobado";
	} else {
		cout << "Nota no valida";
	}
}
