#ifndef BANCODAO_HPP
#define BANCODAO_HPP


#include "professor.hpp"
#include "tecnicoAdm.hpp"
#include <vector>

class BancoDAO {
private:
    std::vector<Professor> professoresvector;
    std::vector<TecnicoAdm> tecnicosADMvector;

public:
    
    // Métodos para ler dados do arquivo
    void lerArquivoProfessores();
    void lerArquivoTecnicoAdm();

    // Métodos para salvar dados do arquivo
    void salvarArquivoProfessores();
    void salvarArquivoTecnicoAdm();

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
