#include "bancoDAO.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// ===Funções relacionadas a Professores===

void BancoDAO::lerArquivoProfessores()
{

    ifstream arquivo("professores.txt");
    if (!arquivo.is_open())
    {
        cout << "Erro ao abrir o arquivo de professores." << endl;
        return;
    }
    // Declaração de variáveis para armazenar os atributos do Professor
        string formacao, nivel, disciplina, matricula, departamento, dataIngresso, nome, cpf, dataNascimento, genero, rua, bairro, cidade, cep;
        float salario;
        int cargaHoraria, numero;
        string linha;
    while (getline(arquivo, linha))
    {
        // Leitura dos atributos do Professor do arquivo
        getline(arquivo, formacao);
        getline(arquivo, nivel);
        getline(arquivo, disciplina);
        getline(arquivo, matricula);
        arquivo >> salario;
        arquivo.ignore();

        getline(arquivo, departamento);
        arquivo >> cargaHoraria;
        arquivo.ignore();
        getline(arquivo, dataIngresso);

        getline(arquivo, nome);
        getline(arquivo, cpf);
        getline(arquivo, dataNascimento);
        getline(arquivo, genero);

        getline(arquivo, rua);
        arquivo >> numero;
        arquivo.ignore();
        getline(arquivo, bairro);
        getline(arquivo, cidade);
        getline(arquivo, cep);

        // Criação de um objeto Professor com os dados lidos e o adiciona ao vetor
        Professor professor(formacao, nivel, disciplina, matricula, salario, departamento, cargaHoraria, dataIngresso, nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep);

        professoresVector.push_back(professor);
    }
    arquivo.close(); // Fecha o arquivo após a leitura
}

void BancoDAO::cadastrarProfessor(const Professor &novoProfessor)
{
    professoresVector.push_back(novoProfessor);
    cout << "\n\t===Professor(a) cadastrado com sucesso!===\n"<< endl;
}

void BancoDAO::listarProfessores()
{
    for (const auto &professor : professoresVector)
    {
        cout << "\nFORMACAO: " << professor.getFormacao() << endl;
        cout << "NIVEL: " << professor.getNivel() << endl;
        cout << "DISCIPLINA: " << professor.getDisciplina() << endl;
        cout << "MATRICULA: " << professor.getMatricula() << endl;
        cout << "SALARIO: R$" << professor.getSalario() << endl;
        cout << "DEPARTAMENTO: " << professor.getDepartamento() << endl;
        cout << "CARGA HORARIA: " << professor.getCargaHoraria() << endl;
        cout << "DATA DE INGRESSO:" << professor.getDataIngresso() << endl;
        cout << "NOME: " << professor.getNome() << endl;
        cout << "CPF: " << professor.getCpf() << endl;
        cout << "GENERO: " << professor.getGenero() << endl;
        cout << "DATA DE NASCIMENTO: " << professor.getDataNascimento() << endl;
        cout << "RUA: " << professor.getRua() << endl;
        cout << "NUMERO:" << professor.getNumero() << endl;
        cout << "BAIRRO: " << professor.getBairro() << endl;
        cout << "CIDADE: " << professor.getCidade() << endl;
        cout << "CEP: " << professor.getCep() << endl;
        cout << "=====================================" << endl;
    }
}

void BancoDAO::buscarProfessor(int matricula)
{
    for (const auto &professor : professoresVector)
    {
        if (professor.getMatricula() == std::to_string(matricula))
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
        }
    }
}

void BancoDAO::deletarProfessor(int matricula)
{
    auto it = std::find_if(professoresVector.begin(), professoresVector.end(),
                           [matricula](const Professor &professor)
                           {
                               return professor.getMatricula() == std::to_string(matricula);
                           });

    if (it != professoresVector.end())
    {
        professoresVector.erase(it);
        std::cout << "Professor deletado com sucesso\n";
    }
}

void BancoDAO::salvarArquivoProfessores()
{
    ofstream arquivo("professores.txt"); 

    for (const auto &professor : professoresVector)
    {
        arquivo << professor.getFormacao() << "\n"
                << professor.getNivel() << "\n"
                << professor.getDisciplina() << "\n"
                << professor.getMatricula() << "\n"
                << std::to_string(professor.getSalario()) << "\n"
                << professor.getDepartamento() << "\n"
                << professor.getCargaHoraria() << "\n"
                << professor.getDataIngresso() << "\n"
                << professor.getNome() << "\n"
                << professor.getCpf() << "\n"
                << professor.getDataNascimento() << "\n"
                << professor.getGenero() << "\n"
                << professor.getRua() << "\n"
                << std::to_string(professor.getNumero()) << "\n"
                << professor.getBairro() << "\n "
                << professor.getCidade() << "\n "
                << professor.getCep() << endl;
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
void BancoDAO::cadastrarTecnicoADM(TecnicoAdm &novoTecnicoADM)
{
    tecnicosADMvector.push_back(novoTecnicoADM);
    cout << "\n\t===TecnicoADM cadastrado com sucesso!===\n"
         << endl;
}

// Função para listar todos os Técnicos ADM
void BancoDAO::listarTecnicosADM()
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
void BancoDAO::deletarTecnicoADM(int matricula)
{
    for (auto it = tecnicosADMvector.begin(); it != tecnicosADMvector.end(); ++it)
    {
        if (it->getMatricula() == to_string(matricula))
        {
            tecnicosADMvector.erase(it);
            break;
        }
    }
}

// Função para buscar um Técnico ADM pelo número de matrícula
void BancoDAO::buscarTecnicoADM(int matricula)
{
    for (const TecnicoAdm &tecnicoADM : tecnicosADMvector)
    {
        if (tecnicoADM.getMatricula() == to_string(matricula))
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
