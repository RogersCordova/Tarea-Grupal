#include <iostream>
using namespace std;

main ()
{
	char opcion;
	double temp,resultado;
	
	cout<<"-------------INGRESE LA OPCION DE CONVERSION QUE DESEA REALIZAR---------- "<<endl;
	cout<<"a. Convertir de Kilometros a millas "<<endl;
	cout<<"b. Convertir de millas a kilometros "<<endl;
	cout<<"c. Convertir de metros a pulgadas "<<endl;
	cout<<"d. Convertir de pulgadas a metros "<<endl;
	cout<<"e. Convertir de libras a kilos "<<endl;
	cout<<"f. Convertir de kilos a libras "<<endl;
	cin>>opcion;
	
	 switch (opcion) {
        case 'a':
            cout << "Ingrese cuantas kilometros desea convertir a millas" << endl;
            cin>>temp;
            resultado= temp*0.621371;
            cout<<temp<<" kilometros a millas es "<<resultado<<endl;
            break;
		
		  case 'b':
            cout << "Ingrese cuantas millas desea convertir a kilometros" << endl;
            cin>>temp;
            resultado= temp/0.621371;
            cout<<temp<<" millas a kilometros es "<<resultado<<endl;
            break;
            
            case 'c':
            cout << "Ingrese cuantas metros desea convertir a pulgadas" << endl;
            cin>>temp;
            resultado= temp*39.37;
            cout<<temp<<" metros a pulgadas es "<<resultado<<" pulgas"<<endl;
            break;
            case 'd':
            cout << "Ingrese cuantas pulgadas desea convertir a metros" << endl;
            cin>>temp;
            resultado= temp/39.37;
            cout<<temp<<" pulgadas a metros es "<<resultado<<" metros"<<endl;
            break;
            case 'e':
            cout << "Ingrese cuantas libras desea convertir a kilos" << endl;
            cin>>temp;
            resultado= temp*0.453592;
            cout<<temp<<" libras a kilos es "<<resultado<<" kilos"<<endl;
            break;
             case 'f':
            cout << "Ingrese cuantas kilos desea convertir a libras" << endl;
            cin>>temp;
            resultado= temp/0.453592;
            cout<<temp<<" kilos a libras es "<<resultado<<" libras"<<endl;
            break;
		}
	
	system("pause");
}

