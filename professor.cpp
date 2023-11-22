#include "professor.hpp"

using namespace std;

// Construtor parametrizado
Professor::Professor(Formacao formacao, Nivel nivel, string disciplina,
                     float salario, string departamento, int cargaHoraria) {}

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
    return this->formacao;
}

void Professor::setFormacao(Formacao formacao)
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
