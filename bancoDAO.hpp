#ifndef BANCODAO_HPP
#define BANCODAO_HPP

#include <vector>
#include "professor.hpp"
#include "tecnicoAdm.hpp"

class BancoDAO {
private:
    std::vector<Professor> professores;
    std::vector<TecnicoAdm> tecnicosADM;

public:
    
    // Métodos para ler dados do arquivo
    void lerArquivoFuncionarios();

    // Métodos para salvar dados do arquivo
    void salvarArquivoFuncionarios();

    // Métodos para cadastrar e listar professores
    void cadastrarProfessor(Professor professor);
    void listarProfessores() const;

    // Métodos para cadastrar e listar tecnicosADM
    void cadastrarTecnicoADM(TecnicoAdm tecnicoADM);
    void listarTecnicosADM() const;

    // Métodos para deletar professores e tecnicosADM
    void deletarProfessor(int matricula);
    void deletarTecnicoADM(int matricula);

    // Métodos para buscar professores e tecnicosADM
    void buscarProfessor(int matricula) const;
    void buscarTecnicoADM(int matricula) const;
};

#endif
