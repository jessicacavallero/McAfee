#include "Panda.h"

Panda::Panda()
:Antivirus()
{
}

Panda::~Panda()
{
}

ostream &operator <<(ostream & print, const Panda & panda )
{
    print << static_cast< Antivirus >(panda);
    print << "A soma das perguntas foi :  " ;
    
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