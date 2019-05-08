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

		void print( ) const;
		

private:
//Atributos:	


		string nomeVirus;
		int anoVirus;
		string efeitoVirus;

};






















































#endif // VIRUS_H


