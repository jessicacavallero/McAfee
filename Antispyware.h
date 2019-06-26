#ifndef ANTISPYWARE_H
#define ANTISPYWARE_H
#include "SoftwareDeSeguranca.h"


class Antispyware : public SoftwareDeSeguranca
{
        friend ostream &operator << ( ostream & , const Antispyware  & );

public:

    Antispyware();
    Antispyware ( const Antispyware& );
    virtual ~Antispyware();
    
    bool verificarAmeaca( bool );
    bool fazerAtualizacoes ( bool );
    bool pontoDeRestauracao ( bool );
    
    void mostrarProgramas( bool );
    void apagarProgramas( bool );
    
  

private:

    int ameaca;
    bool atualizacao;
    bool ponto;


};


#endif // ANTISPYWARE_H