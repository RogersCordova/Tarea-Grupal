#include <iostream>
using namespace std;

main() {
	int inicio = 1,fin = 10, res = 0 ;


for (int rango = inicio;rango<=fin;rango++)
{
	for (int i=0;i<10;i++)
{
	res = rango * i;
	cout<<rango<<" x "<< i <<" = "<<res<<endl;
	
}
	
	
	
}
	
system("pause");
	
}

