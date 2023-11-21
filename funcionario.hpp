#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>
#include "pessoa.hpp"

class Funcionario : public Pessoa {
private:
    std::string matricula;
    float salario;
    std::string departamento;
    int cargaHoraria;
    std::string dataIngresso;

public:
    // Construtor
    Funcionario();

    // Construtor parametrizado
     Funcionario(const std::string &matricula, float salario, const std::string &departamento, int cargaHoraria, const std::string &dataIngresso);

    // Métodos getter e setter para a matrícula
    const std::string& getMatricula() const;
    void setMatricula(const std::string& value);

    // Métodos getter e setter para o salário
    float getSalario() const;
    void setSalario(float value);

    // Métodos getter e setter para o departamento
    const std::string& getDepartamento() const;
    void setDepartamento(const std::string& value);

    // Métodos getter e setter para a carga horária
    int getCargaHoraria() const;
    void setCargaHoraria(int value);

    // Métodos getter e setter para a data de ingresso
    const std::string &getDataIngresso() const;
    void setDataIngresso(const std::string &value);
};

#endif
