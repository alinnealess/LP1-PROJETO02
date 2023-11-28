#include "pessoa.hpp"
using namespace std;

// Construtor parametrizado
Pessoa::Pessoa(string nome, string cpf, string dataNascimento, string genero,
               string rua, int numero, string bairro, string cidade, string cep)
    : Endereco(rua, numero, bairro, cidade, cep), nome(nome), cpf(cpf), dataNascimento(dataNascimento), genero(genero) {}

// Métodos getters
string Pessoa::getNome() const
{
    return this -> nome;
}

string Pessoa::getCpf() const
{
    return this -> cpf;
}

string Pessoa::getDataNascimento() const
{
    return this -> dataNascimento;
}

string Pessoa::getGenero() const
{
    return this -> genero;
}

// Métodos setters
void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setCpf(string cpf)
{
    this->cpf = cpf;
}

void Pessoa::setDataNascimento(string dataNascimento)
{
    this->dataNascimento = dataNascimento;
}

void Pessoa::setGenero(string genero)
{
    this->genero = genero;
}