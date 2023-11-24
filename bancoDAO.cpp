#include "BancoDAO.hpp"
#include <iostream>
#include <fstream>;

using namespace std;

void BancoDAO::lerArquivoFuncionarios()
{
    fstream arquivoFuncionario.open("funcionarios.txt", ios::in);
    if (!arquivoFuncionario.is_open())
    {
        cout << "Erro ao abrir o arquivo de funcionários." << endl;
        return;
    }
}

void BancoDAO::salvarArquivoFuncionarios()
{
    fstream arquivoFuncionario("funcionarios.txt");
    arquivoFuncionario.open("funcionarios.txt", ios::out);
   
    for (it = professores.begin(); it != professores.end(); it++)
    {
        arquivoFuncionario << it->first << endl;
        arquivoFuncionario << it->second << endl;
    }
    for (it = tecnicosADM.begin(); it != tecnicosADM.end(); it++)
    {
        arquivoFuncionario << it->first << endl;
        arquivoFuncionario << it->second << endl;
    }
}

void BancoDAO::cadastrarProfessor(Professor professor)
{
    professores.push_back(professor);
}

void BancoDAO::listarProfessores() const
{
    cout << "Lista de Professores:" << endl;
    for (const auto &professor : professores)
    {
        cout << " Nome: " << professor.getNome() << ", Disciplina: " << professor.getDisciplina() << endl;
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
