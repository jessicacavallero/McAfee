#ifndef PANDA_H
#define PANDA_H
#include "Antivirus.h"

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::ostream;

class Panda : public Antivirus
{
        friend ostream &operator << ( ostream & , const Panda & );

public:

    Panda();
    Panda ( const Panda& );
    ~Panda();
  
    bool verificarAmeaca( bool );
    bool fazerAtualizacoes ( bool );
    bool pontoDeRestauracao ( bool );
    
    const Panda &operator = ( const Panda &);
    bool operator == (const Panda & ) const;
    bool operator != (const Panda & );
    
private:
    
    bool ameacaPanda;
    bool atualizacaoPanda;
    bool pontoPanda;

 
};

#endif // PANDA_H
