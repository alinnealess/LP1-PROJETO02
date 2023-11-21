#include <iostream>
#include "pessoa.hpp"
#include "endereco.hpp"




Pessoa::Pessoa(const std::string &nome, const std::string &cpf, const std::string &dataNascimento, const std::string &genero, const Endereco &endereco)
    : nome(nome), cpf(cpf), dataNascimento(dataNascimento), genero(genero), endereco(endereco) {}

// Métodos getter e setter para 'nome'
const std::string &Pessoa::getNome() const
{
    return this->nome;
}

void Pessoa::setNome(const std::string &nome)
{
    this->nome = nome;
}

// Métodos getter e setter para 'cpf'
const std::string &Pessoa::getCPF() const
{
    return this->cpf;
}

void Pessoa::setCPF(const std::string &cpf)
{
    this->cpf = cpf;
}

// Métodos getter e setter para 'dataNascimento'
const std::string &Pessoa::getDataNascimento() const
{
    return this->dataNascimento;
}

void Pessoa::setDataNascimento(const std::string &dataNascimento)
{
    this->dataNascimento = dataNascimento;
}

// Métodos getter e setter para 'genero'
const std::string &Pessoa::getGenero() const
{
    return this->genero;
}

void Pessoa::setGenero(const std::string &genero)
{
    this->genero = genero;
}

// Métodos getter e setter para 'endereco'
const Endereco &Pessoa::getEndereco() const
{
    return this->endereco;
}

void Pessoa::setEndereco(const Endereco &endereco)
{
    this->endereco = endereco;
}