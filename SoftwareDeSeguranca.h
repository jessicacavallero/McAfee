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

    virtual void printDados (); 
    const SoftwareDeSeguranca &operator = ( const SoftwareDeSeguranca &);
    bool operator == (const SoftwareDeSeguranca & ) const;
    bool operator != (const SoftwareDeSeguranca & );
    string &operator[] (int); 
	string operator[] (int) const;

	
    
private:

};

#endif // SOFTWAREDESEGURANCA_HH
