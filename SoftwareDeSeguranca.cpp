#include "SoftwareDeSeguranca.h"



SoftwareDeSeguranca::SoftwareDeSeguranca() 
{
	
}

SoftwareDeSeguranca::SoftwareDeSeguranca( const  SoftwareDeSeguranca &base )
{


}

SoftwareDeSeguranca::~SoftwareDeSeguranca()
{
}

ostream &operator <<(ostream & print, const SoftwareDeSeguranca & softwareDeSeguranca )
{

    print << " Classe Abstrata ";
        return print;
 
}

bool SoftwareDeSeguranca::operator != (const SoftwareDeSeguranca &right ) 

{
		return ! ( *this == right );

}

const SoftwareDeSeguranca &SoftwareDeSeguranca::operator = ( const SoftwareDeSeguranca &right ) 
{

	return *this;
}


bool SoftwareDeSeguranca::operator == ( const SoftwareDeSeguranca &right)const
{
    return true;
}


void SoftwareDeSeguranca::printDados()
{
    
}