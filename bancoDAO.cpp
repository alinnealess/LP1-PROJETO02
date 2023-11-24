#include "BancoDAO.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void BancoDAO::lerArquivoTecnicoAdm()
{
    vector<string> linhas;
    fstream ArquivoTecnicoAdm;
    ArquivoTecnicoAdm.open("tecnicoAdm.txt", ios::in);
    string temp;

    while (getline(ArquivoTecnicoAdm, temp))
    {
        linhas.push_back(temp);
    }
    ArquivoTecnicoAdm.close();

    for (int i = 0; i < linhas.size(); i += 2)
    {
        // professores[linhas[i]] = stof(linhas[i + 1]);
    }
}

void BancoDAO::lerArquivoProfessores()
{
    vector<string> linhas;
    fstream ArquivoProfessores;
    ArquivoProfessores.open("professores.txt", ios::in);
    string temp;

    while (getline(ArquivoProfessores, temp))
    {
        linhas.push_back(temp);
    }
    ArquivoProfessores.close();

    for (int i = 0; i < linhas.size(); i += 2)
    {
        // professores[linhas[i]] = stof(linhas[i + 1]);
    }
}


void BancoDAO::salvarArquivoTecnicoAdm()
{
    fstream ArquivoTecnicoAdm("tecnicoAdm.txt");
    ArquivoTecnicoAdm.open("tecnicoAdm.txt", ios::out);

    for (it = professores.begin(); it != professores.end(); it++)
    {
        ArquivoTecnicoAdm << it->first << endl;
        ArquivoTecnicoAdm << it->second << endl;
    }
    for (it = tecnicosADM.begin(); it != tecnicosADM.end(); it++)
    {
        ArquivoTecnicoAdm << it->first << endl;
        ArquivoTecnicoAdm << it->second << endl;
    }
}

void BancoDAO::salvarArquivoProfessores()
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
