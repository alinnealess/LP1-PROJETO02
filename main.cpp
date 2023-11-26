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
    BancoDAO banco;
    banco.lerArquivoProfessores(); 
    banco.lerArquivoTecnicoAdm();

    int opcao;
    cout << "\t-----------------------------------" << endl;
    cout << "\t-----------------------------------" << endl;
    cout << "\t------Bem-vindo ao SIS-IMDCorp------" << endl;
    cout << "\t-----------------------------------" << endl;
    cout << "\t-----------------------------------\n"
         << endl;

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
            cin >> nome;
            cout << "CPF: ";
            cin >> cpf;
            cout << "Data de Nascimento: ";
            cin >> dataNascimento;
            cout << "Genero: ";
            cin >> genero;

            cout << "\n--Endereco--" << endl;
            cout << "Rua: ";
            cin >> rua;
            cout << "Numero: ";
            cin >> numero;
            cout << "Bairro: ";
            cin >> bairro;
            cout << "Cidade: ";
            cin >> cidade;
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

            cout << "Formacao: ";
            cin >> formacao;
            cout << "Nivel: ";
            cin >> nivel;
            cout << "Disciplina: ";
            cin >> disciplina;

            //Endereco endereco(rua, numero, bairro, cidade, cep);
            Professor novoProfessor(formacao, nivel, disciplina,
                matricula, salario, departamento, cargaHoraria, dataIngresso,
                nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep);

            banco.cadastrarProfessor(novoProfessor);
            cout << "\n\tProfessor cadastrado com sucesso!\n"
                 << endl;

            break;
        }
        case 2:
        {
            // Cadastrar TecnicoADM
            // string nome, cpf, dataNascimento, genero, funcao;
            // int numero;
            // string rua, bairro, cidade, cep;
            // float adicional;

            // cout << "\t\n--Informe os dados do TecnicoADM--" << endl;
            // cout << "Nome: ";
            // cin >> nome;
            // cout << "CPF: ";
            // cin >> cpf;
            // cout << "Data de Nascimento: ";
            // cin >> dataNascimento;
            // cout << "Genero: ";
            // cin >> genero;
            // cout << "--Endereco--" << endl;
            // cout << "Rua: ";
            // cin >> rua;
            // cout << "Numero: ";
            // cin >> numero;
            // cout << "Bairro: ";
            // cin >> bairro;
            // cout << "Cidade: ";
            // cin >> cidade;
            // cout << "CEP: ";
            // cin >> cep;
            // cout << "Funcao: ";
            // cin >> funcao;

            // Endereco endereco;
            // endereco.setRua(rua);
            // endereco.setNumero(numero);
            // endereco.setBairro(bairro);
            // endereco.setCidade(cidade);
            // endereco.setCep(cep);

            // TecnicoAdm novoTecnico(adicional, funcao);
            // banco.cadastrarTecnicoADM(novoTecnico);
            // cout << "\t\nTecnicoADM cadastrado com sucesso!\n"
            //      << endl;
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
            // Sair
            break;

        default:
            cout << "Opção invalida.\n";
        }
        banco.salvarArquivoProfessores();
        banco.salvarArquivoTecnicoAdm();
    } while (opcao != 0);

    return 0;
}
