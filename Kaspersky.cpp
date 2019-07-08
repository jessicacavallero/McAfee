#include "Kaspersky.h"

Kaspersky::Kaspersky()
:Antivirus()
{
    
    this-> ameacaKaspersky = true;
    this-> atualizacaoKaspersky = true;
    this-> pontoKaspersky = true;
    this-> mover = false;
    this-> permitido = false;

}

Kaspersky::Kaspersky ( const Kaspersky &base )
: Antivirus( base )
{
    this-> ameacaKaspersky = base.ameacaKaspersky;
    this-> atualizacaoKaspersky = base.atualizacaoKaspersky;
    this-> pontoKaspersky = base.pontoKaspersky;
    this-> mover = base.mover;
    this-> permitido = base.permitido;
    
}

Kaspersky::~Kaspersky()
{
}

ostream &operator <<(ostream & print, const Kaspersky & kaspersky )
{
    print << static_cast < Antivirus >( kaspersky );
    print << "O valor das variaveis é : " ;kaspersky.atualizacaoKaspersky << kaspersky.ameacaKaspersky<< kaspersky.pontoKaspersky << kaspersky.mover << kaspersky.permitido;
    
        return print;
}


bool Kaspersky::verificarAmeaca( bool threat )
{
    if ( ameacaKaspersky == true) 
    {
        cout << "Procurando por vírus \n"; 
    }
    else
    {
        cout << "A verificação ficará para outra hora\n" ;
    }
}

bool Kaspersky::fazerAtualizacoes ( bool updateA )
{
    if (atualizacaoKaspersky == true )
    {
        
        cout << " Fazendo atualização no banco de dados do antivirus\n";
    }
    else
    {
        cout << "Você cancelou a atualização\n";
    }
    
}

bool Kaspersky::pontoDeRestauracao ( bool spotA )
{
    if ( pontoKaspersky == true )
    {
        cout << "Seu ponto de restauração está sendo feito \n ";
    }
    else 
    {
        cout << "Você não tem ponto de restauração\n";
    }
}

void Kaspersky::quarentena( bool quarantine )
{
    if (mover == true )
        cout << "O arquivo está sendo colocado na quarentena ";
    else 
        cout << "Você está cancelando a quarentena ";
    
}

void Kaspersky::whiteList( bool allowed )
{
    if(permitido == true )
        cout << "Seu programa ou arquivo está sendo colocado na whitelista";
    else
        cout << "";
        
}

bool Kaspersky::operator != (const Kaspersky &right ) 

{
		return ! ( *this == right );

}

const Kaspersky &Kaspersky::operator = ( const Kaspersky &right ) 
{
   
    ameacaKaspersky = right.ameacaKaspersky;
    atualizacaoKaspersky = right.atualizacaoKaspersky;
    pontoKaspersky = right.pontoKaspersky;
    mover = right.mover;
    permitido = right.permitido;
    
	return *this;
}


bool Kaspersky::operator == ( const Kaspersky &right)const
{
    if (ameacaKaspersky != right.ameacaKaspersky)
		return false;
    if (atualizacaoKaspersky != right.atualizacaoKaspersky)
		return false;
    if (pontoKaspersky != right.pontoKaspersky)
		return false;
    if ( mover != right.mover)
		return false;
    if (permitido != right.permitido)
		return false;
    
    return true;
}
      