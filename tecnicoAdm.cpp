#include "tecnicoAdm.hpp"

using namespace std;
#include <string>

// Construtor parametrizado
TecnicoAdm::TecnicoAdm(float adicionalProdutividade, std::string funcaoDesenpenhada,
             std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso,
             std::string nome, std::string cpf, std::string dataNascimento,
             std::string genero, std::string rua, int numero,
             std::string bairro, std::string cidade, std::string cep)
      : Pessoa(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep),
        Funcionario(matricula, salario, departamento, cargaHoraria, dataIngresso),
        adicionalProdutividade(adicionalProdutividade), funcaoDesempenhada(funcaoDesempenhada) {}

// Métodos getter e setter para o adicional de produtividade
float TecnicoAdm::getAdicionalProdutividade() const
{
    return this->adicionalProdutividade;
}

void TecnicoAdm::setAdicionalProdutividade(float adicionalProdutividade)
{
    this->adicionalProdutividade = adicionalProdutividade;
}

// Métodos getter e setter para a função desempenhada
string TecnicoAdm::getFuncaoDesempenhada() const
{
    return this->funcaoDesempenhada;
}

void TecnicoAdm::setFuncaoDesempenhada(const std::string& funcaoDesempenhada)
{
    this->funcaoDesempenhada = funcaoDesempenhada;
}
