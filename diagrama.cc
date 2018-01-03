/*
Autor:	Faustino Moiśes Amador García
Fecha: 	8 de Noviembre de 2017
Exámen
*/

#include <iostream>
using namespace std;

int main (){
	
	int x=1;
	while(x<=5){
		if(x%3==0)
			x=x+2;
			if (x%3!=0) 
			cout<<"El valor de x es "<<x<<endl;
			x=x+2;
		if(x>5)
		break;	
	}
		
	return 0;
}


/*
El programa en automatico recibe el valor de x, luego lo procesa de la siguente forma:
si es menor que 5 entonces pregunta si la división de x entre 3 es exacta si lo es entonces solo le suma dos, de lo contrario imprime el valor y despues le suma dos, de forma que al hacer el ciclo el valor de x es mayor que 5 haciendo que el programa salga.
imprimiendo los siguientes valores
el valor de x es 1
el valor de x es 5
*/

//La explicación dada es parcialmente correcta. De hecho el programa imprime x dentro del ciclo, no se espera a salir para imprimir.
