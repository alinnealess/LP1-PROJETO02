#include "bancoDAO.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
BancoDAO::BancoDAO() {}

// ===Funções relacionadas a Professores===

void BancoDAO::lerArquivoProfessores()
{
    fstream arquivo;
    string linha;
    arquivo.open("professores.txt", ios::in);
    while (getline(arquivo, linha))
    {
        if (!arquivo.is_open())
        {
            cout << "Erro ao abrir o arquivo de professores." << endl;
            return;
        }

        while (getline(arquivo, linha))
        {
            // Dividir a linha em campos
            
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

            arquivo >> formacao >> nivel >> disciplina >> matricula >> salario >> departamento >> cargaHoraria >> dataIngresso >> nome >> cpf >> dataNascimento >> genero >> rua >> numero >> bairro >> cidade >> cep;

            // Criar um objeto Professor
            Professor professor(formacao, nivel, disciplina, matricula, salario, departamento, cargaHoraria, dataIngresso, nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep);

            // Adicionar o objeto ao vetor
            professoresvector.push_back(professor);
        }
        arquivo.close();
    }
}

void BancoDAO::salvarArquivoProfessores()
{
    fstream arquivo;
    arquivo.open("professores.txt", ios::out);
    for (Professor professor : professoresvector)
    {
        arquivo << professor.getFormacao() << "\n"
                << professor.getNivel() << "\n"
                << professor.getDisciplina() << "\n"
                << professor.getMatricula() << "\n"
                << professor.getSalario() << "\n"
                << professor.getDepartamento() << "\n"
                << professor.getCargaHoraria() << "\n"
                << professor.getDataIngresso() << "\n"
                << professor.getNome() << "\n"
                << professor.getCpf() << "\n"
                << professor.getDataNascimento() << "\n"
                << professor.getGenero() << "\n"
                << professor.getRua() << "\n"
                << professor.getNumero() << "\n"
                << professor.getBairro() << "\n "
                << professor.getCidade() << "\n "
                << professor.getCep() << endl;
    }
    arquivo.close();
}

void BancoDAO::deletarProfessor(string matricula)
{
    for (int i = 0; i < professoresvector.size(); i++)
    {
        if (professoresvector[i].getMatricula() == matricula)
        {
            professoresvector.erase(professoresvector.begin() + i);
            cout << "Professor deletado com sucesso" << endl;
            break;
        }
    }
}

void BancoDAO::cadastrarProfessor(Professor professor)
{
    professoresvector.push_back(professor);
    cout << "\n\t===Professor(a) cadastrado com sucesso!===\n"
         << endl;
}

void BancoDAO::listarProfessores() const
{

    for (const Professor &professor : professoresvector)
    {

        cout << professor.getNome() << endl;
        cout << professor.getCpf() << endl;
        cout << professor.getMatricula() << endl;
        cout << professor.getSalario() << endl;
        cout << professor.getDepartamento() << endl;
        cout << professor.getCargaHoraria() << endl;
        cout << professor.getDataIngresso() << endl;
        cout << professor.getGenero() << endl;
        cout << professor.getRua() << endl;
        cout << professor.getNumero() << endl;
        cout << professor.getBairro() << endl;
        cout << professor.getCidade() << endl;
        cout << professor.getCep() << endl;
        cout << professor.getNivel() << endl;
        cout << professor.getDisciplina() << endl;
        cout << professor.getDataNascimento() << endl;
        cout << endl;
    }
}

void BancoDAO::buscarProfessor(string matricula) const
{
    for (int i = 0; i < professoresvector.size(); i++)
    {
        if (professoresvector[i].getMatricula() == matricula)
        {
            cout << professoresvector[i].getNome() << endl;
            cout << professoresvector[i].getCpf() << endl;
            cout << professoresvector[i].getMatricula() << endl;
            cout << professoresvector[i].getSalario() << endl;
            cout << professoresvector[i].getDepartamento() << endl;
            cout << professoresvector[i].getCargaHoraria() << endl;
            cout << professoresvector[i].getDataIngresso() << endl;
            cout << professoresvector[i].getGenero() << endl;
            cout << professoresvector[i].getRua() << endl;
            cout << professoresvector[i].getNumero() << endl;
            cout << professoresvector[i].getBairro() << endl;
            cout << professoresvector[i].getCidade() << endl;
            cout << professoresvector[i].getCep() << endl;
            cout << professoresvector[i].getNivel() << endl;
            cout << professoresvector[i].getDisciplina() << endl;
            cout << professoresvector[i].getDataNascimento() << endl;
            cout << endl;
        }
    }
}

// ===Funções relacionadas a Técnicos Administrativos (TecnicoADM)===

