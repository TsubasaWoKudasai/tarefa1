#include <iostream> 
	int main ( ) {
	float F=0;
	float C=0;
	float K=0;
		std::cout << "digite uma temperatura em farenheit para a conversao \n" ;
		std::cin >> F ; 
		C = ( (F - 32) * 5 ) / 9 ;
		K = C + 273.15 ;
		std::cout << "essa e a temperatura dita, porem em kelvin : \n" ;
		std::cout << K ;
		return 0 ;
	}
