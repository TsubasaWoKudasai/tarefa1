#include <iostream> 
	int main ( ) {
	float K=0;
	int C=0;
		std::cout << "digite uma temperatura em celsius para a conversao \n" ;
		std::cin >> C ; 
		std::cout << "essa e a temperatura dita, porem em kelvin : \n" ;
		K = C + 273.15 ;
		std::cout << K ;
		return 0 ;
	}
