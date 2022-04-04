#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

class Operacao{
    public:
        void cadastro(string nome, string senha, string email, string nivel){
            cout<< "Cadastro de usuario realizado\n";

        }

        string login(string nome, string senha){
            return "\nSeja bem vindo!\n";

        }
        string trocarSenha(string nome, string senha){
            return "\nSenha alterada\n";
        }
};