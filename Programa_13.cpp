#include<iostream>
using namespace std;
main(){
    int op;
    for(;;){
    cout<<"ingrese la opcion: \n";
    cout<<"1.trigulo \n";
    cout<<"2.cuadrado \n";
    cout<<"3.rectangulo \n";cin>>op;
    switch(op){
        case 1:{
            cout<<"      / \\ \n";
            cout<<"     /   \\ \n";
            cout<<"    /     \\ \n";
            cout<<"   /       \\ \n"   ;
            cout<<"  /_________\\ \n\n";
            break;
        }
        case 2:{
            cout<<"* * * * * * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"* * * * * * \n\n";           
            break;
        }
        case 3:{
            cout<<"* * * * * * * * \n";
            cout<<"*             * \n";
            cout<<"*             * \n";
            cout<<"*             * \n";
            cout<<"* * * * * * * * \n\n";
            break;
        }
    }
    }
}
