#include "SoftwareDeSeguranca.h"


SoftwareDeSeguranca::SoftwareDeSeguranca() // Construtor que recebe todos os argumentos

{

	this-> resultadoAmeaca = 0;
	
}

SoftwareDeSeguranca::SoftwareDeSeguranca( const  SoftwareDeSeguranca &base )
{

	this-> resultadoAmeaca = base.resultadoAmeaca;

}

SoftwareDeSeguranca::~SoftwareDeSeguranca()
{
}

ostream &operator <<(ostream & print, const SoftwareDeSeguranca & softwareDeSeguranca )
{

    print << "A soma das perguntas foi :  " << softwareDeSeguranca.resultadoAmeaca;
    
        return print;
 
}

bool SoftwareDeSeguranca::operator != (const SoftwareDeSeguranca &right ) 

{
		return ! ( *this == right );

}

const SoftwareDeSeguranca &SoftwareDeSeguranca::operator = ( const SoftwareDeSeguranca &right ) 
{
    //quantidadeDeAssinante = right.quantidadeDeAssinante;
	return *this;
}


bool SoftwareDeSeguranca::operator == ( const SoftwareDeSeguranca &right)const
{
    return true;
}

