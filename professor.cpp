#include "professor.hpp"

using namespace std;

// Construtor parametrizado
Professor::Professor(Formacao formacao, Nivel nivel, string disciplina,
                     string matricula, float salario, string departamento, int cargaHoraria) {}

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
string Professor::getDisciplina() const
{
    return this->disciplina;
}

void Professor::setDisciplina(string disciplina)
{
    this->disciplina = disciplina;
}
