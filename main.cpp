

#include "McAffe.h"
#include "Virus.h"
#include "Assinante.h"

static const string NAME ;

//Classes:

class McAffe;
using std::cout;
using std::cin;
using std::string;

class Virus;
using std::cout;
using std::cin;
using std::string;

class Assinante;
using std::cout;
using std::cin;
using std::string;


 
int main(int argc, char **argv)
{
	Virus *listaVirus = 0;
	int  quantityVirus = 0;
	string nameVirus;
	
	Assinante *listaUsuario = 0;
	int quantityUser = 0;
	string nameUser;
	
	
	McAffe antivirus;
	McAffe usuario;
	
	
    cout << "                 B E M  -  V I N D O  \n\n";
	cout << "                       A O  \n\n";
	cout << "                   M C A F F E      \n\n";
	cout << "\n";
	cout << "      Segurança cibernética do dispositivo à nuvem\n";
	cout << "\n";
	
	
	
    cout << "Verifique a possibilidade do seu computador está infectado.\n"; 
	
    int pergunta;
    int resposta1;
    int resposta2;
    int resposta3;
	int cadas;   
	int vivi; 
   
   cout << "\n"; 
    
    cout << "Você utiliza algum tipo de antivirus?\n";
     cout << "1-Sim\n2-Nao\n";
     cin >> pergunta;
    
switch (pergunta)
{
        
case 1:
        
            cout << "Você utiliza senhas forte?\n";
            cout << "1-Sim\n0-Nao\n";
                cin >>resposta1;
                
				cout << "\n";
				
            cout <<"Você tem cuidado quando abre e-mail?\n";
            cout << "1-Sim\n0-Nao\n";
                cin >>resposta2;
				
				cout << "\n";
				
	        cout <<"Você sempre atualiza o seu sistema operacional?\n";
            cout << "1-Sim\n0-Nao\n";
                cin >>resposta3;
				
				cout << "\n";					

					antivirus.verificarVirus( resposta1 + resposta2 + resposta3 );
			
			cout << "Se junte a nòs .Você deseja fazer seu cadastro? \n";
	        cout << "1- SIM\n";
			cout << "2-NÃO\n";
			 cin >> cadas;
			 
			
			  switch ( cadas )
			 {
				 case 1 : 
				 cout << "Quantos usuarios você deseja cadastrar ?\n";
					cin >> quantityUser;
					
					for( int i =0; i < quantityUser; i++)
	               {
						cout << "Entre com o nome do novo usuario \n " ;
							cin >> nameUser;
						Assinante user ( nameUser );
						usuario.addUser( user );
		
					}
	
				 break;
				 
				 case 2 :
				 
				 cout << "\n";
				 cout << " Poxa , espero que você consiga se virar sozinho nesse mundo cheio de monstros que é a internet ";
				 cout << "\n";
				 
				 break;

			 }
			 

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
                
            antivirus.verificarVirus( resposta1 + resposta2 + resposta3 );
			
				cout << "Se junte a nòs .Faça seu cadastro\n";
			cout << "Escolha :\n";
			cout << "1- SIM\n";
			cout << "2-NÃO\n";
			 cin >> cadas;
			 
			
			  switch ( cadas )
			 {
				 case 1 : 
				 cout << "Quantos usuarios você deseja cadastrar ?\n";
					cin >> quantityUser;
					
					for( int i =0; i < quantityUser; i++)
	               {
						cout << "Entre com o nome do novo usuario \n " ;
							cin >> nameUser;
						Assinante user ( nameUser );
						usuario.addUser( user );
		
					}
	
				 break;
				 
				 case 2 :
				 break;

			 }
			 
break;
        
}
    
   
		cout <<   "Voce pode ajudar a nosso antivirus , quer saber como ? \n";
		cout <<   "É simples , é só você adicionar um ou mais vírus no nosso banco de dados \n";
		cout <<   "Voce aceita ?\n ";
		cout << "\n";
		cout  <<  " 1-SIM\n";
		cout  <<  "2-NÃO\n";
		 cin >> vivi;
		 
		 switch (vivi)
		 {
			 case 1 :
			 
			    cout << "Quantos vírus você deseja cadastrar ?\n";
					cin >> quantityVirus;
					
					for( int i =0; i < quantityVirus; i++)
	                {
							cout << "Escreva o nome do virus\n";
								cin >> nameVirus;
							Virus virus( nameVirus );
							antivirus.adicionarVirus( virus );
		
	                 }
					
					
					break;
					
					case 2 :
					{
						
					}
					break;
	
		 }
		 
		 antivirus.printVirus( );
		cout  <<"Os dados que você adicionou foi" ;
		antivirus.printVirus( ) ;
	   cout << "\n";
		cout << "\n";
		
		antivirus.infoMcAffe();
		
		 
		 cout << "\n";
		 cout << "\n";
	     cout << "Projeto criado por " << NAME << "\n"; 
	
   
}
