#include <iostream>
#include "endereco.hpp"

using namespace std;

Endereco::Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string cep)
    : rua(rua), numero(numero), bairro(bairro), cidade(cidade), cep(cep){}

// Implementação dos métodos getters da classe Endereco
string Endereco::getRua() const
{
    return this->rua;
}

int Endereco::getNumero() const
{
    return this->numero;
}

std::string Endereco::getBairro() const
{
    return this->bairro;
}

std::string Endereco::getCidade() const
{
    return this->cidade;
}

string Endereco::getCep() const
{
    return this->cep;
}

// Implementação dos métodos setters da classe Endereco

void Endereco::setRua(string rua)
{
    this->rua = rua;
}

void Endereco::setNumero(int numero)
{
    this->numero = numero;
}

void Endereco::setBairro(string bairro)
{
    this->bairro = bairro;
}

void Endereco::setCidade(string cidade)
{
    this->cidade = cidade;
}

void Endereco::setCep(string cep)
{
    this->cep = cep;
}
