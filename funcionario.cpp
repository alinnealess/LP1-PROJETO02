#include "funcionario.hpp"

using namespace std;


// Construtor parametrizado
Funcionario::Funcionario(std::string nome, std::string cpf, std::string dataNascimento, std::string genero,
                         std::string rua, int numero, std::string bairro, std::string cidade, std::string cep,
                         std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso)
    : Pessoa(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep),
      matricula(matricula),
      salario(salario),
      departamento(departamento),
      cargaHoraria(cargaHoraria),
      dataIngresso(dataIngresso) {}

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

void Funcionario::setSalario(float salario)
{
    this->salario = salario;
}

// Métodos getter e setter para o departamento
string Funcionario::getDepartamento() const
{
    return this->departamento;
}

void Funcionario::setDepartamento(string departamento)
{
    this->departamento = departamento;
}

// Métodos getter e setter para a carga horária
int Funcionario::getCargaHoraria() const
{
    return this->cargaHoraria;
}

void Funcionario::setCargaHoraria(int cargaHoraria)
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
