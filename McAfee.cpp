#include "McAfee.h"

McAfee::McAfee()
:Antivirus()
{
    this-> ameacaMcAfee = true ;
    this-> atualizacaoMcAfee = true;
    this-> pontoMcAfee = true;
    this-> privado = false;
    this-> bloquear = false;
    
}


McAfee::McAfee( const McAfee &origem)
:Antivirus( origem )
{
    
    ameacaMcAfee = origem.ameacaMcAfee ;
    atualizacaoMcAfee = origem.atualizacaoMcAfee ;
    pontoMcAfee = origem.pontoMcAfee ;
    privado = origem.privado ;
    bloquear = origem.bloquear ;
}

McAfee::~McAfee()
{
}


ostream &operator <<(ostream & print, const McAfee & mcafee )
{
    print << static_cast< Antivirus >(mcafee);
    print << "O valor das variaveis e  :" << mcafee.ameacaMcAfee << mcafee.atualizacaoMcAfee << mcafee.pontoMcAfee << mcafee.privado << mcafee.bloquear;
    
        return print;
 
}


bool McAfee::verificarAmeaca( bool threatA )
{
    if ( ameacaMcAfee == true) 
    {
        cout << "Procurando por vírus \n"; 
    }
    else
    {
        cout << "A verificação ficará para outra hora\n" ;
    }
}

bool McAfee::fazerAtualizacoes ( bool updateA )
{
    if (atualizacaoMcAfee == true )
    {
        
        cout << " Fazendo atualização no banco de dados do antivirus\n";
    }
    else
    {
        cout << "Você cancelou a atualização\n";
    }
    
}

bool McAfee::pontoDeRestauracao ( bool spotA )
{
    if ( pontoMcAfee== true )
    {
        cout << "Seu ponto de restauração está sendo feito \n ";
    }
    else 
    {
        cout << "Você não tem ponto de restauração\n";
    }
}

void McAfee::privateBrowsing ( bool privade )
{
    if (privado == true )
        cout <<"Seu rastro de navegação será inacessível para os programas\n";
    else
        cout << "\n";
}

void McAfee::bloqueiePropagandas( bool block )
{
    if( bloquear == true )
        cout << "As propagandas foram bloqueadas\n";
    else 
        cout << "O seu nagevador está sujeito a propagandas\n";
    
}

bool McAfee::operator != (const McAfee &right ) 

{
		return ! ( *this == right );

}

const McAfee &McAfee::operator = ( const McAfee &right ) 
{
   
     
    ameacaMcAfee = right.ameacaMcAfee ;
    atualizacaoMcAfee = right.atualizacaoMcAfee ;
    pontoMcAfee = right.pontoMcAfee ;
    privado = right.privado ;
    bloquear = right.bloquear ;
    
	return *this;
}


bool McAfee::operator == ( const McAfee &right)const
{
    if (ameacaMcAfee != right.ameacaMcAfee)
		return false;
    if (atualizacaoMcAfee != right.atualizacaoMcAfee)
		return false;
    if (pontoMcAfee != right.pontoMcAfee)
		return false;
    if ( privado != right.privado)
		return false;
    if (bloquear != right.bloquear)
		return false;
    
    return true;
}
      