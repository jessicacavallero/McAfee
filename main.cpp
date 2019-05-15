

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


	McAffe *listadeAntivirus = 0;
	int nAssinantes = 0;
	int id;
	string name;
	int pass;
	string typeS;
	int indexUser;

	/*McAffe test;
	
	cout << "asdfasd";
	test.setConfigUser("adas", 12234,  "srasd", 12344);
**/

			int menu;


//	do {
	
	
		cout << "                 B E M  -  V I N D O  \n\n";
		cout << "                       A O  \n\n";
		cout << "                   M C A F F E      \n\n";
		cout << "\n";
		cout << "      Segurança cibernética do dispositivo à nuvem\n";
	
		cout << "\n";
		cout << "\n";

		cout << "                    M E N U  \n ";
		cout << "\n";

		cout << "1- Novo usuario\n";
        cout << "2- Entre\n";
		cout << "3- Adicionar Vírus\n";
		cout << "4- Acesso restrito\n";
		cout << "5-Sair\n";
		   cin >> menu;
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
		while (pergunta != 1 && pergunta !=2)
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

							    antivirus.verificarVirus( resposta1 + resposta2 + resposta3 );
								
								 int cadastro;
								 
						       cout << " Você deseja se cadastar ?\n";
								cout << "1-SIM\n2-NÃO\n";
									cin >> cadastro; 
									
									
								if ( cadastro == 1 )
								{
													 
												quantityUser = 1;
															
											for( int i =0; i < quantityUser; i++)
											{
															   
												cout << "Entre com o nome do novo usuario \n " ;
												cin >> nameUser;
												usuario.addUser( Assinante( nameUser )  );
												//Assinante user ( nameUser );  
												//usuario.addUser( user );
															
											}
								}	 
								else 
								{
												 
											cout << "  Saindo ....";
				 
								}
								 
									
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
								
							cout << " Você deseja se cadastar ?\n";
							cout << "1-SIM\n2-NÃO\n";
									cin >> cadastro; 
									
							if ( cadastro == 1 )
							{
													 
								quantityUser = 1;
															
							for( int i =0; i < quantityUser; i++)
							{
															   
								cout << " Qual é o seu primeiro nome? \n " ;
								   getline ( cin, nameUser);
								usuario.addUser( Assinante( nameUser )  );
								//Assinante user ( nameUser );  
								//usuario.addUser( user );
								
								cout << "Seu nome foi cadastrado com sucesso";
								antivirus.printUser();
															
							}
							}
							else 
							{
												 
							cout << "  Saindo ....";
				 
							}
								
							  break;
																					
					}
										
   break;
		
	
				
  case 2 :
										
   antivirus.tiposDeAssinaturas();
										
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
										Virus virus( nameVirus );
										antivirus.adicionarVirus( virus );
																	
								}
								
								break;
												 
							
								
								
						
								case 2 :
								
										 if ( quantityVirus == 0 )
										 {
											 
											 cout << " Não foi adicionado nenhum vírus";
											 
										}
										else 
										{
											
											antivirus.printVirus();
											
									     }
																		

 
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
	
		 int  secreto; 
		 cout <<  "O que você deseja fazer ?\n";
		 cout << " \n";
	     cout << "1-Adicionar novos usuarios\n";
		 cout << "2-Fazer teste \n";
		cin >> secreto;
		
				  switch (secreto)
					{
						 case 1 :
						 cout << "Quantos assinantes você deseja adicionar ?\n";
							cin >> nAssinantes;
						  listadeAntivirus = new McAffe[  nAssinantes ];
					
							for( int i = 0; i < nAssinantes; i++ )
							{
							 
							  
								cout << "Adicione o ID do usuario\n";
							    cin >> id;
								cout << "Adicione o nome do novo usuario\n";
								getline( cin, name );
								cout << "Tipo de assinatura\n";
								getline( cin, typeS );
								cout << "Adicione uma senha para o usuario\n";
								cin >>pass;
								
								cout << "User " << i << '\n';
								listadeAntivirus[ i ].setConfigUser( name, id, typeS, pass, indexUser );  
								
								
							}
						
									
								for( int i = 0; i < nAssinantes; i++ )
								{
									cout << "Entre com sua senha\n";
									cin >> pass;
									listadeAntivirus[ i ].setSenha( pass );
								}
													
						

					break;

					case 2 :
           
							int indexUser;
							cout << "Para qual usuario voce quer fazerr o teste\n";
							cin >> indexUser;
							McAffe tempAntivirus = listadeAntivirus[ indexUser];	
						   //listadeAntivirus[ indexUser];

                  break;

					}		
break;
				
}

//}while ( menu  !=  5 );




		 cout << "\n";
		 cout << "\n";
	    cout << "Projeto criado por " << antivirus.getNome( );  


 
}











