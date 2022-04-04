#include <iostream>
#include "usuario.h"
#include "operacao.h"
int main(){
    system("clear");
    
    Usuario us;

    Operacao op;
        
    us.nome = "John";
    us.email = "maria@yahoo.com";
    us.senha = "123";
    us.nivel = "Adm";
    op.cadastro(us.nome, us.senha, us.email, us.nivel);


    return 0;
}