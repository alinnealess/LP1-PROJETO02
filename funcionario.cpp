#include "funcionario.hpp"

using namespace std;

// Construtor padrão
Funcionario::Funcionario() {}

// Construtor parametrizado
Funcionario::Funcionario(const string &matricula, float salario, const string &departamento, int cargaHoraria, const string &dataIngresso)
    : Pessoa(), matricula(matricula), salario(salario), departamento(departamento), cargaHoraria(cargaHoraria), dataIngresso(dataIngresso) {}

// Métodos getter e setter para a matrícula
const string &Funcionario::getMatricula() const
{
    return this->matricula;
}

void Funcionario::setMatricula(const string &value)
{
    this->matricula = value;
}

// Métodos getter e setter para o salário
float Funcionario::getSalario() const
{
    return this->salario;
}

void Funcionario::setSalario(float value)
{
    this->salario = value;
}

// Métodos getter e setter para o departamento
const string &Funcionario::getDepartamento() const
{
    return this->departamento;
}

void Funcionario::setDepartamento(const string &value)
{
    this->departamento = value;
}

// Métodos getter e setter para a carga horária
int Funcionario::getCargaHoraria() const
{
    return this->cargaHoraria;
}

void Funcionario::setCargaHoraria(int value)
{
    this->cargaHoraria = value;
}

// Métodos getter e setter para a data de ingresso
const string &Funcionario::getDataIngresso() const
{
    return this->dataIngresso;
}

void Funcionario::setDataIngresso(const string &value)
{
    this->dataIngresso = value;
}
