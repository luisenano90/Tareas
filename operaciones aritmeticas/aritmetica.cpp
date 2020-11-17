#include <iostream>

int n1,n2,final = 0;

using namespace std;

string simbol = "";



int main()
{
	
	cout<<"Bienvenido al programa para realizar operaciones aritmeticas..."<<endl;
	cout<<""<<endl;
	cout<<"Ingrese el primer numero a evaluar: "<<endl;
	cin>>n1;
	cout<<"Ingrese el segundo numero a evaluar" <<endl;
	cin>>n2;
	cout<<"¿Que operacion desea realizar: asigne el simbolo +,-.*,/"<<endl;
	cin>>simbol;
	
	if (simbol=="+") 
		{
		
		final = n1 + n2;
		cout<<"La suma es: "<<final<<endl;
		
		}	
		
		
	else if (simbol =="-")
	{
		final = n1 - n2;
		cout<<"La resta es: "<<final<<endl;
	}
	
	else if (simbol == "*")
	
	{
		
		final = n1 * n2;
		cout<<"La multiplicacion es: "<<final<<endl;
	}
	
	else if (simbol == "/")
	
	{
		
		final = n2/n2;
		cout<<"La division es: "<<final<<endl;
	}
return 0;
	}	
	
