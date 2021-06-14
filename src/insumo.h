#ifndef INSUMO_H
#define INSUMO_H

#include "inputInvalidoException.h"
#include <iostream>
#include <fstream>
#include <vector>

class Insumo {
    
    protected:
        std::string nome;
        std::string fabricante;
        std::string dataDeValidade;
        std::string descricao;

        int estoque = 0;
        int tipo;
        float valor;

        InputInvalidoException e = InputInvalidoException();
        
    public:
        ~Insumo();

        void setNome(std::string);
        void setFabricante(std::string);
        void setDataDeValidade(std::string);
        void setDescricao(std::string);
        void setEstoque(int);
        void setTipo(int);
        void setValor(float);

        std::string getNome();
        std::string getFabricante();
        std::string getDataDeValidade();
        std::string getDescricao();
        int getEstoque();
        int getTipo();
        float getValor();

        virtual void cadastraAtributos(); //Cadastra informações em comum a todos os tipos de insumos
        virtual void exibeInformacoes(); //Exibe informações em comum a todos os tipos
        virtual void salvarDados(std::string); // Salva os dados dos tipos em arquivos
        virtual void coletaDados(std::vector <std::string>); // Coleta os dados dos arquivos
    
};

#endif