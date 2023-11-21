#include <iostream>
#include "pessoa.hpp"
#include "endereco.hpp"

using namespace std;

Pessoa::Pessoa(const string &nome, const string &cpf, const string &dataNascimento, const string &genero, const Endereco &endereco)
    : nome(nome), cpf(cpf), dataNascimento(dataNascimento), genero(genero), endereco(endereco) {}

// Métodos getter e setter para 'nome'
const string &Pessoa::getNome() const
{
    return this->nome;
}

void Pessoa::setNome(const string &nome)
{
    this->nome = nome;
}

// Métodos getter e setter para 'cpf'
const string &Pessoa::getCPF() const
{
    return this->cpf;
}

void Pessoa::setCPF(const string &cpf)
{
    this->cpf = cpf;
}

// Métodos getter e setter para 'dataNascimento'
const string &Pessoa::getDataNascimento() const
{
    return this->dataNascimento;
}

void Pessoa::setDataNascimento(const string &dataNascimento)
{
    this->dataNascimento = dataNascimento;
}

// Métodos getter e setter para 'genero'
const string &Pessoa::getGenero() const
{
    return this->genero;
}

void Pessoa::setGenero(const string &genero)
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