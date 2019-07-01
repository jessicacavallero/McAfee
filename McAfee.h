#ifndef MCAFEE_H
#define MCAFEE_H
#include "Antivirus.h"

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::ostream;

class McAfee : public Antivirus
{
        friend ostream &operator << ( ostream & , const McAfee & );

public:

    McAfee();
    McAfee ( const McAfee& );
    ~McAfee();
  
    bool verificarAmeaca( bool );
    bool fazerAtualizacoes ( bool );
    bool pontoDeRestauracao ( bool );
    
    const McAfee &operator = ( const McAfee &);
    bool operator == (const McAfee & ) const;
    bool operator != (const McAfee & );
    
private:

    bool ameacaMcAfee;
    bool atualizacaoMcAfee;
    bool pontoMcAfee;

 
};

#endif // MCAFEE_H
