#include "tecnicoAdm.hpp"

using namespace std;
#include <string>

// Construtor parametrizado
TecnicoAdm::TecnicoAdm(float adicionalProdutividade, string funcaoDesenpenhada,
             string matricula, float salario, string departamento, int cargaHoraria, string dataIngresso,
             string nome, string cpf, string dataNascimento,
             string genero, string rua, int numero,
             string bairro, string cidade, string cep)
      : Pessoa(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep),
        Funcionario(matricula, salario, departamento, cargaHoraria, dataIngresso) {}

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
const string &TecnicoAdm::getFuncaoDesempenhada() const
{
    return this->funcaoDesempenhada;
}

void TecnicoAdm::setFuncaoDesempenhada(const string &funcaoDesempenhada)
{
    this->funcaoDesempenhada = funcaoDesempenhada;
}
