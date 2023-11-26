#include "BancoDAO.hpp"
#include <iostream>
#include <fstream>
#include <vector>

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

// void BancoDAO::lerArquivoProfessores()
// {
//     vector<string> linhas;
//     fstream ArquivoProfessores;
//     ArquivoProfessores.open("professores.txt", ios::in);
//     string temp;

//     while (getline(ArquivoProfessores, temp))
//     {
//         linhas.push_back(temp);
//     }
//     ArquivoProfessores.close();

//     for (int i = 0; i < linhas.size(); i += 2)
//     {
//          professoresvector[linhas[i]] = stof(linhas[i + 1]);
//     }
// }

void BancoDAO::lerArquivoProfessores()
{
    ifstream arquivoProfessores("professores.txt");

    if (!arquivoProfessores.is_open())
    {
        cerr << "Erro ao abrir o arquivo de professores." << endl;
        return;
    }

    string nome, cpf, dataNascimento, genero, departamento, dataIngresso, matricula;
    int numero, cargaHoraria;
    string rua, bairro, cidade, cep;
    string formacao, nivel, disciplina;
    float salario;

    // Loop para ler cada bloco de informações do professor
    while (arquivoProfessores >> nome >> cpf >> dataNascimento >> genero >> rua >> numero >> bairro >> cidade >> cep >>
           matricula >> salario >> departamento >> cargaHoraria >> dataIngresso >> formacao >> nivel >> disciplina)
    {
        // Cria um novo objeto Professor com os dados lidos do arquivo
        Professor novoProfessor(formacao, nivel, disciplina,
                                matricula, salario, departamento, cargaHoraria, dataIngresso,
                                nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep);

        // Adiciona o professor ao vetor
        professoresvector.push_back(novoProfessor);
    }

    // Fecha o arquivo
    arquivoProfessores.close();
}

void BancoDAO::salvarArquivoTecnicoAdm()
{
    // fstream ArquivoTecnicoAdm("tecnicoAdm.txt");
    // ArquivoTecnicoAdm.open("tecnicoAdm.txt", ios::out);

    // for (it = professores.begin(); it != professores.end(); it++)
    // {
    //     ArquivoTecnicoAdm << it->first << endl;
    //     ArquivoTecnicoAdm << it->second << endl;
    // }
    // for (it = tecnicosADM.begin(); it != tecnicosADM.end(); it++)
    // {
    //     ArquivoTecnicoAdm << it->first << endl;
    //     ArquivoTecnicoAdm << it->second << endl;
    // }
}

void BancoDAO::salvarArquivoProfessores()
{
    fstream arquivoProfessores("professores.txt");
    arquivoProfessores.open("professores.txt", ios::out);

    for (const auto &professor : professoresvector)
    {
        // Escreve os dados do professor no arquivo
        arquivoProfessores << professor.getNome() << endl;
        // arquivoProfessores << professor.getCPF() << endl;
        //  ... Continue para os outros atributos do Professor
    }

    // Fecha o arquivo
    arquivoProfessores.close();
    //     for (it = professores.begin(); it != professores.end(); it++)
    //     {
    //         arquivoFuncionario << it->first << endl;
    //         arquivoFuncionario << it->second << endl;
    //     }
    //     for (it = tecnicosADM.begin(); it != tecnicosADM.end(); it++)
    //     {
    //         arquivoFuncionario << it->first << endl;
    //         arquivoFuncionario << it->second << endl;
    //     }
}

void BancoDAO::cadastrarProfessor(Professor novoProfessor)
{
    professoresvector.push_back(novoProfessor);
    salvarArquivoProfessores();
}

void BancoDAO::listarProfessores() const
{
    //     cout << "\n=====================================" << endl;
    //     cout << "Lista de Professores:" << endl;
    //     for (Professor Professor : this->professores) {

    //   }
    //     cout << "\n=====================================" << endl;
}

void BancoDAO::cadastrarTecnicoADM(const TecnicoAdm tecnicoADM)
{
    // tecnicosADM.push_back(tecnicoADM);
}

void BancoDAO::listarTecnicosADM() const
{
    // cout << "Lista de TecnicosADM:" << endl;
    // for (const auto &tecnicoADM : tecnicosADM)
    // {
    // }
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
