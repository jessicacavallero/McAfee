#include "Assinante.h"

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

Assinante::Assinante ( int qUser , const string &nUser, int idUser, int pUser, const string &tUser )
{
	
  this ->quantidadeDeAssinante = qUser;
  this-> nomeDoAssinante = nUser;
  this-> idDoAssinante = idUser;
  this-> senhaDoUsuario = pUser;
  this-> tipoDeAssinatura = tUser;
  
}

Assinante::Assinante ( int id ) 
: senhaDoUsuario(0),  nomeDoAssinante(""),  tipoDeAssinatura("")
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
	this->senhaDoUsuario = origem.senhaDoUsuario;

}


Assinante::~Assinante()
{
}


ostream &operator << (ostream & print, const Assinante &user )
{

	print << "O dados do usuario é  :  " << user.nomeDoAssinante << '\t' << user.tipoDeAssinatura << '\t' << user.idDoAssinante<< '\t' << user.senhaDoUsuario <<'\n';
	return  print;

}


void Assinante::printUser( ) const
{
	
	cout << this->nomeDoAssinante << "\n";
	
}