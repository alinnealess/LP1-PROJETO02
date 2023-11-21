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
  // Construtor padrão
  Endereco() {}

  std::string getRua() const;
  void setRua(const std::string &value);

  int getNumero() const;
  void setNumero(int value);

  std::string getBairro() const;
  void setBairro(const std::string &value);

  std::string getCidade() const;
  void setCidade(const std::string &value);

  std::string getCep() const;
  void setCep(const std::string &value);
};

#endif