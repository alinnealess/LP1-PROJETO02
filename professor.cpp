#include "professor.hpp"

using namespace std;


// Construtor parametrizado
Professor::Professor(const std::string& formacao, const std::string& nivel, const std::string& disciplina,
                     const std::string& matricula, float salario, const std::string& departamento, int cargaHoraria, const std::string& dataIngresso,
                     const std::string& nome, const std::string& cpf, const std::string& dataNascimento,
                     const std::string& genero, const std::string& rua, int numero,
                     const std::string& bairro, const std::string& cidade, const std::string& cep)
    : Pessoa(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep),
      Funcionario(matricula, salario, departamento, cargaHoraria, dataIngresso),
      nivel(nivel),
      formacao(formacao),
      disciplina(disciplina) {}

      

// Métodos getter e setter para o nível
string Professor::getNivel() const
{
    return nivel;
}

void Professor::setNivel(const std::string& nivel)
{
    this->nivel = nivel;
}


// Métodos getter e setter para a formação
string Professor::getFormacao() const
{
    return formacao;
}

void Professor::setFormacao(const std::string& formacao)
{
   this->formacao = formacao;
}


// Métodos getter e setter para a disciplina
string Professor::getDisciplina() const
{
    return disciplina;
}

void Professor::setDisciplina(const std::string& disciplina)
{
    this->disciplina = disciplina;
}