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
    // Métodos para ler e salvar dados do arquivo
    void lerArquivoProfessores();
    void salvarArquivoProfessores();
    void lerArquivoTecnicoAdm();
    void salvarArquivoTecnicoAdm();

    // Métodos para cadastrar, listar, deletar e buscar professores
    void cadastrarProfessor(const Professor& novoProfessor);
    void listarProfessores();
    void deletarProfessor(int matricula);
    void buscarProfessor(int matricula);

    // Métodos para cadastrar, listar, deletar e buscar técnicos administrativos
    void cadastrarTecnicoADM(TecnicoAdm& novoTecnicoADM);
    void listarTecnicosADM();
    void deletarTecnicoADM(int matricula);
    void buscarTecnicoADM(int matricula);
};

#endif
