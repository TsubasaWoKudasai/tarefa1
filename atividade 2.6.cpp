#include <iostream> 
	int main ( ) {
	int n1 = 0 ;
	int n2 = 0;
	std::cout << "Digite um numero inteiro, sendo ele positivo ou nao \n ";
	std:: cin >> n1 ;
	{
	if ( n1 < 0 ) 
	n2 = n1 * -1 ;
	else 
	n2 = n1 * 1 ;
	}
	std::cout << " esta e o numero final, que obrigatoriamente sera positivo \n " ;
	std::cout << n2 ;
	return 0 ;
	}
