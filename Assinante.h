#ifndef ASSINANTE_H
#define ASSINANTE_H

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::ostream; 


class Assinante 
{
	friend ostream &operator <<(ostream & , const Assinante &);

public:

    Assinante( int = 0, const string & = "", int = 0, int = 0, const string & = ""); 
    Assinante( int );
    Assinante( const Assinante& );
    ~Assinante();
	
	 void printUser( ) const;
     
    
private:
  
	string nomeDoAssinante;
	string tipoDeAssinatura;
	int idDoAssinante;
	int senhaDoUsuario;
	int quantidadeDeAssinante;
    
};

#endif // ASSINANTE_H