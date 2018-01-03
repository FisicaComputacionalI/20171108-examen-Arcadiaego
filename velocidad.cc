/*
Autor:	Faustino Moiśes Amador García
Fecha: 	8 de Noviembre de 2017
Exámen
*/

#include <iostream>
using namespace std;

int main (){
	float V, D, T;

	//Tu programa no entra al while porque no le diste un valor inicial a la T. Sí lo que querías era validar que T fuera diferente de 0, solo necesitabas el if.  
	//while (T!=0){
	//if (T!=0){

	// No tiene sentido imprimir el valor de D, porque es lo que estás pidiendo y de hecho no le has asignado ningún valor previo. El usuario, no sabe que es "D", tienes que indicarle que es la distancia. 
	//cout<<"Introduce valor de D"<<D<<endl;
        cout<<"Introduce valor de la distancia "<<endl;
	cin>>D;
	// lo mismo pasa con tu variable T
	//cout<<"Introduce valor de T"<<T<<endl;
	cout<<"Introduce valor del tiempo "<<endl;
	cin>>T;
	if (T!=0){ 
	  //te flataba imprimir el resultado, y de hecho tu variable V no es necesaria, porque no vuelves a usar V para nada. 
	  cout << D/T << endl;	
	}	
	else cout << "No existen las divisiones entre cero" <<endl;
 	  //¿Este if lo usabas para terminar el ciclo?
	  //if (T=0)
	  //estas líneas las comentamos porque no usamos el while
	  //	break;
	  //}
}
	
