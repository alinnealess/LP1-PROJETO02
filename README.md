# Sistema de Gestão de Pessoas - SIS-IMDCorp
Sistema desenvolvido para segunda unidade da disciplina de Linguagem de Programação II do curso de Bacharelado em Tecnologia da Informação da UFRN.

## Descrição
Este é um sistema de gestão de pessoas desenvolvido em C++ para cadastrar, listar e gerenciar professores e técnicos administrativos.

## Estrutura do Projeto
O projeto está estruturado da seguinte maneira:

- `pessoa.hpp` e `pessoa.cpp`: Definição e implementação da classe base Pessoa.
- `endereco.hpp` e `endereco.cpp`: Definição e implementação da classe Endereco.
- `funcionario.hpp` e `funcionario.cpp`: Definição e implementação da classe base Funcionario, que herda de Pessoa.
- `professor.hpp` e `professor.cpp`: Definição e implementação da classe Professor, que herda de Funcionario.
- `tecnicoAdm.hpp` e `tecnicoAdm.cpp`: Definição e implementação da classe TecnicoAdm, que herda de Funcionario.
- `bancoDAO.hpp` e `bancoDAO.cpp`: Definição e implementação da classe BancoDAO, responsável por armazenar e gerenciar dados.

## Como Usar
1. Clone o repositório.
2. Compile os arquivos C++.
3. Execute o programa resultante.

O programa exibirá um menu interativo onde você pode cadastrar, listar e gerenciar professores e técnicos administrativos.

## Requisitos
- Compilador C++ compatível com C++11 ou superior.