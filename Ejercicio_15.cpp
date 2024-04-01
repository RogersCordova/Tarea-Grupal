#include <iostream>
using namespace std;



	
	class Cajero {
		private :
			string nombre;
			int saldo;
			int total;
			int pin;
			
	public :
		Cajero() {
			
		}
			Cajero(string nom,int sa, int tot,int p) {
			nombre = nom;
			saldo = sa;
			total = tot;
			pin = p;
		}
		
	string getnombre (){
		return nombre;
	}	
	int getsaldo(){
		return saldo;
	}	
	int gettotal(){
		return total;
	}
	int getpin(){
		return pin;
	}
	void setnombre(string nom){
		nombre = nom;
	}
	void setsaldo(int sa){
		saldo = sa;
	}
	void settotal(int tot){
		total = tot;
	}	
	void setpin(int p){
		pin = p;
	}
	
	void bienvenida(){
		cout<<"------------Bienvenido a tu cajero UMG------------- "<<endl;
	}
	
};	
	
int main(){
	
	Cajero c1("Rogers",1000,0,2024);
	char opcion;
	int contra,monto=0,totales=0,psw=0;
	c1.bienvenida();
	
	cout<<" hola "<<c1.getnombre()<<"   *** Favor de ingresar la contrasena //es 2024 *** "<<endl;
	cin>>contra;
	if (contra == c1.getpin()){
		cout<<"Numero correcto "<<endl;
		cout<<"---------------Selecciona la opcion que deseas realizar hoy------------ "<<endl;
		cout<<"                a. Desesa realizar un retiro de efectivo "<<endl;
		cout<<"                b. Desesa ver el saldo de su cuenta "<<endl;
		cout<<"                c. Desesa cambiar su pin "<<endl;
		cin>>opcion;
		
		switch (opcion) {
        case 'a':
            cout << "Ingrese cuanto efectivo desea retirar" << endl;
            cin>>monto;
            if (monto<c1.getsaldo()){
            	totales = c1.getsaldo()-monto;
            	c1.setsaldo(totales);
            	cout<<"Su nuevo saldo es Q"<<c1.getsaldo()<<endl;
			}else{
				cout<<"El monto ingresado es mayor a tu saldo "<<endl;
			}
            break;
        case 'b':
            cout<<"Su nuevo saldo es Q"<<c1.getsaldo()<<endl;
            break; 
		case 'c':
            cout<<"Escriba su nuevo pin "<<endl;
            cin>>psw;
            c1.setpin(psw);
            cout<<"Su nuevo pin es "<<c1.getpin()<<endl;
            break;
		    
	}
		
	} else {
		cout<<"el numero ingresado es incorrecto "<<endl;
	}
	
system("pause");	
}
	
	
	
	


