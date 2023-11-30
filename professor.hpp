#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include "funcionario.hpp"

class Professor : public Pessoa, public Funcionario
{

private:
    std::string nivel;
    std::string formacao;
    std::string disciplina;

public:
    Professor() {}
    //  Construtor parametrizado
    Professor(const std::string &formacao, const std::string &nivel, const std::string &disciplina,
              const std::string &matricula, float salario, const std::string &departamento, int cargaHoraria, const std::string &dataIngresso,

              const std::string &nome, const std::string &cpf, const std::string &dataNascimento,
              const std::string &genero, const std::string &rua, int numero,
              const std::string &bairro, const std::string &cidade, const std::string &cep);

    // Métodos getter e setter para o nível
    std::string getNivel() const;
    void setNivel(const std::string &nivel);

    // Métodos getter e setter para a formação
    std::string getFormacao() const;
    void setFormacao(const std::string &formacao);

    // Métodos getter e setter para a disciplina
    std::string getDisciplina() const;
    void setDisciplina(const std::string &disciplina);
};

#endif