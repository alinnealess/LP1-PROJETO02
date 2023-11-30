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
  //Construtor padrão
  Pessoa(){};
  
  //Construtor parametrizado
  Pessoa(std::string nome, std::string cpf, std::string dataNascimento, std::string genero,
         std::string rua, int numero, std::string bairro, std::string cidade, std::string cep);
     

  // Métodos getters
  std::string getNome() const;
  std::string getCpf() const;
  std::string getDataNascimento() const;
  std::string getGenero() const;

  // Métodos setters
  void setNome(std::string nome);
  void setCpf(std::string cpf);
  void setDataNascimento(std::string dataNascimento);
  void setGenero(std::string genero);
};

#endif
