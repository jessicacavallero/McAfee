#include "Panda.h"

Panda::Panda()
:Antivirus()
{
    this->ameacaPanda = true;
    this->atualizacaoPanda = true;
    this->pontoPanda = true;
    this->teclado= false;
    this->camera = true;

}


Panda::Panda( const Panda &base)
:Antivirus( base )
{
    
    ameacaPanda = base.ameacaPanda;
    atualizacaoPanda = base.atualizacaoPanda;
    pontoPanda = base.pontoPanda;
    teclado = base.teclado;
    camera = base.camera;
 
}


Panda::~Panda()
{
}

ostream &operator <<(ostream & print, const Panda & panda )
{
    print << static_cast< Antivirus >(panda);
    print << "O valor das variaveis é :  " << panda.ameacaPanda << panda.atualizacaoPanda << panda.pontoPanda << panda.camera << panda.teclado;
    
        return print;
 
}


bool Panda::verificarAmeaca( bool threatA )
{
    if ( ameacaPanda == true) 
    {
        cout << "Procurando por vírus \n"; 
    }
    else
    {
        cout << "A verificação ficará para outra hora\n" ;
    }
}

bool Panda::fazerAtualizacoes ( bool updateA )
{
    if (atualizacaoPanda == true )
    {
        
        cout << " Fazendo atualização no banco de dados do antivirus\n";
    }
    else
    {
        cout << "Você cancelou a atualização\n";
    }
    
}

bool Panda::pontoDeRestauracao ( bool spotA )
{
    if ( pontoPanda == true )
    {
        cout << "Seu ponto de restauração está sendo feito \n ";
    }
    else 
    {
        cout << "Você não tem ponto de restauração\n";
    }
}


bool Panda::webcam( bool camera )
{
    if( camera == true )
        cout << "Sua camera está desativada e protegida \n ";
    else 
        cout << "Sua camera está vuneravel \n";
}


bool Panda::protecaoDoTeclado( bool keyboard)
{
    if(teclado == true )
        cout << "Seu teclado fisico foi desativado e o teclado virtual ativado \n";
    else
        cout << "Seu teclado fisico continua ativado normalmente \n";
}


bool Panda::operator != (const Panda &right ) 

{
		return ! ( *this == right );

}


const Panda &Panda::operator = ( const Panda &right ) 
{
    ameacaPanda = right.ameacaPanda;
    atualizacaoPanda = right.atualizacaoPanda;
    pontoPanda = right.pontoPanda;
    teclado = right.teclado;
    camera = right.camera;
	return *this;
}


bool Panda::operator == ( const Panda &right)const
{
    if (ameacaPanda != right.ameacaPanda)
		return false;
    if (atualizacaoPanda != right.atualizacaoPanda)
		return false;
    if (pontoPanda != right.pontoPanda)
		return false;
    if ( teclado != right.teclado)
		return false;
    if (camera != right.camera)
		return false;
    
    return true;
}
      