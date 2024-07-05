#include "Concessionaria.h"

// Construtor da classe Concessionaria, inicializa o nome e o CNPJ da concessionária.
Concessionaria::Concessionaria(std::string nome, std::string CNPJ)
    : nome(nome), CNPJ(CNPJ) {}

// Destrutor da classe Concessionaria, libera a memória alocada para cada veículo no estoque.
Concessionaria::~Concessionaria() {
    for(auto veiculo : estoque) {
        delete veiculo;
    }
}

// Retorna o nome da concessionária.
std::string Concessionaria::getNome() const {
    return nome;
}

// Retorna o CNPJ da concessionária.
std::string Concessionaria::getCNPJ() const {
    return CNPJ;
}

// Retorna uma referência constante ao vetor de veículos no estoque.
const std::vector<Veiculo*>& Concessionaria::getEstoque() const {
    return estoque;
}

// Função responsavel por adicionar um veículo ao estoque.
void Concessionaria::adicionarVeiculo(Veiculo* veiculo) {
    estoque.push_back(veiculo); // O push_back é responsavel por adicionar um veículo ao estoque
}

// Faz a verificação se um veículo com o número de chassi fornecido existe no estoque.
bool Concessionaria::veiculoExiste(std::string numChassi) const {
    for(auto veiculo : estoque) {                  // Itera sobre cada veículo no estoque.
        if(veiculo->getNumChassi() == numChassi) { // Verifica se o número de chassi do veículo é igual ao número de chassi fornecido.
            return true;
        }
    }
    return false;
}

bool Concessionaria::removerVeiculo(std::string numChassi) {    // Remove um veículo com o número de chassi fornecido do estoque.
    for(size_t i = 0; i < estoque.size(); i++) {                // Itera sobre o vetor de veículos no estoque.
        if(estoque[i]->getNumChassi() == numChassi) {
            delete estoque[i];                                  // Libera a memória do veículo a ser removido.
            estoque.erase(estoque.begin() + i);                 // Remove o veículo do vetor.
            return true;
        }
    }
    return false;
}

Veiculo* Concessionaria::buscarVeiculo(std::string numChassi) {  // Busca um veículo com o número de chassi fornecido no estoque e retorna um ponteiro para ele.
    for(auto veiculo : estoque) {                                // Itera sobre o vetor de veículos no estoque.
        if(veiculo->getNumChassi() == numChassi) {
            return veiculo;
        }
    }
    return nullptr;                                               // Retorna nullptr se o veículo não for encontrado.
}