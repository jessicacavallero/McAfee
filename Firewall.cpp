#include "Firewall.h"

Firewall::Firewall()
: SoftwareDeSeguranca( )
{
    this->  ip = ""; 
    this->  ip3 = 0;

}

Firewall::Firewall ( const Firewall &base )
: SoftwareDeSeguranca( base )
{
    ip = base.ip; 
    ip3 = base.ip3;
    
}

Firewall::~Firewall()
{
}

bool Firewall::verificarAmeaca( bool ameacaf )
{
    if ( ameacaf == true) 
    {
        cout << "Procurando por intrusos na rede \n"; 
    }
    else
    {
        cout << "Sua varedura foi deixada  para deposi \n";
    }
}

bool Firewall::fazerAtualizacoes ( bool atualizacaof )
{
    if ( atualizacaof == true )
    {
        
        cout << " Fazendo atualização\n";
    }
    else
    {
        cout << "Você cancelou a atualização\n";
    }
    
}

bool Firewall::pontoDeRestauracao ( bool pontof )
{
    if ( pontof == true )
    {
        cout << "Seu ponto de restauração está sendo feito \n ";
    }
    else 
    {
        cout << "Você não tem ponto de restauração\n";
    }
}


void descobrindoip( string ip , int ip3)
{
    
  string ipdopc;
  int inicio;
  
    if ( inicio > 1 && inicio < 127 )
    {
        
       cout << "O seu IP " << ipdopc << "A classe da sua rede é A \n"; 
        
    }
    if  ( inicio > 128 && inicio < 191 )
    {
        
        cout << "O seu IP " << ipdopc << "A classe da sua rede é B \n";
    }
    else 
    {
        cout << "O seu IP " << ipdopc << "A classe da sua rede é C \n";
    }
    
    
}

bool Firewall::operator != (const Firewall &right ) 

{
		return ! ( *this == right );

}

const Firewall &Firewall::operator = ( const Firewall &right ) 
{
    ip = right.ip;
    ip3 = right.ip3;
	
    
	return *this;
}


bool Firewall::operator == ( const Firewall &right)const
{
	if (ip != right.ip)
		return false;
    if (ip3 != right.ip3)
		return false;
  
    return true;
}
