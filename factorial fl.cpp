#include<iostream>
#include<conio.h>
#include<wchar.h>
#include<locale.h>
int factorial(int n);
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int n;
	cout<<"Ingrese un número para conocer su factorial: ";
	cin>> n;
	cout<<"El factorial de  "<<n<<" es : "
	<< factorial(n)<<endl;
	return 0;
}
int factorial(int n){
	if(n==0)
		return  1;
	else
		return  n*factorial(n-1);
}

