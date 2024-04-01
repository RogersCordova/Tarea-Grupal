#include<iostream>

using namespace std;

int main(){
	float a,b, resultado = 0;
	
	cout<<"digite el valor de a: "; cin>>a;
	cout<<"digite el valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2);
	cout<<"\nel resultado es: "<<resultado<<endl;
	
	return 0;
}
