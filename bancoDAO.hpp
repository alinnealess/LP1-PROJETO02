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
    // Construtor que inicializa os vetores
    BancoDAO();
    
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
    void deletarProfessor(std::string matricula);
    void deletarTecnicoADM(std::string matricula);

    // Métodos para buscar professores e tecnicosADM
    void buscarProfessor(std::string matricula) const;
    void buscarTecnicoADM(std::string matricula) const;
};

#endif
