#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>
#include "pessoa.hpp"

class Funcionario
{
private:
    std::string matricula;
    float salario;
    std::string departamento;
    int cargaHoraria;
    std::string dataIngresso;

public:
    // Construtor padrão
    Funcionario() {}

    // Construtor parametrizado
    Funcionario(
        std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso);

    // Métodos getter e setter para a matrícula
    std::string getMatricula() const;
    void setMatricula(std::string matricula);

    // Métodos getter e setter para o salário
    float getSalario() const;
    void setSalario(float salario);

    // Métodos getter e setter para o departamento
    std::string getDepartamento() const;
    void setDepartamento(std::string departamento);

    // Métodos getter e setter para a carga horária
    int getCargaHoraria() const;
    void setCargaHoraria(int cargaHoraria);

    // Métodos getter e setter para a data de ingresso
    std::string getDataIngresso() const;
    void setDataIngresso(std::string dataIngresso);
};

#endif
