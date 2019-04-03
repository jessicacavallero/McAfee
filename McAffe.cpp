#include "McAffe.h"
#include <string>

McAffe::McAffe( int numbinfectado )
{
    
    setBusca( numbinfectado );
    
}

McAffe::~McAffe()
{
}

 void McAffe::setBusca( int numbinfectado int pergunta int pergunta1 int pergunta2 int pergunta3 ){
     
     
     cout << "Você utiliza algum tipo de antivirus?\n?"
     cout << "1-Sim\n2-Nao";
     cin >> pergunta;
     
     
    switch (pergunta){
        
        case 1:
        
            cout << "Você utiliza senhas forte?\n";
            cout << "1-Sim\n0-Nao";
                cin >>resposta1;
                
            cout <<"Você tem cuidado quando abre e-mail ?\n";
            cout << "1-Sim\n0-Nao";
                cin >>resposta2;
                
            cout <<"Você sempre atualiza o seu sistema operacional ?\n";
            cout << "1-Sim\n0-Nao";
                cin >>resposta3;

            
                    numbinfectado= resposta1+resposta2+resposta3;
                
                
               if (numbinfectado == 3){
                   
                   cout << "Seu computador provalmente não esta infectado";
                   
               }else {
                   
                   cout << "Há um pequena possibilidade de seu computador ter um arquivo infectado";
                   
                   }
        
        break;
        
        
        
        case 2:
        
            cout << "Os programas padroes do deu computador estão funcionando ?\n ";
            cout << "1-Sim\n 0-Nao";
                cin >>resposta1;
                
            cout << "Seu computador está muito lento?\n";
            cout << "1-Sim\n 0-Nao";
                cin >>resposta2;
                
            cout << "Você recebe e mails e posts suspeitos em redes sociais ?\n"    
            cout << "1-Sim\n 0-Nao";
                cin >>resposta3;
                
            
                    numbinfectado= resposta1+resposta2+resposta3;
                    
             if (numbinfectado == 3){
                   
                   cout << "Seu computador provalmente esta infectado";
                   
               }else {
                   
                   cout << "Há uma grande possibilidade de seu computador ter pelo menos um arquivo infectado";
                   
                   }
            
        break;
        
    }
      }






