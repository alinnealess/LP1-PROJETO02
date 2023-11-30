#include "funcionario.hpp"

using namespace std;


// Construtor parametrizado
Funcionario::Funcionario(string matricula, float salario, string departamento, int cargaHoraria, string dataIngresso){}

// Métodos getter e setter para a matrícula
string Funcionario::getMatricula() const
{
    return this->matricula;
}

void Funcionario::setMatricula(string matricula)
{
    this->matricula = matricula;
}

// Métodos getter e setter para o salário
float Funcionario::getSalario() const
{
    return this->salario;
}

void Funcionario::setSalario(const float salario)
{
    this->salario = salario;
}

// Métodos getter e setter para o departamento
string Funcionario::getDepartamento() const
{
    return this->departamento;
}

void Funcionario::setDepartamento(const string departamento)
{
    this->departamento = departamento;
}

// Métodos getter e setter para a carga horária
int Funcionario::getCargaHoraria() const
{
    return this->cargaHoraria;
}

void Funcionario::setCargaHoraria(const int cargaHoraria)
{
    this->cargaHoraria = cargaHoraria;
}

// Métodos getter e setter para a data de ingresso
string Funcionario::getDataIngresso() const
{
    return this->dataIngresso;
}

void Funcionario::setDataIngresso(string dataIngresso)
{
    this->dataIngresso = dataIngresso;
}
