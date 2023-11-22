#include "BancoDAO.hpp"
#include <iostream>

using namespace std;

void BancoDAO::cadastrarProfessor(Professor professor) {
    professores.push_back(professor);
}

void BancoDAO::listarProfessores() const {
    cout << "Lista de Professores:" << endl;
    for (const auto& professor : professores) {
        // Faça algo com os dados do professor (por exemplo, imprimir na tela)
    }
}

void BancoDAO::cadastrarTecnicoADM(const TecnicoAdm& tecnicoADM) {
    tecnicosADM.push_back(tecnicoADM);
}

void BancoDAO::listarTecnicosADM() const {
    std::cout << "Lista de TecnicosADM:" << std::endl;
    for (const auto& tecnicoADM : tecnicosADM) {
        // Faça algo com os dados do tecnicoADM (por exemplo, imprimir na tela)
    }
}

void BancoDAO::deletarProfessor(int matricula) {
    // Implemente a lógica para deletar um professor com base na matrícula
}

void BancoDAO::deletarTecnicoADM(int matricula) {
    // Implemente a lógica para deletar um tecnicoADM com base na matrícula
}

void BancoDAO::buscarProfessor(int matricula) const {
    // Implemente a lógica para buscar e exibir um professor com base na matrícula
}

void BancoDAO::buscarTecnicoADM(int matricula) const {
    // Implemente a lógica para buscar e exibir um tecnicoADM com base na matrícula
}
