#include "tecnicoAdm.hpp"

using namespace std;
#include <string>

TecnicoAdm::TecnicoAdm(){}

// Construtor parametrizado
TecnicoAdm::TecnicoAdm(float adicional, const string &funcao)
    : adicionalProdutividade(adicional), funcaoDesempenhada(funcao) {}

// Métodos getter e setter para o adicional de produtividade
float TecnicoAdm::getAdicionalProdutividade() const
{
    return this->adicionalProdutividade;
}

void TecnicoAdm::setAdicionalProdutividade(float adicional)
{
    this->adicionalProdutividade = adicional;
}

// Métodos getter e setter para a função desempenhada
const string &TecnicoAdm::getFuncaoDesempenhada() const
{
    return this->funcaoDesempenhada;
}

void TecnicoAdm::setFuncaoDesempenhada(const string &funcao)
{
    this->funcaoDesempenhada = funcao;
}
