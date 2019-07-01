#include "McAfee.h"

McAfee::McAfee()
:Antivirus()
{
}

McAfee::~McAfee()
{
}


ostream &operator <<(ostream & print, const McAfee & mcafee )
{
    print << static_cast< Antivirus >(mcafee);
    print << "A soma das perguntas foi :";
    
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