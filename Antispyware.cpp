#include "Antispyware.h"

Antispyware::Antispyware()
: SoftwareDeSeguranca(  )
{
    
    
}

Antispyware::Antispyware(const  Antispyware &origem )
: SoftwareDeSeguranca( origem  )
{
    
    
    
}


Antispyware::~Antispyware()
{
}

bool Antispyware::verificarAmeaca( bool ameaca )
{
    if ( ameaca == true) 
    {
        cout << "Procurando por programas infectados \n"; 
    }
    else
    {
        cout << "A verificação ficará para outra hora\n" ;
    }
}

bool Antispyware::fazerAtualizacoes ( bool atualizacao )
{
    if (atualizacao == true )
    {
        
        cout << " Fazendo atualização\n";
    }
    else
    {
        cout << "Você cancelou a atualização\n";
    }
    
}

bool Antispyware::pontoDeRestauracao ( bool ponto )
{
    if ( ponto == true )
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

void apagarProgramas( bool apagar )
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