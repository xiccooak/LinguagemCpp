/* Programa para trabalhar com a orientação objeto.
Usando classe e objetos */

#include <iostream>


/* Chamada da biblioteca std */

using std::cout;
using std::cin;

class Textos{
    public:
    void mensagem1(){
        cout << "\nolá!\n.";
    }

    void mensagem2(){
        cout << "Bom dia!";
        
    }
};
int main(){
    Textos txt;

    txt.mensagem1();
    txt.mensagem2();

    return 0;

}