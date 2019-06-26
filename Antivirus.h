
#ifndef ANTIVIRUS_H
#define ANTIVIRUS_H
#include "Virus.h"
#include "Assinante.h"
#include "SoftwareDeSeguranca.h"

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

class Antivirus : public SoftwareDeSeguranca 
{
	
	friend ostream &operator << ( ostream & , const Antivirus & );

public:
 
	Antivirus ( int, const string &, int , int, const string &);
    Antivirus ( );
	Antivirus ( const Antivirus& );

	virtual~Antivirus();
  
    bool verificarAmeaca( bool );
    bool fazerAtualizacoes ( bool );
    bool pontoDeRestauracao ( bool );
    
    int idadeDeAcesso ( int );
    void criacaoDeSenha ();
    
   
	void verificarVirus( int );

	void adicionarVirus( const Virus &);
	void imprimirVirus(  ) const;
    void adicionarUsuario( const Assinante & );
	void imprimirUsuario(  ) const;


private:

    Assinante *user;
	int soma;
	int idUsuario;
	int qUsuario;
	int pUsuario;
	 string nUsuario;
     string tUsuario;
	 
	Virus *virus;
	int qVirus;
	string nVirus;
	string eVirus;
	int aVirus;
    
    int senha;
};


#endif // ANTIVIRUS_H