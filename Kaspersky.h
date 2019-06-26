#ifndef KASPERSKY_H
#define KASPERSKY_H
#include "Antivirus.h"

class Kaspersky : public Antivirus
{
        friend ostream &operator << ( ostream & , const Kaspersky & );

public:

    Kaspersky();
    Kaspersky ( const Kaspersky& );
    virtual ~Kaspersky();
  
    bool verificarAmeaca( bool );
    bool fazerAtualizacoes ( bool );
    bool pontoDeRestauracao ( bool );
    
    const Kaspersky &operator = ( const Kaspersky &);
    bool operator == (const Kaspersky & ) const;
    bool operator != (const Kaspersky & );
    
private:

 
};

#endif // KASPERSKY_H