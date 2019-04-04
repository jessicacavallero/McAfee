#include <stdio.h>
#include <iostream>
#include "McAffe.h"

using std::cout;
using std::cin;


int main(int argc, char **argv)
{
    
    cout << "Verifique a possibilidade do seu computador está infectado.\n"; << enld
    
    McAffe virus;
    
    int pergunta;
    int resposta1;
    int resposta2;
    int resposta3;
    
    
    cout << "Você utiliza algum tipo de antivirus?\n";
     cout << "1-Sim\n2-Nao\n";
     cin >> pergunta;
    
    switch (pergunta){
        
        case 1:
        
            cout << "Você utiliza senhas forte?\n";
            cout << "1-Sim\n0-Nao\n";
                cin >>resposta1;
                
            cout <<"Você tem cuidado quando abre e-mail?\n";
            cout << "1-Sim\n0-Nao\n";
                cin >>resposta2;
                
            cout <<"Você sempre atualiza o seu sistema operacional?\n";
            cout << "1-Sim\n0-Nao\n";
                cin >>resposta3;

            virus.verificarVirus( resposta1 + resposta2 + resposta3 );
            
                     
                
                
               
        
        break;
        
        
        
        case 2:
        
            cout << "Os programas padroes do deu computador estão funcionando?\n ";
            cout << "1-Sim\n 0-Nao\n";
                cin >>resposta1;
                
            cout << "Seu computador está muito lento?\n";
            cout << "1-Sim\n 0-Nao\n";
                cin >>resposta2;
                
            cout << "Você recebe e mails e posts suspeitos em redes sociais?\n";    
            cout << "1-Sim\n 0-Nao\n";
                cin >>resposta3;
                
            
             virus.verificarVirus( resposta1 + resposta2 + resposta3 );
                    
             
            
        break;
        
    }
    
    return 0;
    
}
