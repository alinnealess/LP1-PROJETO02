#include "BancoDAO.hpp"
#include <iostream>

using namespace std;

void BancoDAO::cadastrarProfessor(Professor professor)
{
    professores.push_back(professor);
}

void BancoDAO::listarProfessores() const
{
    cout << "Lista de Professores:" << endl;
    for (const auto &professor : professores)
    {
    }
}

void BancoDAO::cadastrarTecnicoADM(const TecnicoAdm tecnicoADM)
{
    tecnicosADM.push_back(tecnicoADM);
}

void BancoDAO::listarTecnicosADM() const
{
    cout << "Lista de TecnicosADM:" << endl;
    for (const auto &tecnicoADM : tecnicosADM)
    {
    }
}

void BancoDAO::deletarProfessor(int matricula)
{
}

void BancoDAO::deletarTecnicoADM(int matricula)
{
}

void BancoDAO::buscarProfessor(int matricula) const
{
}

void BancoDAO::buscarTecnicoADM(int matricula) const
{
}
