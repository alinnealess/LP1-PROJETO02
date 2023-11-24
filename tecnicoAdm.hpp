#ifndef TECNICOADM_HPP
#define TECNICOADM_HPP

#include <string>
#include "funcionario.hpp"

class TecnicoAdm : public Funcionario, public Pessoa
{
private:
  float adicionalProdutividade = 0.25;
  std::string funcaoDesempenhada;

public:
  // Construtor padrão


  // Construtor parametrizado
   TecnicoAdm(float adicionalProdutividade, std::string funcaoDesenpenhada,
             std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso,
             std::string nome, std::string cpf, std::string dataNascimento,
             std::string genero, std::string rua, int numero,
             std::string bairro, std::string cidade, std::string cep);

  // Métodos getter e setter para o adicional de produtividade
  float getAdicionalProdutividade() const;
  void setAdicionalProdutividade(float adicional);

  // Métodos getter e setter para a função desempenhada
  std::string getFuncaoDesempenhada() const;
  void setFuncaoDesempenhada(std::string funcao);
};

#endif