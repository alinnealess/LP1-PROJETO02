#include "pessoa.hpp"

// Construtor parametrizado
Pessoa::Pessoa(std::string nome, std::string cpf, std::string dataNascimento, std::string genero,
               std::string rua, int numero, std::string bairro, std::string cidade, std::string cep)
    : endereco(rua, numero, bairro, cidade, cep), nome(nome), cpf(cpf), dataNascimento(dataNascimento), genero(genero){}

// Métodos getters
std::string Pessoa::getNome() const
{
    return nome;
}

std::string Pessoa::getCpf() const
{
    return cpf;
}

std::string Pessoa::getDataNascimento() const
{
    return dataNascimento;
}

std::string Pessoa::getGenero() const
{
    return genero;
}

// Métodos setters
void Pessoa::setNome(std::string nome)
{
    this->nome = nome;
}

void Pessoa::setCpf(std::string cpf)
{
    this->cpf = cpf;
}

void Pessoa::setDataNascimento(std::string dataNascimento)
{
    this->dataNascimento = dataNascimento;
}

void Pessoa::setGenero(std::string genero)
{
    this->genero = genero;
}