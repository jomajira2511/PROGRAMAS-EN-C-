#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int n1,n2,suma,resta,multiplicacion,division;
	cout<<"ingrese el primer numero"<<endl;cin>>n1;
	cout<<"ingrese el segundo numero"<<endl;cin>>n2;
	suma=n1+n2;
	cout<<"la suma es igual a "<<suma<<endl;
	resta=n1-n2; 
	cout<<"la resta es igual a "<<resta<<endl;
	multiplicacion=n1*n2;
	cout<<"la multiplicacion es igual a "<<multiplicacion<<endl;
	division=n1/n2;
	cout<<"la division es igual a "<<division<<endl;
	
	return 0;
}
