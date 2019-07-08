#ifndef ANTIVIRUS_H
#define ANTIVIRUS_H
#include "Virus.h"
#include "Assinante.h"
#include "SoftwareDeSeguranca.h"

using std::cout;
using std::cin;

#include <string>
using std::string;
using std::ostream;

class Antivirus : public SoftwareDeSeguranca 
{
	
	friend ostream &operator << ( ostream & , const Antivirus & );

public:
 
    Antivirus ( );
	Antivirus ( const Antivirus& );
    virtual ~Antivirus();
  
    bool verificarAmeaca( bool );
    bool fazerAtualizacoes ( bool );
    bool pontoDeRestauracao ( bool );

    int idadeDeAcesso ( int );
    void criacaoDeSenha ();
    
    const Antivirus &operator = ( const Antivirus &);
    bool operator == (const Antivirus & ) const;
    bool operator != (const Antivirus & );
	
	void adicionarVirus( const Virus &);
	void imprimirVirus(  ) const;
    void adicionarUsuario( const Assinante & );
	void imprimirUsuario(  ) const;


private:

    bool ameacaA;
    bool atualizacaoA;
    bool pontoA; 
    
    int idade;
    int senha;
    const static string NOME;
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
    
    
    
};


#endif // ANTIVIRUS_H