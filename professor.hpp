#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include "funcionario.hpp"

class Professor : public Funcionario
{
public:
    // Enumerações
    enum Nivel
    {
        I, II,III, IV, V, VI,VII,VIII
    };
    enum Formacao
    {
        ESPECIALIZACAO,MESTRADO,DOUTORADO
    };

private:
    Nivel nivelProfessor = I;
    Formacao formacao = ESPECIALIZACAO;
    std::string disciplina;

public:
    // Construtor parametrizado
    Professor(Formacao formacao, Nivel nivel, std::string disciplina,
              float salario, std::string departamento, int cargaHoraria);

    // Métodos getter e setter para o nível
    Nivel getNivel() const;
    void setNivel(Nivel nivel);

    // Métodos getter e setter para a formação
    Formacao getFormacao() const;
    void setFormacao(Formacao formacao);

    // Métodos getter e setter para a disciplina
    std::string getDisciplina() const;
    void setDisciplina(std::string disciplina);
};

#endif