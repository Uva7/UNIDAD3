#include <iostream>

using namespace std;


int main()
{
	//Mensaje de Bienvenida
	cout << "Hola :) Este programa 2 Unidad 2" << "\n";
	
	//Se declaran los numeros que se sumaran (pueden ser decimales)
	float NOTA;
	
	//Se pider el primer numero
	cout << "Por favor ingrese la calificacion:  ";
	
	//Se asigna el primer valor a NOTA
	cin >> NOTA;
	
	if (NOTA>=3.0)
	            cout << " Aprovado"  ;
		else    
		        cout<<"Reprovado";
	
	//Se muestra el resultado.
	
	
	return 0;	        
}
