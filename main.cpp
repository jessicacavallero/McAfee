#include "McAfee.h"
#include "Virus.h"
#include "Assinante.h"
#include <iostream>

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



void menuPrincipal( )
{	
	
		cout << "                 B E M  -  V I N D O  \n\n";
		cout << "                       A O  \n\n";
		cout << "                   M C A F E E      \n\n";
		cout << "\n";
		cout << "      Segurança cibernética do dispositivo à nuvem\n";
	
		cout << "\n";
		cout << "\n";

		cout << "                    M E N U  \n ";
		cout << "\n";

		cout << "1 - Verifique qual é o melhor pacote para você\n";
        cout << "2 - Cadastra-se\n";
		cout << "3 - Entre\n";
		cout << "4 - Sair";
	
}		


int  possibilidadeVirus( int question, int question1, int question2, int question3 )
{
		
		
		
		cout << "Verifique a possibilidade do seu computador está infectado.\n"; 
							
		int pergunta;
		int resposta1;
		int resposta2;
		int resposta3;
		int soma;
	
				
		cout << "Você utiliza algum tipo de antivirus?\n";
		cout << "1-Sim\n2-Nao\n";
			cin >> pergunta;
		
		
while ( pergunta != 1 && pergunta !=2 )
{
   cout << " Você digitou uma opção invalida , por favor , digite novamente";
   cin >> pergunta;
}
			
								
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
     soma =  resposta1 + resposta2 + resposta3;

	 return soma;
 
									
break;
																											
case 2 :
													

				cout << "Os programas padroes do deu computador estão funcionando?\n ";
				cout << "1-Sim\n 0-Nao\n";
					cin >>resposta1;
				cout << "\n";																		
				cout << "Seu computador está muito lento?\n";
				cout << "1-Sim\n 0-Nao\n";
					cin >>resposta2;
				cout << "\n";			
																												
				cout << "Você recebe e mails e posts suspeitos em redes sociais?\n";    
				cout << "1-Sim\n 0-Nao\n";
					cin >>resposta3;
				cout << "\n";			
				cout << " hije va 1";								
      soma =  resposta1 + resposta2 + resposta3;


    return soma;
   
	break;
}
}


void menuSecundario ()
{
	
cout << " BEM VINDO \n\n";
cout << "Escolha uma opção\n";	
cout << "1 - Adicionar vírus\n";
cout << "2 - Comparação de Antivírus\n";
cout << "3 -Mostrar todas as informaçõe do programa \n";
	
	
}


int main(int argc, char **argv)
{
	
	
	Virus *listaVirus = 0;
	int  qVirus = 0;
	string nVirus;
	string eVirus;
	int  aVirus = 0;
	
	Assinante *listaUsuario = 0;
	int qUser;
  string nUser;
   int pUser;
   int idUser;
   string tUser;

	McAfee *listadeAntivirus = 0;
	int numeroAssinantes = 0;
	int identidade;
	string nome;
	int senha;
	string tipoAssinatura;
	int indexUser;

	McAfee antivirus;
	McAfee antivirus1;
	McAfee copia; 
	
  int menu;
  int question;
  int question1;
  int question2;
  int question3;
  int answer;
  



menuPrincipal();
cout << "\n";
	cin >> menu;
	  
while ( menu > 4 )	
{
	 cout << " Opção  invalida, por favor tente d novo  "; 
	 cin >> menu;
}
	
	
switch (menu)
{
	 case 1:
	 
	antivirus.verificarVirus( possibilidadeVirus ( question, question1, question2, question3 ) ); 


	 break;
	 
	 case 2 :
	 
	cout << "Quantos usuarios você quer adicionar \n";
	cin >> qUser;
	


	for (int i = 0; i < qUser; i++)
	{
								
            cout << "Escreva o seu nome";
			getline ( cin, nUser );
			
			cout <<"Escreve o seu ID";
			cin >> idUser;
			
			cout << "Escreva a sua senha";
			cin >> pUser;
			
			cout << "Escreva o seu pacote";
			cin >> tUser;
			
	
			
			Assinante user (  qUser, nUser, idUser,  pUser, tUser);
			antivirus.addUser( user );
																	
	}
	 break;
	 
	 case 3 :
	 
	int senha;
	int resposta;
	
	cout << "Digite a senha para poder entrar\n ";
	cin >> senha ;
	
	while ( senha != 4698)
	{
		
		cout << " Senha invalida , tente novamente";
		cin >> senha;
		
	}
	
	menuSecundario () ;
	cin >> resposta;
	
	switch ( resposta )
	{
		
		case 1:
			
		cout << "Quantos vírus você deseja cadastrar ?\n";
		cin >> qVirus;
																				
			for( int i =0; i < qVirus; i++)
			{
					cout << "Escreva o nome do virus\n";
					getline (cin, nVirus);
					
					cout << " Escreva o numero do vírus";
					cin >> aVirus;
					
					cout << "Escreva o efeito do vírus";
					getline( cin ,eVirus);
					
			Virus virus( nVirus , aVirus, eVirus );
			antivirus.addVirus( virus );
																	
			}
		
		break;
		
		case 2:
	/*	
		if( antivirus == antivirus1 )
			{
		  cout << "Antivirus sao iguais";
			}
			else 
			{
		  cout << " Antivirus são diferentes ";
			}
		
		break;
		**/
		case 3 :
		
		break;
		
		
	}
	
	 break;
}
}

