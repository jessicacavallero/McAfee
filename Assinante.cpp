#include "Assinante.h"
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

ostream &operator << (ostream & print, const Assinante &user )
{

 print << "O dados do usuario é  :  " << user.nomeDoAssinante << '\t' << user.tipoDeAssinatura << '\t' << user.idDoAssinante<< '\t' << user.senha <<'\n';
 
return  print ;

}


//Construtor:

Assinante::Assinante ( int qUser , const string &nUser, int idUser, int pUser, const string &tUser )

{
	this ->quantidadeDeAssinante = qUser;
	this-> nomeDoAssinante = nUser;
	this-> idDoAssinante = idUser;
	this-> senha = pUser;
	this-> tipoDeAssinatura = tUser;


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



 
void Assinante:: setId( int id )
{
	
	this -> idDoAssinante = id;
	
}


void  Assinante::setNUser( const string &name ) 
 {
	 
	  this-> nomeDoAssinante = name;
	 
 }
 
 
 void Assinante::setType(  const string &typeS )
{
	
 this-> tipoDeAssinatura = typeS;
	
}


 void Assinante::setPassword( int pass)
 
 {
	 
	 this-> senha = pass ;
	 
 }
 
void Assinante ::infoAssinante ( ) const 
 {
	 
	 cout << " O(s) nome(s) cadatrado (s) foi (foram) : " << nomeDoAssinante;
	 
 }
 