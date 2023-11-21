#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include "funcionario.hpp"


class Professor : public Funcionario{
public:
    // Enumerações
    enum Nivel { I, II, III, IV, V, VI, VII, VIII };
    enum Formacao { ESPECIALIZACAO, MESTRADO, DOUTORADO };

private:
    Nivel nivelProfessor;
    Formacao formacaoProfessor;
    std::string disciplina;

public:
    //Construtor padrao
    Professor();

    // Construtor parametrizado
    Professor(Nivel nivel, Formacao formacao, const std::string& disciplina);

    // Métodos getter e setter para o nível
    Nivel getNivel() const;
    void setNivel(Nivel nivel);

    // Métodos getter e setter para a formação
    Formacao getFormacao() const;
    void setFormacao(Formacao formacao);

    // Métodos getter e setter para a disciplina
    const std::string& getDisciplina() const;
    void setDisciplina(const std::string& disciplina);
};



#endif