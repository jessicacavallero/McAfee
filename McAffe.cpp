#include "McAffe.h"
#include <string>

McAffe::McAffe( int numbinfectado )
{
    
    numbinfectado = 0;
    
}


McAffe::McAffe(  )
{
    
    
    
}



McAffe::~McAffe()
{
}

 void McAffe::verificarVirus( int numbinfectado  )
 {
      
     
     
     if (numbinfectado == 3)
         {
             cout << "Seu computador provalmente não esta infectado";
                   
               }else {
                   
                   cout << "Há um pequena possibilidade de seu computador ter um arquivo infectado";
                   
                   }
     
     
    
}

void McAffe::adicionarVirus( char nomedovirus )
{
    
 
    std::cout << " Qual é o nome do virus ?\n";
    std::cin >> nomedovirus;
    std::cout << " Obrigado ,pela sua ajuda , o virus '"<< nomedovirus << "' foi colocado no nosso banco de dados com sucesso!\n";

    
}
    
    
void McAffe::adicionarVirus( int idvirus )
{
    

    idvirus = rand();
    
    cout << " O ID do seu vírus é " << idvirus << ".";   
    
    
}





