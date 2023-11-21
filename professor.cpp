#include "professor.hpp"

using namespace std;

Professor::Professor() {}

// Construtor parametrizado
Professor::Professor(Nivel nivel, Formacao formacao, const std::string &disciplina)
    : Funcionario(), nivelProfessor(nivel), formacaoProfessor(formacao), disciplina(disciplina) {}

// Métodos getter e setter para o nível
Professor::Nivel Professor::getNivel() const
{
    return this->nivelProfessor;
}

void Professor::setNivel(Nivel nivel)
{
    this->nivelProfessor = nivel;
}

// Métodos getter e setter para a formação
Professor::Formacao Professor::getFormacao() const
{
    return this->formacaoProfessor;
}

void Professor::setFormacao(Formacao formacao)
{
    this->formacaoProfessor = formacao;
}

// Métodos getter e setter para a disciplina
const string &Professor::getDisciplina() const
{
    return this->disciplina;
}

void Professor::setDisciplina(const string &value)
{
    this->disciplina = value;
}
