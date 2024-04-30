#include <iostream>
using namespace std;

int main()
{
	//Mensaje de Bienvenida
	cout << "Hola :) Este programa 2 Unidad 2" << "\n";
	
	//Se declaran los numeros que se sumaran (pueden ser decimales)
	float SUELDO, aum, nsue;
	
	//Se pide el pimer numero 
	cout << "Por favor ingrese el sueldo:  ";
	
	//Se asigna el primer valor a SUELDO
	cin >> SUELDO;	
	
if (SUELDO < 400000.00)
      {
       aum = SUELDO * 0.15;
       nsue = SUELDO + aum;
       
}
	cout << "El nuevo sueldo es:  "<<nsue ;
	//Se muestra el resultado
	
	return 0;
}
