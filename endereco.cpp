#include <iostream>
#include "endereco.hpp"

using namespace std;

// Implementação dos métodos da classe Endereco

string Endereco::getRua() const
{
    return this->rua;
}

void Endereco::setRua(const string &value)
{
    this->rua = value;
}

int Endereco::getNumero() const
{
    return this->numero;
}

void Endereco::setNumero(int value)
{
    this->numero = value;
}

std::string Endereco::getBairro() const
{
    return this->bairro;
}

void Endereco::setBairro(const string &value)
{
    this->bairro = value;
}

std::string Endereco::getCidade() const
{
    return this->cidade;
}

void Endereco::setCidade(const string &value)
{
    this->cidade = value;
}

string Endereco::getCep() const
{
    return this->cep;
}

void Endereco::setCep(const string &value)
{
    this->cep = value;
}

Endereco::Endereco()
{}
