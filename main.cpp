#include <iostream>

using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2, suma, resta, multiplicacion;
	double division;
	
	cout<<" \n";
	cout<<"Programa de Operaciones Basicas";
	cout<<" \n";
	cout<<" \n";
	cout<<"Ingrese el primer numero: ";
	cin>>n1;
	cout<<" \n";
	cout<<"Ingrese el segundo numero: ";
	cin>>n2;	
	
	suma= n1+n2;
	resta= n1-n2;
	multiplicacion= n1*n2;
	
	cout<<" \n";
	cout<<"La suma de "<<n1<<" + "<<n2<<" es: "<<suma<<endl;
	cout<<" \n";
	cout<<"La resta de "<<n1<<" - "<<n2<<" es: "<<resta<<endl;
	cout<<" \n";
	cout<<"La multiplicacion de "<<n1<<" x "<<n2<<" es: "<<multiplicacion<<endl;
	cout<<" \n";
	
	if (n2 != 0){
		division= n1/n2;
		cout<<"La division de "<<n1<<" / "<<n2<<" es: "<<division<<endl;
	} else 
		cout<<"El divisor no puede ser 0 (cero)";
		
	return 0;
}
