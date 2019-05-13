#ifndef VIRUS_H
#define VIRUS_H


#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;


class Virus 
{
	
public:

//Construtores:

	Virus( const string & = "", int = 0, const string & = "" );
	Virus( int );
	Virus (const Virus&);
	
	
	
//Destrator:

	//~Virus();
	
//Metodos:
        void infoVirus() const ;
		void printVirus( ) const;
		

private:
//Atributos:	


		string nomeVirus;
		int anoVirus;
		string efeitoVirus;

};



/*
 * 
 * 
 * 	cout << " Você deseja se cadastar ?\n";
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
											 
**/

















































#endif // VIRUS_H


