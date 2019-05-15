#include "Assinante.h"
#include "McAffe.h"
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
 
	
	
	this->nomeDoAssinante = origem.nomeDoAssinante;
	this->idDoAssinante =origem.idDoAssinante;
	this->tipoDeAssinatura= origem.tipoDeAssinatura;
	this->senha = origem.senha;
}




//Metodo:

void Assinante::printUser( ) const
{
	
	cout << this->nomeDoAssinante << "\n";
	
}


void Assinante ::infoAssinante ( ) const 
 {
	 
	 cout << " O(s) nome(s) cadatrado (s) foi (foram) : " << nomeDoAssinante;
	 
 }
 
 
void Assinante:: setId( int id )
{
	
	this -> idDoAssinante = id;
	
}


void  Assinante::setNameUser( const string &name ) 
 {
	 
	  this-> nomeDoAssinante = name;
	 
 }
 
 
 void Assinante::setTypeSubs(  const string &typeS )
{
	
 this-> tipoDeAssinatura = typeS;
	
}


 void Assinante::setPassword( int pass)
 
 {
	 
	 this-> senha = pass ;
	 
 }
 
