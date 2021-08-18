#include <iostream>
int main () {
	
	int tempo;
	int velocidade;
	int litros_gastos;
	 std::cout << "Digite o tempo da viagem em horas\n " ;
	 std::cin >> tempo;
	 std::cout << "Digite a velocidade do automovel em quilometros por hora\n";
	 std::cin >> velocidade;
	  litros_gastos = tempo * velocidade /12;
	  
	 std::cout << "Estes foram os litros gastos : " ;
	 std::cout << litros_gastos;
	 std::cout << "\n";
	 std::cout << "Esta foi a velocidade Media : " ;
	 std::cout << velocidade;
	 std::cout << "\n";
	 std::cout << "Esta foi a distancia percorrida em kilometros : " ;
	 std::cout << velocidade / tempo ;
	 std::cout << "\n";
	return 0;
	
}
