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
    
    virtual bool verificarAmeaca( bool ) = 0;
    virtual bool fazerAtualizacoes ( bool ) = 0;
    virtual bool pontoDeRestauracao ( bool  ) = 0;
    
    void nome();
    
    const SoftwareDeSeguranca &operator = ( const SoftwareDeSeguranca &);
    bool operator == (const SoftwareDeSeguranca & ) const;
    bool operator != (const SoftwareDeSeguranca & );
	
    
private:


const static string NOME;

   
};

#endif // SOFTWAREDESEGURANCA_HH
