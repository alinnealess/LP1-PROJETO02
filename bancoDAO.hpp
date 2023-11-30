#ifndef BANCODAO_HPP
#define BANCODAO_HPP

#include "funcionario.hpp"
#include "professor.hpp"
#include "tecnicoAdm.hpp"
#include <vector>

class BancoDAO
{
private:
    std::vector<Professor> professoresVector;
    std::vector<TecnicoAdm> tecnicosADMvector;

public:
 
    // ######Professores#########
    //  Métodos para ler dados do arquivo
    void lerArquivoProfessores();
    void salvarArquivoProfessores(); // Métodos para salvar dados do arquivo
    void cadastrarProfessor(Professor novoProfessor); // Métodos para cadastrar professores
    void listarProfessores(); // Métodos para listar professores
    void deletarProfessor(int matricula);// Métodos para deletar professores e tecnicosADM
    void buscarProfessor(int matricula); // Métodos para buscar professores e tecnicosADM


    // ######Tecnicos Administrativos######
    void lerArquivoTecnicoAdm(); //Métodos para ler dados do arquivo
    void salvarArquivoTecnicoAdm(); //Métodos para salvar dados do arquivo
    void cadastrarTecnicoADM(TecnicoAdm& novoTecnicoADM); //Métodos para cadastrar tecnicosADM
    void listarTecnicosADM(); // Métodos para listar tecnicosADM
    void deletarTecnicoADM(int matricula); //Métodos para deletar professores e tecnicosADM
    void buscarTecnicoADM(int matricula); //Métodos para buscar professores e tecnicosADM
};

#endif
