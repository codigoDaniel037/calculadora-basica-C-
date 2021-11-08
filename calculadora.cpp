#include <iostream>

using namespace std;

/* calculadora basica (suma, resta, multiplicación, divición) 
con uso de un menu de opciones
*/

int main()
{
	char continuar = 's';
	float numero1, numero2, resultado;
	int opcion;
	
	while(continuar == 's' || continuar == 'S')
	{
		cout<<"Ingrese el primer numero: ";
		cin>>numero1;
		
		cout<<"ingrese el segundo numero: ";
		cin>>numero2;
		
		cout<<"OPERACIONES DISPONIBLES: \n";
		cout<<"1- suma"<<endl;
		cout<<"2- resta \n";
		cout<<"3- multiplicacion"<<endl;
		cout<<"4- divicion"<<endl<<endl;
		
		cout<<"Que operacion quieres hacer?? ";
		cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				resultado = numero1 + numero2;
				cout<<"El resultado es: "<<resultado<<endl;
				break;
			case 2: 
				resultado = numero1 - numero2;
				cout<<"El resultado es: "<<resultado<<endl;
				break;
			case 3:
				resultado = numero1 * numero2;
				cout<<"El resultado es: "<<resultado<<endl;
				break; 
			case 4:
				resultado = numero1 / numero2;
				cout<<"El resultado es: "<<resultado<<endl;
				break;
			default:
				cout<<"OPCION NO ES VALIDA "<<endl<<endl;
				break;
		}
		
		cout<<"Quieres realizar otra operacion??  S/N ";
		cin>>continuar;
		system("cls");//limpiar pantalla
	}
}



















