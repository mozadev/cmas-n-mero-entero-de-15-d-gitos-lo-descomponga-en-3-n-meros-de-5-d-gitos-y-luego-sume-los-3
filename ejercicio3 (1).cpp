//ejercicio 1 de la hoja 2 semana 2
/*

Realice un aplicación en C++ y entorno consola que teniendo como dato de entrada un
número entero de 15 dígitos lo descomponga en 3 números de 5 dígitos y luego sume los 3
números
Ejemplo:
Ingrese el número: 123456789123456
Números: 12345+67891+23456 =103692
*/



#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()

{
	long long num;
	int num1, num2, num3;
	cout << "ingrese numero:"; cin >> num;
	
	num1 = num / 100000;
	num2 = num % 100000/ 100000;
	num3 = num % 100000 % 100000;
		cout << "num1 es:" << num1 << endl;
		cout << "num2 es:" << num2 << endl;
		cout << "num3 es:" << num3 << endl;
		cout << "la suma es" << num1 + num2 + num3; 
	
	_getch();

}
