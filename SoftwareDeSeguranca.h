#ifndef SOFTWAREDESEGURANCA_H
#define SOFTWAREDESEGURANCA_H


#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::ostream;


class SoftwareDeSeguranca
{
	
	friend ostream &operator << ( ostream & , const SoftwareDeSeguranca & );

public:
 
	SoftwareDeSeguranca ( );
	SoftwareDeSeguranca ( const SoftwareDeSeguranca& );
    virtual~SoftwareDeSeguranca();
    
    virtual bool verificarAmeaca( int ) = 0;
    virtual bool fazerAtualizacoes ( int ) = 0;
    virtual bool pontoDeRestauracao ( int ) = 0;
    
    const SoftwareDeSeguranca &operator = ( const SoftwareDeSeguranca &);
    bool operator == (const SoftwareDeSeguranca & ) const;
    bool operator != (const SoftwareDeSeguranca & );
	
    
private:

int resultadoAmeaca;
static const string NOME;

   
};

#endif // SOFTWAREDESEGURANCA_H