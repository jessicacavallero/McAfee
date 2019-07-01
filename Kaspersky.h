#ifndef KASPERSKY_H
#define KASPERSKY_H
#include "Antivirus.h"


#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::ostream;

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
    
    void quarentena();
    void whiteList();
    
    const Kaspersky &operator = ( const Kaspersky &);
    bool operator == (const Kaspersky & ) const;
    bool operator != (const Kaspersky & );
    
private:

    bool ameacaKaspersky;
    bool atualizacaoKaspersky;
    bool pontoKaspersky;
 
};


#endif // KASPERSKY_H
