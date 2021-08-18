#include <iostream>
 int main () {
 	int n1;
 	int n2;
 	std::cout << "Digite dois numeros.\n";
 	std::cin >> n1;
 	std::cin >> n2;
	if ( n1 + n2 > 20 ) {
		std::cout << n1 + n2 + 8;
	} else { 
	 std:: cout << n1 + n2 - 5;
	}
	return 0;
	
 }
