#ifndef ASSINANTE_H
#define ASSINANTE_H

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

class Assinante 
{

public:
//Construtores:

     Assinante( const string & = "", int = 0, int = 0, const string & = "" ); 
	 Assinante( int  );
     Assinante( const Assinante& );
	 
//Metodo:

     void infoAssinante ( string &, int, int, string &) const ;
	 void print( ) const;
	 
	
private:
//Atributos:

	string nomeDoAssinante;
	string tipoDeAssinatura;
	int idDoAssinante;
	int senha;

};

#endif // ASSINANTE_H
