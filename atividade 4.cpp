#include <iostream>
int main () {
	int n1;
	std::cout << "Digite um numero.\n";
	std::cin >> n1 ;
	if ( n1 > 0 )
	std::cout << " Numero Positivo ";
	if ( n1 < 0 )
	std::cout << " Numero negativo";
	if ( n1 == 0 )
	std::cout << " Numero nulo";
	
	return 0;
}
