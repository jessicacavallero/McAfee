#include <stdio.h>
#include <iostream>
#include "McAffe.h"

using std::cout;
using std::cin;


int main(int argc, char **argv)
{
    
    cout << "Verifique a possibilidade do seu computador está infectado.\n"; 
    
    McAffe virus;
    McAffe nome;
    McAffe id;
    
    int pergunta;
    int resposta1;
    int resposta2;
    int resposta3;
    int atualizacao;
    
    
    
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
    
   
    
   
    std::cout << "Ajude-nos a atualizar o nosso banco de dados!\nVocê tem conhecimento sobre algum virus?  tiver adicione as informaçoes necessarias.\n";
    std::cout << "1-Atualizar\n";
    std::cout << "0-Sair\n";
    std::cin >> atualizacao;
    
    if (atualizacao == 1)
   {
         
            nome.adicionarVirus( atualizacao );
            
     
   }   

            id.adicionarVirus( idvirus );
    
    return 0;
    
}

