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

    int opcao;
    cout << "\t-----------------------------------" << endl;
    cout << "\t------Bem vindo ao SIS-IMDCorp------" << endl;
    cout << "\t-----------------------------------" << endl;

    do
    {
        cout << "Escolha uma opção: " << endl;
        cout << "1. Cadastrar Professor" << endl;
        cout << "2. Cadastrar TecnicoADM" << endl;
        cout << "3. Listar Professores" << endl;
        cout << "4. Listar Tecnicos ADM" << endl;
        cout << "5. Deletar Professor" << endl;
        cout << "6. Deletar Tecnico ADM" << endl;
        cout << "7. Buscar Professor" << endl;
        cout << "8. Buscar TecnicoADM" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
        {
            // Cadastrar Professor
            string nome, cpf, dataNascimento, genero, disciplina;
            int numero, matricula;
            string rua, bairro, cidade, cep;

            cout << "Informe os dados do Professor:" << endl;
            cout << "Nome: ";
            cin >> nome;
            cout << "CPF: ";
            cin >> cpf;
            cout << "Data de Nascimento: ";
            cin >> dataNascimento;
            cout << "Gênero: ";
            cin >> genero;
            cout << "Endereço:" << endl;
            cout << "Rua: ";
            cin >> rua;
            cout << "Número: ";
            cin >> numero;
            cout << "Bairro: ";
            cin >> bairro;
            cout << "Cidade: ";
            cin >> cidade;
            cout << "CEP: ";
            cin >> cep;
            cout << "Disciplina: ";
            cin >> disciplina;

            Endereco endereco;
            endereco.setRua(rua);
            endereco.setNumero(numero);
            endereco.setBairro(bairro);
            endereco.setCidade(cidade);
            endereco.setCep(cep);

            Professor::Formacao formacao = Professor::ESPECIALIZACAO; // ou escolha um valor adequado
            Professor novoProfessor(nome, cpf, dataNascimento, genero, formacao, disciplina, matricula);
            banco.cadastrarProfessor(novoProfessor);
            cout << "Professor cadastrado com sucesso!" << endl;
            break;
        }
            // case 2:
            // {
            //     // Cadastrar TecnicoADM
            //     string nome, cpf, dataNascimento, genero, funcao;
            //     int numero;
            //     string rua, bairro, cidade, cep;

            //     cout << "Informe os dados do TecnicoADM:" << endl;
            //     cout << "Nome: ";
            //     cin >> nome;
            //     cout << "CPF: ";
            //     cin >> cpf;
            //     cout << "Data de Nascimento: ";
            //     cin >> dataNascimento;
            //     cout << "Gênero: ";
            //     cin >> genero;
            //     cout << "Endereço:" << endl;
            //     cout << "Rua: ";
            //     cin >> rua;
            //     cout << "Número: ";
            //     cin >> numero;
            //     cout << "Bairro: ";
            //     cin >> bairro;
            //     cout << "Cidade: ";
            //     cin >> cidade;
            //     cout << "CEP: ";
            //     cin >> cep;
            //     cout << "Função: ";
            //     cin >> funcao;

            //     Endereco endereco;
            //     endereco.setRua(rua);
            //     endereco.setNumero(numero);
            //     endereco.setBairro(bairro);
            //     endereco.setCidade(cidade);
            //     endereco.setCep(cep);

            //     tecnicoAdm novoTecnico(nome, cpf, dataNascimento, genero, endereco, funcao);
            //     banco.cadastrarTecnicoADM(novoTecnico);
            //     cout << "TecnicoADM cadastrado com sucesso!" << endl;
            //     break;
            // }
            // case 3:
            //     // Listar Professores
            //     banco.listarProfessores();
            //     break;

            // case 4:
            //     // Listar TecnicosADM
            //     banco.listarTecnicosADM();
            //     break;

            // case 5:
            // {
            //     // Deletar Professor
            //     int matricula;
            //     cout << "Informe a matrícula do Professor a ser deletado: ";
            //     cin >> matricula;
            //     banco.deletarProfessor(matricula);
            //     cout << "Professor deletado com sucesso!" << endl;
            //     break;
            // }

            // case 6:
            // {
            //     // Deletar TecnicoADM
            //     int matricula;
            //     cout << "Informe a matrícula do TecnicoADM a ser deletado: ";
            //     cin >> matricula;
            //     banco.deletarTecnicoADM(matricula);
            //     cout << "TecnicoADM deletado com sucesso!" << endl;
            //     break;
            // }

            // case 7:
            // {
            //     // Buscar Professor
            //     int matricula;
            //     cout << "Informe a matrícula do Professor a ser buscado: ";
            //     cin >> matricula;
            //     banco.buscarProfessor(matricula);
            //     break;
            // }

            // case 8:
            // {
            //     // Buscar TecnicoADM
            //     int matricula;
            //     cout << "Informe a matrícula do TecnicoADM a ser buscado: ";
            //     cin >> matricula;
            //     banco.buscarTecnicoADM(matricula);
            //     break;
            // }

            // case 0:
            //     // Sair
            //     break;

            // default:
            //     cout << "Opção inválida.\n";
        }

    } while (opcao != 0);

    return 0;
}
