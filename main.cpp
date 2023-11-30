#include <iostream>
#include "pessoa.hpp"
#include "endereco.hpp"
#include "bancoDAO.hpp"
#include "professor.hpp"
#include "funcionario.hpp"
#include "tecnicoAdm.hpp"

using namespace std;

int main()
{
    // Cria uma instância da classe BancoDAO para gerenciar o banco de dados
    BancoDAO banco;

    // Lê os dados dos professores e técnicos administrativos do arquivo
    banco.lerArquivoProfessores();
    banco.lerArquivoTecnicoAdm();

    int opcao;
    cout << "\n===================================" << endl;
    cout << "=---------------------------------=" << endl;
    cout << "=---- Bem-vindo ao SIS-IMDCorp ---=" << endl;
    cout << "=---------------------------------=" << endl;
    cout << "===================================" << endl;

    // Loop principal do programa
    do
    {
        cout << "\n\t=== MENU PRINCIPAL ===" << endl;
        cout << "\n\t1. Cadastrar Professor" << endl;
        cout << "\t2. Cadastrar TecnicoADM" << endl;
        cout << "\t3. Listar Professores" << endl;
        cout << "\t4. Listar Tecnicos ADM" << endl;
        cout << "\t5. Deletar Professor" << endl;
        cout << "\t6. Deletar Tecnico ADM" << endl;
        cout << "\t7. Buscar Professor" << endl;
        cout << "\t8. Buscar TecnicoADM" << endl;
        cout << "\t0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        // Switch para processar a escolha do usuário
        switch (opcao)
        {
        case 1:
        {
             // Cadastrar Professor
            string nome, cpf, dataNascimento, genero, departamento, dataIngresso, matricula;
            int numero, cargaHoraria;
            string rua, bairro, cidade, cep;
            string formacao, nivel, disciplina;
            float salario;

            cout << "\t\n--Informe os dados do Professor--" << endl;
            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);
            cout << "CPF: ";
            cin >> cpf;
            cout << "Data de Nascimento [xx.xx.xxxx]: ";
            cin >> dataNascimento;
            cout << "Genero [Feminino = F, Masculino = M] " << endl;
            cout << "Genero: ";
            cin >> genero;

            cout << "\n--Endereco--" << endl;
            cout << "Rua: ";
            cin.ignore();
            getline(cin, rua);
            cout << "Numero: ";
            cin >> numero;
            cout << "Bairro: ";
            cin.ignore();
            getline(cin, bairro);
            cout << "Cidade: ";
            cin.ignore();
            getline(cin, cidade);
            cout << "CEP: ";
            cin >> cep;

            cout << "Matricula: ";
            cin >> matricula;
            cout << "Salario: R$ ";
            cin >> salario;
            cout << "Departamento: ";
            cin >> departamento;
            cout << "Carga Horaria: ";
            cin >> cargaHoraria;
            cout << "Data Ingresso [xx.xx.xxxx]: ";
            cin >> dataIngresso;

            cout << "Formacao [ESPECIALIZACAO = 1, MESTRADO = 2, DOUTORADO = 3]" << endl;
            cout << "Formacao: ";
            cin >> formacao;
            cout << "Nivel [I = 1, II = 2, III = 3, IV = 4, V = 5, VI = 6, VII = 7, VIII = 8]" << endl;
            cout << "Nivel: ";
            cin >> nivel;
            cout << "Disciplina: ";
            cin.ignore();
            getline(cin, disciplina);

            // Cria um novo objeto Professor com os dados fornecidos
            Professor novoProfessor(formacao, nivel, disciplina,
                                    matricula, salario, departamento, cargaHoraria, dataIngresso,
                                    nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep);

            // Adiciona o novo professor ao banco de dados
            banco.cadastrarProfessor(novoProfessor);

            break;
        }
        case 2:
        {
            // Cadastrar TecnicoADM
            float adicionalProdutividade, salario;
            string funcaoDesempenhada, matricula;
            string departamento;
            string dataIngresso;
            string nome, cpf, dataNascimento, genero;
            string rua, bairro, cidade, cep;
            int cargaHoraria, numero;

            cout << "\t\n--Informe os dados do TecnicoADM--" << endl;
            cout << "Nome: ";
            getline(cin, nome);
            cout << "CPF: ";
            getline(cin, cpf);
            cout << "Data de Nascimento [xx.xx.xxxx]: ";
            getline(cin, dataNascimento);
            cout << "Genero [Feminino = F, Masculino = M] " << endl;
            cout << "Genero: ";
            getline(cin, genero);

            cout << "\n--Endereco--" << endl;
            cout << "Rua: ";
            cin.ignore();
            getline(cin, rua);
            cout << "Numero: ";
            cin >> numero;
            cout << "Bairro: ";
            cin.ignore();
            getline(cin, bairro);
            cout << "Cidade: ";
            cin.ignore();
            getline(cin, cidade);
            cout << "CEP: ";
            getline(cin, cep);
            cout << "Funcao Desempenhada: ";
            cin.ignore();
            getline(cin, funcaoDesempenhada);
            cout << "Matricula: ";
            cin >> matricula;
            cout << "Salario: R$";
            cin >> salario;
            cout << "Departamento: ";
            cin >> departamento;
            cout << "Carga Horaria: ";
            cin >> cargaHoraria;

            // Cria um novo objeto TecnicoADM com os dados fornecidos
            TecnicoAdm novoTecnicoADM(adicionalProdutividade, funcaoDesempenhada,
                                      matricula, salario, departamento, cargaHoraria, dataIngresso,
                                      nome, cpf, dataNascimento,
                                      genero, rua, numero,
                                      bairro, cidade, cep);
            // Adiciona o novo tecnicoADM ao banco de dados
            banco.cadastrarTecnicoADM(novoTecnicoADM);
            break;
        }

        case 3:
        { // Listar Professores
            banco.listarProfessores();
            break;
        }

        case 4:
        { // Listar TecnicosADM
            banco.listarTecnicosADM();
            break;
        }

        case 5:
        {
            // Deletar Professor
            int matricula;
            cout << "Informe a matricula do Professor a ser deletado: ";
            cin >> matricula;
            banco.deletarProfessor(matricula);
            cout << "Professor deletado com sucesso!" << endl;
            break;
        }

        case 6:
        {
            // Deletar TecnicoADM
            int matricula;
            cout << "Informe a matricula do TecnicoADM a ser deletado: ";
            cin >> matricula;
            banco.deletarTecnicoADM(matricula);
            cout << "TecnicoADM deletado com sucesso!" << endl;
            break;
        }

        case 7:
        {
            // Buscar Professor
            int matricula;
            cout << "Informe a matricula do Professor a ser buscado: ";
            cin >> matricula;
            banco.buscarProfessor(matricula);
            break;
        }

        case 8:
        {
            // Buscar TecnicoADM
            int matricula;
            cout << "Informe a matricula do TecnicoADM a ser buscado: ";
            cin >> matricula;
            banco.buscarTecnicoADM(matricula);
            break;
        }

        case 0:
        { // Sair
            break;
        }
        }

        // Salva alterações no arquivo após cada operação
        banco.salvarArquivoProfessores();
        banco.salvarArquivoTecnicoAdm();

    } while (opcao != 0);

    cout << "\n\t===============================" << endl;
    cout << "\t=======Sistema Encerrado=======" << endl;
    cout << "\t===============================" << endl;

    return 0;
}
