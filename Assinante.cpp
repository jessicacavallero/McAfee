#include "Assinante.h"
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

//Construtor:

Assinante::Assinante ( const string &nameUser, int id , int passwd, const string &assinatura  )

{
	this-> nomeDoAssinante = nameUser;
	this-> idDoAssinante = id;
	this-> senha = passwd;
	this-> tipoDeAssinatura = assinatura;


}


/*
Assinante::Assinante ( int id , int passwd,  const string &nameUser, const string &assinatura  )
:idDoAssinante(id),  senha(passwd),  nomeDoAssinante(nameUser),  tipoDeAssinatura(assinatura)
{


}
**/


Assinante::Assinante ( int id ) 
: senha(0),  nomeDoAssinante(""),  tipoDeAssinatura("")
{
	
	if( id < 0 )
		idDoAssinante = id;
	else
		cout << "Id invalido!\n";
			
}


Assinante::Assinante ( const Assinante &origem )
{
 
}




//Metodo:

void Assinante::print( ) const
{
	cout << this->nomeDoAssinante << "\n";
}


/* void infoAssinante ( const string &, int , int, const string & ) const 
 {
	 
	 
	 
 }
 **/