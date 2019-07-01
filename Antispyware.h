#ifndef ANTISPYWARE_H
#define ANTISPYWARE_H
#include "SoftwareDeSeguranca.h"
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::ostream;


class Antispyware : public SoftwareDeSeguranca
{
        friend ostream &operator << ( ostream & , const Antispyware  & );

public:

    Antispyware();
    Antispyware ( const Antispyware& );
    ~Antispyware();
    
    bool verificarAmeaca( bool );
    bool fazerAtualizacoes ( bool );
    bool pontoDeRestauracao ( bool );
    
    void mostrarProgramas( bool );
    void apagarProgramas( bool );
    
    void informacoes ();
    
    const Antispyware &operator = ( const Antispyware &);
    bool operator == (const Antispyware & ) const;
    bool operator != (const Antispyware & );
	
    
  

private:

    bool ameacaAn;
    bool atualizacaoAn;
    bool pontoAn;
  
    bool mostrar;
    bool apagar;


    string nomeDosProgramas;
    string tipoDePrograma;
};


#endif // ANTISPYWARE_H