#ifndef ASSINANTE_H
#define ASSINANTE_H

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

using std::ostream; 

class Assinante 
{
friend ostream &operator <<(ostream & , const Assinante &);

public:
//Construtores:

     Assinante(  int = 0, const string & = "", int = 0, int = 0, const string & = ""); 
	 Assinante( int  );
     Assinante( const Assinante& );
	 
//Metodo:

	 void printUser( ) const;
	 void setId( int );
	 void setNUser( const string & );
	 void setType( const string & );
	 void setPassword( int );
	 void infoAssinante ( ) const ;
	 
private:
//Atributos:

	string nomeDoAssinante;
	string tipoDeAssinatura;
	int idDoAssinante;
	int senha;
	int quantidadeDeAssinante;
    
};

#endif // ASSINANTE_H
