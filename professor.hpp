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
    Professor(std::string formacao, std::string nivel, std::string disciplina)
        : nivel(nivel),
          formacao(formacao),
          disciplina(disciplina) {}
    //  Construtor parametrizado
    Professor(std::string formacao, std::string nivel, std::string disciplina,
              std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso,

              std::string nome, std::string cpf, std::string dataNascimento,
              std::string genero, std::string rua, int numero,
              std::string bairro, std::string cidade, std::string cep);

    // Métodos getter e setter para o nível
    std::string getNivel() ;
    void setNivel(std::string nivel);

    // Métodos getter e setter para a formação
    std::string getFormacao() ;
    void setFormacao(std::string formacao);

    // Métodos getter e setter para a disciplina
    std::string getDisciplina() ;
    void setDisciplina(std::string disciplina);
};

#endif