// Função para ler os dados dos Técnicos ADM do arquivo
void BancoDAO::lerArquivoTecnicoAdm()
{
    ifstream arquivoT("tecnicosADM.txt");
    if (!arquivoT.is_open())
    {
        cout << "Erro ao abrir o arquivo de técnicos administrativos." << endl;
        return;
    }
    if (arquivoT.is_open())
    {
        float adicionalProdutividade;
        string funcaoDesempenhada;
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

        while (arquivoT >> adicionalProdutividade >> funcaoDesempenhada >> matricula >> salario >>
               departamento >> cargaHoraria >> dataIngresso >> nome >> cpf >>
               dataNascimento >> genero >> rua >> numero >> bairro >> cidade >>
               cep)
        {
            TecnicoAdm tecnicoADM(adicionalProdutividade, funcaoDesempenhada, matricula, salario,
                                  departamento, cargaHoraria, dataIngresso, nome,
                                  cpf, dataNascimento, genero, rua, numero, bairro,
                                  cidade, cep);
            tecnicosADMvector.push_back(tecnicoADM);
        }
        arquivoT.close();
    }
}

// Função para salvar os dados dos Técnicos ADM no arquivo
void BancoDAO::salvarArquivoTecnicoAdm()
{
    ofstream arquivoT("tecnicosADM.txt");
    if (!arquivoT.is_open())
    {
        cout << "Erro ao abrir o arquivo de técnicos administrativos para escrita." << endl;
        return;
    }
    if (arquivoT.is_open())
    {
        for (const TecnicoAdm &tecnicoADM : tecnicosADMvector)
        {
            arquivoT << tecnicoADM.getAdicionalProdutividade() << " " << tecnicoADM.getFuncaoDesempenhada() << " "
                     << tecnicoADM.getMatricula() << " " << tecnicoADM.getSalario()
                     << " " << tecnicoADM.getDepartamento() << " "
                     << tecnicoADM.getCargaHoraria() << " "
                     << tecnicoADM.getDataIngresso() << " " << tecnicoADM.getNome()
                     << " " << tecnicoADM.getCpf() << " "
                     << tecnicoADM.getDataNascimento() << " " << tecnicoADM.getGenero()
                     << " " << tecnicoADM.getRua() << " " << tecnicoADM.getNumero()
                     << " " << tecnicoADM.getBairro() << " " << tecnicoADM.getCidade()
                     << " " << tecnicoADM.getCep() << endl;
        }
        arquivoT.close();
    }
}

// Função para cadastrar um novo Técnico ADM
void BancoDAO::cadastrarTecnicoADM(TecnicoAdm novoTecnicoADM)
{
    tecnicosADMvector.push_back(novoTecnicoADM);
    cout << "\n\t===TecnicoADM cadastrado com sucesso!===\n"
         << endl;
}

// Função para listar todos os Técnicos ADM
void BancoDAO::listarTecnicosADM() const
{
    for (const TecnicoAdm &tecnicoADM : tecnicosADMvector)
    {

        cout << tecnicoADM.getAdicionalProdutividade() << " "
             << tecnicoADM.getFuncaoDesempenhada() << " "
             << tecnicoADM.getMatricula() << " "
             << tecnicoADM.getSalario() << " "
             << tecnicoADM.getDepartamento() << " "
             << tecnicoADM.getCargaHoraria() << " "
             << tecnicoADM.getDataIngresso() << " "
             << tecnicoADM.getNome() << " "
             << tecnicoADM.getCpf() << " "
             << tecnicoADM.getDataNascimento() << " "
             << tecnicoADM.getGenero() << " "
             << tecnicoADM.getRua() << " "
             << tecnicoADM.getNumero() << " "
             << tecnicoADM.getBairro() << " "
             << tecnicoADM.getCidade() << " "
             << tecnicoADM.getCep() << endl;
    }
}

// Função para deletar um Técnico ADM pelo número de matrícula
void BancoDAO::deletarTecnicoADM(string matricula)
{
    for (auto it = tecnicosADMvector.begin(); it != tecnicosADMvector.end(); ++it)
    {
        if (it->getMatricula() == matricula)
        {
            tecnicosADMvector.erase(it);
            break;
        }
    }
}

// Função para buscar um Técnico ADM pelo número de matrícula
void BancoDAO::buscarTecnicoADM(string matricula) const
{
    for (const TecnicoAdm &tecnicoADM : tecnicosADMvector)
    {
        if (tecnicoADM.getMatricula() == matricula)
        {
            cout << tecnicoADM.getAdicionalProdutividade() << " "
                 << tecnicoADM.getFuncaoDesempenhada() << " "
                 << tecnicoADM.getMatricula() << " "
                 << tecnicoADM.getSalario() << " "
                 << tecnicoADM.getDepartamento() << " "
                 << tecnicoADM.getCargaHoraria() << " "
                 << tecnicoADM.getDataIngresso() << " " << tecnicoADM.getNome()
                 << " " << tecnicoADM.getCpf() << " "
                 << tecnicoADM.getDataNascimento() << " " << tecnicoADM.getGenero()
                 << " " << tecnicoADM.getRua() << " " << tecnicoADM.getNumero()
                 << " " << tecnicoADM.getBairro() << " " << tecnicoADM.getCidade()
                 << " " << tecnicoADM.getCep() << endl;
            return;
        }
    }
}
