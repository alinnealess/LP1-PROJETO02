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
    cout << "\t-----------------------------------" << endl;
    cout << "\t-----------------------------------" << endl;
    cout << "\t------Bem-vindo ao SIS-IMDCorp-----" << endl;
    cout << "\t-----------------------------------" << endl;
    cout << "\t-----------------------------------\n"
         << endl;

    // Loop principal do programa
    do
    {
        cout << "1. Cadastrar Professor" << endl;
        cout << "2. Cadastrar TecnicoADM" << endl;
        cout << "3. Listar Professores" << endl;
        cout << "4. Listar Tecnicos ADM" << endl;
        cout << "5. Deletar Professor" << endl;
        cout << "6. Deletar Tecnico ADM" << endl;
        cout << "7. Buscar Professor" << endl;
        cout << "8. Buscar TecnicoADM" << endl;
        cout << "0. Sair" << endl;
        cout << "\nEscolha uma opcao: ";
        cin >> opcao;

        // Switch para processar a escolha do usuário
        switch (opcao)
        {
        case 1:
        {
            // Cadastrar Professor
            // Solicita informações do usuário
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
            cout << "Salario: ";
            cin >> salario;
            cout << "Departamento: ";
            cin >> departamento;
            cout << "Carga Horaria: ";
            cin >> cargaHoraria;

            cout << "Formacao [GRADUACAO = 1, ESPECIALIZACAO = 2, MESTRADO = 3, DOUTORADO = 4]" << endl;
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
cout << "Matricula: " << novoProfessor.getMatricula() << endl;
cout << "Salario: " << novoProfessor.getSalario() << endl;
cout << "Departamento: " << novoProfessor.getDepartamento() << endl;
cout << "Carga Horaria: " << novoProfessor.getCargaHoraria() << endl;
            break;
        }
        case 2:
        {
            // Cadastrar TecnicoADM
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

            cout << "\t\n--Informe os dados do TecnicoADM--" << endl;
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
            cout << "Funcao Desempenhada: ";
            cin.ignore();
            getline(cin, funcaoDesempenhada);
            cout << "Matricula: ";
            cin >> matricula;
            cout << "Salario: ";
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
            // Listar Professores
            banco.listarProfessores();
            break;

        case 4:
            // Listar TecnicosADM
            banco.listarTecnicosADM();
            break;

        case 5:
        {
            // Deletar Professor
            string matricula;
            cout << "Informe a matricula do Professor a ser deletado: ";
            cin >> matricula;
            banco.deletarProfessor(matricula);
            cout << "Professor deletado com sucesso!" << endl;
            break;
        }

        case 6:
        {
            // Deletar TecnicoADM
            string matricula;
            cout << "Informe a matricula do TecnicoADM a ser deletado: ";
            cin >> matricula;
            banco.deletarTecnicoADM(matricula);
            cout << "TecnicoADM deletado com sucesso!" << endl;
            break;
        }

        case 7:
        {
            // Buscar Professor
            string matricula;
            cout << "Informe a matricula do Professor a ser buscado: ";
            cin >> matricula;
            banco.buscarProfessor(matricula);
            break;
        }

        case 8:
        {
            // Buscar TecnicoADM
            string matricula;
            cout << "Informe a matricula do TecnicoADM a ser buscado: ";
            cin >> matricula;
            banco.buscarTecnicoADM(matricula);
            break;
        }

        case 0:
            // Sair
            break;

        default:
            cout << "Opção invalida.\n";
        }

        // Salva alterações no arquivo após cada operação
        banco.salvarArquivoProfessores();
        banco.salvarArquivoTecnicoAdm();

    } while (opcao != 0);

    return 0;
}
