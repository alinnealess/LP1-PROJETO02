#include "professor.hpp"

using namespace std;

// Construtor parametrizado
Professor::Professor(std::string formacao, std::string nivel, std::string disciplina,
                     std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso,
                     std::string nome, std::string cpf, std::string dataNascimento,
                     std::string genero, std::string rua, int numero,
                     std::string bairro, std::string cidade, std::string cep)
    : Pessoa(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep),
      Funcionario(matricula, salario, departamento, cargaHoraria, dataIngresso),
      nivel(nivel),
      formacao(formacao),
      disciplina(disciplina) {}

// Métodos getter e setter para o nível
string Professor::getNivel() const
{
    return this->nivel;
}

void Professor::setNivel(string nivel)
{
    this->nivel = nivel;
}

// Métodos getter e setter para a formação
string Professor::getFormacao() const
{
    return this->formacao;
}

void Professor::setFormacao(string formacao)
{
    this->formacao = formacao;
}

// Métodos getter e setter para a disciplina
string Professor::getDisciplina() const
{
    return this->disciplina;
}

void Professor::setDisciplina(string disciplina)
{
    this->disciplina = disciplina;
}
