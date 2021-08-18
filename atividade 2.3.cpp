#include <iostream> 
	int main ( ) {
	int F=0;
	int C=0;
		std::cout << "digite uma temperatura em farenheit para a conversao \n" ;
		std::cin >> F ; 
		std::cout << "essa e a temperatura dita, porem em celsius : \n" ;
		C = ( (F - 32) * 5 ) / 9 ;
		std::cout << C ;
		return 0 ;
	}
