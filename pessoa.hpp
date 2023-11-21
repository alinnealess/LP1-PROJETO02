#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>
#include "endereco.hpp"

class Pessoa : public Endereco
{
private:
  std::string nome;
  std::string cpf;
  std::string dataNascimento;
  std::string genero;
  Endereco endereco;

public:
  // Construtor padrão
  Pessoa() {}

  // Construtor parametrizado
  Pessoa(const std::string &nome, const std::string &cpf, const std::string &dataNascimento, const std::string &genero, const Endereco &endereco);

  // Métodos getter e setter para o atributo 'nome'
  const std::string &getNome() const;
  void setNome(const std::string &nome);

  // Métodos getter e setter para o atributo 'cpf'
  const std::string &getCPF() const;
  void setCPF(const std::string &cpf);

  // Métodos getter e setter para o atributo 'dataNascimento'
  const std::string &getDataNascimento() const;
  void setDataNascimento(const std::string &dataNascimento);

  // Métodos getter e setter para o atributo 'genero'
  const std::string &getGenero() const;
  void setGenero(const std::string &genero);

  // Métodos getter e setter para o atributo 'endereco'
  const Endereco &getEndereco() const;
  void setEndereco(const Endereco &endereco);

  // Destrutor virtual
  virtual ~Pessoa() = default;
};

#endif
