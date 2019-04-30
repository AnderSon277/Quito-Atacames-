#include<iostream>
using namespace std;
int main()
{
	//ESTE ES EL CODIGO DEL PROGRAMA GENÉRICO PARA EL PROBLEMA PLANTEADO
	//APLICA SOLO CON LA CONDICIÓN DE QUE LOS VEHÍCULOS VAYAN A LA MISMA VELOCIDAD (COMO EN EL PROBLEMA ORIGINAL)
	float x;
	int d1,d2;
	
	cout<<"Ingrese en que kilometro de la carretera se encuentra el primer vehiculo     ";
	cin>>d1;
	cout<<"Ingrese en que kilometro de la carretera se encuentra el segundo vehiculo    ";
	cin>>d2;
	
	x=(d2-d1)/2;
	
	cout<<"RESPUESTA: Se encontraran en el kilometro "<<d1+x;
	
	return 0;
}
