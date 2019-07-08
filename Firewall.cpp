#include "Firewall.h"

Firewall::Firewall()
: SoftwareDeSeguranca( )
{
    this-> ameacaF = true;
    this-> atualizacaoF = true;
    this-> pontoF = true;
    this-> mostrar = "";
    this-> bloqueio = false;
}


Firewall::Firewall( const string &ip, const string &mask)
: SoftwareDeSeguranca( )
{   
    this->ip = ip;
    this->mascara = mask;
}

Firewall::Firewall ( const Firewall &base )
: SoftwareDeSeguranca( base )
{

    ameacaF = base.ameacaF ;
    atualizacaoF = base.atualizacaoF;
    pontoF = base.pontoF;
    ip = base.ip;
    bloqueio = base.bloqueio;
}

Firewall::~Firewall()
{
}


ostream &operator <<(ostream & print, const Firewall & firewall )
{

     print << "A ameaça, a atualização, o ponto, o ip e bloqueio foram:  "<< firewall.ameacaF << firewall.atualizacaoF << firewall.pontoF << firewall.ip << firewall.bloqueio;
    
        return print;
 
}

bool Firewall::verificarAmeaca( bool threat )
{
    if ( ameacaF == true) 
        cout << "Procurando por intrusos na rede \n"; 
    else
        cout << "Sua varedura foi deixada  para deposi \n";
}

bool Firewall::fazerAtualizacoes ( bool update )
{
    if ( atualizacaoF == true )
        cout << " Fazendo atualização\n";
    else
        cout << "Você cancelou a atualização\n";
}

bool Firewall::pontoDeRestauracao ( bool spot )
{
    if ( pontoF == true )
        cout << "Seu ponto de restauração está sendo feito \n ";
    else 
        cout << "Você não tem ponto de restauração\n";
}


void Firewall::mostrarIp()
{
    if ( mostrar = true )
    {
        cout << "Seu IP é 187.180.88.169\n";
    }

}

void Firewall::bloquearAcessoNaRede()
{
    
    if( bloqueio == true)
    {
        cout << "Você bloqueou o seu acesso a rede\n";
    }
    else 
    {
        cout << "Seu acesso está liberado\n";
    }
    
}

void Firewall::printDados( )
{
    
   cout << "O Ip é :" << ip << "\n";
   cout << "A mascara é :" << mascara << "\n";
   cout << "\n"; 
}


bool Firewall::operator != (const Firewall &right ) 

{
		return ! ( *this == right );

}

const Firewall &Firewall::operator = ( const Firewall &right ) 
{
   
    ameacaF = right.ameacaF ;
    atualizacaoF = right.atualizacaoF;
    pontoF = right.pontoF;
    ip = right.ip;
    bloqueio = right.bloqueio;
    
	return *this;
}


bool Firewall::operator == ( const Firewall &right)const
{
    if (ameacaF != right.ameacaF)
		return false;
    if (atualizacaoF != right.atualizacaoF)
		return false;
    if (pontoF != right.pontoF)
		return false;
    if ( ip != right.ip)
		return false;
    if (bloqueio != right.bloqueio)
		return false;
    
    
   return true;
}





