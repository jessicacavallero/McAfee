

#include "McAffe.h"
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

void menuTipoAssinatura( );
void menuVirus( );


int main(int argc, char **argv)
{
	Virus *listaVirus = 0;
	int  quantityVirus = 0;
	string nameVirus;
	string efeitoVirus;
	int  anoVirus = 0;
	
	Assinante *listaUsuario = 0;
	int quantityUser = 0;
	string nameUser;
	
	
	McAffe antivirus;
	McAffe usuario;


	McAffe *listadeAntivirus;
	int nAssinantes = 0;
	int id;
	string name;
	string tipoAssinatura;
	int pass;
	
	/*
	cout << "Quantos assinantes \n";
	cin >> nAssinantes;
	listadeAntivirus = new McAffe[  nAssinantes ];
	
	for( int i = 0; i < nAssinantes; i++ )
	{
		cout << "id";
		cin >> id;
		cout << "Nome \n";
		cin >> name;
		cout << "Tipo de assinatura\n";
		
		
		
		listadeAntivirus[ i ].setConfigUser(  id, 0, name );
	}
		
		
	for( int i = 0; i < nAssinantes; i++ )
	{
		cout << "Entre com sua senha\n";
		cin >> pass;
		listadeAntivirus[ i ].setSenha( pass );
	}
	
**/	
	
	//cout << "Digite o nome do usuario e a sua versao do antivirus\n";
	
			int menu;

	
	
		cout << "                 B E M  -  V I N D O  \n\n";
		cout << "                       A O  \n\n";
		cout << "                   M C A F F E      \n\n";
		cout << "\n";
		cout << "      Segurança cibernética do dispositivo à nuvem\n";
	
		cout << "\n";
		cout << "\n";

		cout << "                    M E N U  \n ";
		cout << "\n";

		cout << "1 - Usuario novo \n";
		cout << "2- Informações \n";
		cout << "3 -Adicionar Vírus\n";
		cout << "4-Acesso restrito\n";
		   cin >> menu;
	    cout << "\n";
		cout << "\n";
		
		
			switch (menu)
			{
				
							case 1 :
							
							 cout << "Verifique a possibilidade do seu computador está infectado.\n"; 
							
									int pergunta;
									int resposta1;
									int resposta2;
									int resposta3;
								
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
																											
																										antivirus.verificarVirus( resposta1 + resposta2 + resposta3 );
																					break;
																					
										
										
										break;
		
	
				
										case 2 :
										
										cout << " informações ";
										
										break;
		
		
		
		
										case 3:
										
										   int perguntaVirus;
										   cout << " Menu\n";
										   cout << "1-Adicionar nome do virus\n";
										   cout << "2-Visualizar os vírus adicionados\n";
										  
										   cin >> perguntaVirus;
													   
													   switch (perguntaVirus)
																{
																          case 1:
																		  cout << "Quantos vírus você deseja cadastrar ?\n";
																		  cin >> quantityVirus;
																																				
																		   for( int i =0; i < quantityVirus; i++)
																			{
																				cout << "Escreva o nome do virus\n";
																				cin >> nameVirus;
																				
															                    antivirus.adicionarVirus( Virus( nomeVirus )  );
																			
																				
																			
																				cout << "Escreva como o vírus age \n";
																				cin >> efeitoVirus;
																				efeito( efeitoVirus );
																				antivirus.adicionarEfeito( efeito );
																				
																				cout << "Escreva o ano da epoca dos ataques \n";
																				cin >> anoVirus;
																				Virus ano( anoVirus );
																				antivirus.adicionarAno( ano );
																				
																		}
																	         break;
												 
																	         case 2 :

                                                                        cout << " hfehfuehuf";

 
																          	break;
											   
																			}
											   
											   
										                        
										   
										   
																		
										
										break;
							


		
												case 4:
												
												int senhadeacesso;
												cout << " Digite a senha ";
												cin >> senhadeacesso;
												
										
											
												while ( senhadeacesso != 4698 )
												{
												cout << " Senha incorreta , por favor , tente novamente\n";
												cin >> senhadeacesso;
												
												}
											
											  cout << " entrou ";
												
												break;
				
				
				
				
				
				
			}


			}







/**
	cout << "\n";
	
	int indexUser;
	cout << "Para qual usuario voce quer fazerr o teste\n";
	cin >> indexUser;
	//McAffe tempAntivirus = listadeAntivirus[ iindexUser];	
	
    
			 
			
			cout << "Pelas suas resposta o sistema mais indicado é a ";
			
			  switch ( cadas )
			 {
				 case 1 : 
				 cout << "Quantos usuarios você deseja cadastrar ?\n";
					cin >> quantityUser;
					
					for( int i =0; i < quantityUser; i++)
	               {
						cout << "Entre com o nome do novo usuario \n " ;
							cin >> nameUser;
						usuario.addUser( Assinante( nameUser )  );
						
						//Assinante user ( nameUser );  
						//usuario.addUser( user );
						

			//	listadeAntivirus[ iindexUser].

		
		
				 
				 
				 

			 }
			 


			 
			
			  switch ( cadas )
			 {
				 case 1 : 
				 cout << "Quantos usuarios você deseja cadastrar ?\n";
					cin >> quantityUser;
					
					for( int i =0; i < quantityUser; i++)
	               {
						cout << "Entre com o nome do novo usuario \n " ;
							cin >> nameUser;
							usuario.addUser( Assinante( nameUser )  );
		
					}
	
				 break;
				 
				 case 2 :
				 break;

			 }
			 
break;
        
}
    
   
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
					
		
	
		 }
		 
		 antivirus.printVirus( );
		cout  <<"Os dados que você adicionou foi" ;
		antivirus.printVirus( ) ;
	   cout << "\n";
		cout << "\n";
		
		antivirus.infoMcAffe();
		
		 **/
		 //cout << "\n";
		 //cout << "\n";
	     //cout << "Projeto criado por "; antivirus.getNome( );  

}
