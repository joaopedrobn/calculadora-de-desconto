#include <iostream>

int main() {
    double preco;
    int opcao;

    std::cout << "Informe o preco do produto: ";
    std::cin >> preco;

    std::cout << "Escolha a forma de pagamento:\n";
    std::cout << "1. A vista (10% de desconto)\n";
    std::cout << "2. Cartao de credito (5% de desconto)\n";
    std::cin >> opcao;

    if(opcao == 1) {
        preco = preco - (preco * 0.10);
        std::cout << "O valor com desconto a vista e: " << preco << "\n";
    } else if(opcao == 2) {
        preco = preco - (preco * 0.05);
        std::cout << "O valor com desconto no cartao de crédito e: " << preco << "\n";
    } else {
        std::cout << "Opcao invalida.\n";
    }

    return 0;
}
