
#ifndef FIREWALL_H
#define FIREWALL_H
#include "SoftwareDeSeguranca.h"


class Firewall : public SoftwareDeSeguranca
{
        friend ostream &operator << ( ostream & , const Firewall & );

public:

    Firewall();
    Firewall ( const Firewall& );
    virtual ~Firewall();
  
    bool verificarAmeaca( bool );
    bool fazerAtualizacoes ( bool );
    bool pontoDeRestauracao ( bool );
    
    const Firewall &operator = ( const Firewall &);
    bool operator == (const Firewall & ) const;
    bool operator != (const Firewall & );
    
private:

    string ip; 
    int ip3;
    
    bool ameacaF;
    bool atualizacaof;
    bool pontof;

};

#endif // FIREWALL_H