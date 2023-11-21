#ifndef TECNICOADM_HPP
#define TECNICOADM_HPP


#include <string>
#include "funcionario.hpp"

class TecnicoAdm : public Funcionario
{
private:
  float adicionalProdutividade = 0.25;
  std::string funcaoDesempenhada;

public:
  // Construtor padrão
  TecnicoAdm(); 

  // Construtor parametrizado
  TecnicoAdm(float adicional, const std::string &funcao);

  // Métodos getter e setter para o adicional de produtividade
  float getAdicionalProdutividade() const;
  void setAdicionalProdutividade(float adicional);

  // Métodos getter e setter para a função desempenhada
  const std::string &getFuncaoDesempenhada() const;
  void setFuncaoDesempenhada(const std::string &funcao);
};

#endif