#ifndef FIREWALL_H
#define FIREWALL_H
#include "SoftwareDeSeguranca.h"
#include <iostream>
#include <typeinfo>
using std::cout;
using std::cin;
#include <vector>
#include <string>
using std::string;
using std::ostream;


class Firewall : public SoftwareDeSeguranca
{
        friend ostream &operator << ( ostream & , const Firewall & );

public:

    Firewall();
    Firewall( string & , string &);
    Firewall ( const Firewall& );
    ~Firewall();
  
    bool verificarAmeaca( bool );
    bool fazerAtualizacoes ( bool );
    bool pontoDeRestauracao ( bool );
    
    void mostrarIp();
    void bloquearAcessoNaRede();
    void dadosDeRede();
    void avaliar( SoftwareDeSeguranca *software);
    
    const Firewall &operator = ( const Firewall &);
    bool operator == (const Firewall & ) const;
    bool operator != (const Firewall & );
    
private:

    
    bool ameacaF;
    bool atualizacaoF;
    bool pontoF;
    
    bool bloqueio;
    bool mostrar;

    string ip;
    string mascara;
    
    
};

#endif // FIREWALL_H
