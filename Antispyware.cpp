#include "Antispyware.h"

Antispyware::Antispyware()
: SoftwareDeSeguranca(  )
{
    
    this-> ameacaAn = true;
    this-> atualizacaoAn = true;
    this-> pontoAn = true;
    this-> apagar = true;
    this-> mostrar = true;
    
}

Antispyware::Antispyware(const  Antispyware &origem )
: SoftwareDeSeguranca( origem )
{
    ameacaAn = origem.ameacaAn ;
    atualizacaoAn = origem.atualizacaoAn;
    pontoAn = origem.pontoAn;
    apagar = origem.apagar;
    mostrar = origem.mostrar;
}


Antispyware::~Antispyware()
{
}

ostream &operator <<(ostream & print, const Antispyware & antispyware )
{

    print << "A ameaça, a atualização, o ponto, o metodo apagar e mostrar foram:  "<< antispyware.ameacaAn << antispyware.atualizacaoAn << antispyware.pontoAn << antispyware.apagar << antispyware.mostrar;
    
        return print;
 
}


bool Antispyware::verificarAmeaca( bool threatA )
{
    if ( ameacaAn == true) 
    {
        cout << "Procurando por programas infectados \n"; 
    }
    else
    {
        cout << "A verificação ficará para outra hora\n" ;
    }
}


bool Antispyware::fazerAtualizacoes ( bool update )
{
    if (atualizacaoAn == true )
    {
        
        cout << " Fazendo atualização\n";
    }
    else
    {
        cout << "Você cancelou a atualização\n";
    }
    
}

bool Antispyware::pontoDeRestauracao ( bool spot )
{
    if ( pontoAn == true )
    {
        cout << "Seu ponto de restauração está sendo feito \n ";
    }
    else 
    {
        cout << "Você não tem ponto de restauração\n";
    }
}


void Antispyware::mostrarProgramas( bool mostrar)
{
    if( mostrar == true )
    {
        cout << "Mostrando programas . . . \n";
    }
    else 
    {
        cout << "Fechando . . .\n";
    }
    
    
}

void Antispyware::apagarProgramas( bool apagar )
{
    if (apagar == true )
    {
        cout << "Seus programas suspeitos serão apagaados \n";
    }
    else 
    {
        cout << "Se você está correndo risco \n";
    }
}

void Antispyware::informacoes()
{
    
    cout << "O nome do programa é : " << nomeDosProgramas;
    cout << "O tipo de programa é : " << tipoDePrograma;
    
}

bool Antispyware::operator != (const Antispyware &right ) 

{
		return ! ( *this == right );

}

const Antispyware &Antispyware::operator = ( const Antispyware &right ) 
{
    
    ameacaAn = right.ameacaAn ;
    atualizacaoAn = right.atualizacaoAn;
    pontoAn = right.pontoAn;
    apagar = right.apagar;
    mostrar = right.mostrar;
    
    return *this;
}


bool Antispyware::operator == ( const Antispyware &right)const
{
    if ( ameacaAn != right.ameacaAn)
		return false;
    if (atualizacaoAn != right.atualizacaoAn )
		return false;
    if (pontoAn != right.pontoAn )
		return false;
    if (apagar != right.apagar)
		return false;
    if (mostrar != right.mostrar)
		return false;
  
    return true;
}

