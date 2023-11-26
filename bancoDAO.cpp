#include "bancoDAO.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// ===Funções relacionadas a Professores===

// Função para ler os dados dos professores do arquivo
void BancoDAO::lerArquivoProfessores()
{
    ifstream arquivo("professores.txt");
    if (arquivo.is_open())
    {
        string formacao;
        string nivel;
        string disciplina;
        string matricula;
        float salario;
        string departamento;
        int cargaHoraria;
        string dataIngresso;
        string nome;
        string cpf;
        string dataNascimento;
        string genero;
        string rua;
        int numero;
        string bairro;
        string cidade;
        string cep;

        while (arquivo >> formacao >> nivel >> disciplina >> matricula >> salario >>
               departamento >> cargaHoraria >> dataIngresso >> nome >> cpf >>
               dataNascimento >> genero >> rua >> numero >> bairro >> cidade >>
               cep)
        {
            Professor professor(formacao, nivel, disciplina, matricula, salario,
                                departamento, cargaHoraria, dataIngresso, nome, cpf,
                                dataNascimento, genero, rua, numero, bairro, cidade,
                                cep);
            professoresvector.push_back(professor);
        }
    }
    arquivo.close();
}

// Função para cadastrar um novo professor
void BancoDAO::cadastrarProfessor(Professor novoProfessor)
{
    professoresvector.push_back(novoProfessor);
    salvarArquivoProfessores();
}

// Função para listar todos os professores
void BancoDAO::listarProfessores() const
{
    for (const Professor &professor : professoresvector)
    {
        
        cout << professor.getFormacao() << " " << professor.getNivel() << " "
             << professor.getDisciplina() << " " << professor.getMatricula()
             << " " << professor.getSalario() << " "
             << professor.getDepartamento() << " " << professor.getCargaHoraria()
             << " " << professor.getDataIngresso() << " " << professor.getNome()
             << " " << professor.getCpf() << " " << professor.getDataNascimento()
             << " " << professor.getGenero() << " " << professor.getRua() << " "
             << professor.getNumero() << " " << professor.getBairro() << " "
             << professor.getCidade() << " " << professor.getCep() << endl;
    }
}

// Função para buscar um professor pelo número de matrícula
void BancoDAO::buscarProfessor(string matricula) const
{
    for (const Professor &professor : professoresvector)
    {
        if (professor.getMatricula() == matricula)
        {
            // Found the professor, you can perform actions here
            cout << professor.getFormacao() << " " << professor.getNivel() << " "
                 << professor.getDisciplina() << " " << professor.getMatricula()
                 << " " << professor.getSalario() << " "
                 << professor.getDepartamento() << " " << professor.getCargaHoraria()
                 << " " << professor.getDataIngresso() << " " << professor.getNome()
                 << " " << professor.getCpf() << " " << professor.getDataNascimento()
                 << " " << professor.getGenero() << " " << professor.getRua() << " "
                 << professor.getNumero() << " " << professor.getBairro() << " "
                 << professor.getCidade() << " " << professor.getCep() << endl;
            return;
        }
    }
}
// Função para deletar um professor pelo número de matrícula
void BancoDAO::deletarProfessor(string matricula)
{
    for (auto it = professoresvector.begin(); it != professoresvector.end();
         ++it)
    {
        if (it->getMatricula() == matricula)
        {
            professoresvector.erase(it);
            break;
        }
    }
}

// Função para salvar os dados dos professores no arquivo
void BancoDAO::salvarArquivoProfessores()
{
     ofstream arquivo("professores.txt");
  if (arquivo.is_open()) {
    for (const Professor &professor : professoresvector) {
      arquivo << professor.getFormacao() << " " << professor.getNivel() << " "
             << professor.getDisciplina() << " " << professor.getMatricula()
             << " " << professor.getSalario() << " "
             << professor.getDepartamento() << " " << professor.getCargaHoraria()
             << " " << professor.getDataIngresso() << " " << professor.getNome()
             << " " << professor.getCpf() << " " << professor.getDataNascimento()
             << " " << professor.getGenero() << " " << professor.getRua() << " "
             << professor.getNumero() << " " << professor.getBairro() << " "
             << professor.getCidade() << " " << professor.getCep() << endl;
    }
    arquivo.close();
  }
}

// ===Funções relacionadas a Técnicos Administrativos (TecnicoADM)===

// Função para ler os dados dos Técnicos ADM do arquivo
void BancoDAO::lerArquivoTecnicoAdm()
{
}

// Função para salvar os dados dos Técnicos ADM no arquivo
void BancoDAO::salvarArquivoTecnicoAdm()
{
}

// Função para cadastrar um novo Técnico ADM
void BancoDAO::cadastrarTecnicoADM(const TecnicoAdm tecnicoADM)
{
}

// Função para listar todos os Técnicos ADM
void BancoDAO::listarTecnicosADM() const
{
}

// Função para deletar um Técnico ADM pelo número de matrícula
void BancoDAO::deletarTecnicoADM(string matricula)
{
}

// Função para buscar um Técnico ADM pelo número de matrícula
void BancoDAO::buscarTecnicoADM(string matricula) const
{
}