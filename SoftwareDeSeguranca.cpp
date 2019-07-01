#include "SoftwareDeSeguranca.h"

const string SoftwareDeSeguranca::NOME = "Jessica Cavallero";

SoftwareDeSeguranca::SoftwareDeSeguranca() 
{
	this-> NOME ;
	
}

SoftwareDeSeguranca::SoftwareDeSeguranca( const  SoftwareDeSeguranca &base )
{


}

SoftwareDeSeguranca::~SoftwareDeSeguranca()
{
}

ostream &operator <<(ostream & print, const SoftwareDeSeguranca & softwareDeSeguranca )
{

    print << "O nome é :  " << softwareDeSeguranca.NOME;
    
        return print;
 
}


void SoftwareDeSeguranca :: nome ()
{
    cout << "Criando por " << NOME;    
}

bool SoftwareDeSeguranca::operator != (const SoftwareDeSeguranca &right ) 

{
		return ! ( *this == right );

}

const SoftwareDeSeguranca &SoftwareDeSeguranca::operator = ( const SoftwareDeSeguranca &right ) 
{
    NOME = right.NOME;
	return *this;
}


bool SoftwareDeSeguranca::operator == ( const SoftwareDeSeguranca &right)const
{
    if ( NOME != right.NOME)
		return false;
        
        return true;
}

