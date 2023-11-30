#include "bancoDAO.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// ===Funções relacionadas a Professores===

void BancoDAO::lerArquivoProfessores()
{
    fstream arquivo;
    arquivo.open("professores.txt", ios::in); // Abre o arquivo em modo de leitura
    string linha;
    if (!arquivo.is_open())
    {
        cout << "Erro ao abrir o arquivo de professores." << endl;
        return; // Retorna se houver erro ao abrir o arquivo
    }

    while (getline(arquivo, linha))
    {
        // Declaração de variáveis para armazenar os atributos do Professor
        string formacao, nivel, disciplina, matricula, departamento, dataIngresso, nome, cpf, dataNascimento, genero, rua, bairro, cidade, cep;
        float salario;
        int cargaHoraria, numero;

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

void BancoDAO::cadastrarProfessor(Professor novoProfessor)
{  
    professoresVector.push_back(novoProfessor);
    cout << "\n\t===Professor(a) cadastrado com sucesso!===\n" << endl;
}

void BancoDAO::listarProfessores()
{
    for (Professor professor : professoresVector)
    {
        cout <<"NOME: "<< professor.getNome() << endl;
        cout <<"CPF: "<< professor.getCpf() << endl;
        cout <<"MATRICULA: "<< professor.getMatricula() << endl;
        cout <<"SALARIO: R$"<< professor.getSalario() << endl;
        cout <<"DEPARTAMENTO: "<< professor.getDepartamento() << endl;
        cout <<"CARGA HORARIA: "<< professor.getCargaHoraria() << endl;
        cout <<"DATA DE INGRESSO:"<< professor.getDataIngresso() << endl;
        cout <<"GENERO: "<< professor.getGenero() << endl;
        cout <<"RUA: "<< professor.getRua() << endl;
        cout <<"NUMERO:"<< professor.getNumero() << endl;
        cout <<"BAIRRO: "<< professor.getBairro() << endl;
        cout <<"CIDADE: "<< professor.getCidade() << endl;
        cout <<"CEP: "<< professor.getCep() << endl;
        cout <<"NIVEL: "<< professor.getNivel() << endl;
        cout <<"DISCIPLINA: "<< professor.getDisciplina() << endl;
        cout <<"DATA DE NASCIMENTO: "<< professor.getDataNascimento() << endl;
    }
}

void BancoDAO::buscarProfessor(int matricula)
{
    for (int i = 0; i < professoresVector.size(); i++)
    {
        if (professoresVector[i].getMatricula() == to_string(matricula))
        {
            cout << professoresVector[i].getNome() << endl;
            cout << professoresVector[i].getCpf() << endl;
            cout << professoresVector[i].getMatricula() << endl;
            cout << professoresVector[i].getSalario() << endl;
            cout << professoresVector[i].getDepartamento() << endl;
            cout << professoresVector[i].getCargaHoraria() << endl;
            cout << professoresVector[i].getDataIngresso() << endl;
            cout << professoresVector[i].getGenero() << endl;
            cout << professoresVector[i].getRua() << endl;
            cout << professoresVector[i].getNumero() << endl;
            cout << professoresVector[i].getBairro() << endl;
            cout << professoresVector[i].getCidade() << endl;
            cout << professoresVector[i].getCep() << endl;
            cout << professoresVector[i].getNivel() << endl;
            cout << professoresVector[i].getDisciplina() << endl;
            cout << professoresVector[i].getDataNascimento() << endl;
            cout << endl;
        }
    }
}

void BancoDAO::deletarProfessor(int matricula)
{
    for (int i = 0; i < professoresVector.size(); i++)
    {
        if (professoresVector[i].getMatricula() == to_string(matricula))
        {
            professoresVector.erase(professoresVector.begin() + i);
            cout << "Professor deletado com sucesso" << endl;
            break;
        }
    }
}

void BancoDAO::salvarArquivoProfessores()
{
    fstream arquivo;
    arquivo.open("professores.txt", ios::out);
    for (Professor novoprofessor : professoresVector)
    {
        arquivo << novoprofessor.getFormacao() << "\n"
                << novoprofessor.getNivel() << "\n"
                << novoprofessor.getDisciplina() << "\n"
                << novoprofessor.getMatricula() << "\n"
                << std::to_string(novoprofessor.getSalario()) << "\n"
                << novoprofessor.getDepartamento() << "\n"
                << novoprofessor.getCargaHoraria() << "\n"
                << novoprofessor.getDataIngresso() << "\n"
                << novoprofessor.getNome() << "\n"
                << novoprofessor.getCpf() << "\n"
                << novoprofessor.getDataNascimento() << "\n"
                << novoprofessor.getGenero() << "\n"
                << novoprofessor.getRua() << "\n"
                << std::to_string(novoprofessor.getNumero()) << "\n"
                << novoprofessor.getBairro() << "\n "
                << novoprofessor.getCidade() << "\n "
                << novoprofessor.getCep() << endl;
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
