#ifndef ENDERECO_HPP
#define ENDERECO_HPP

#include <string>

class Endereco
{
private:
  std::string rua;
  int numero;
  std::string bairro;
  std::string cidade;
  std::string cep;

public:

Endereco::Endereco(){}

// Construtor parametrizado
  Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string cep);

  // Métodos getters e setters
  std::string getRua() const;
  int getNumero() const;
  std::string getBairro() const;
  std::string getCidade() const;
  std::string getCep() const;

  // Métodos setters
  void setRua(std::string rua);
  void setNumero(int numero);
  void setBairro(std::string bairro);
  void setCidade(std::string cidade);
  void setCep(std::string cep);
};

#endif