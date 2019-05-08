#ifndef MCAFFE_H
#define MCAFFE_H
#include "Assinante.h"
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

// Outras Classes:
#include "Virus.h"
#include "Assinante.h"


class McAffe
{
    
public:
//Construtor:

    McAffe ( int  = 0, int = 0 , const string & = "", const string & = "" );
    McAffe( int );
	McAffe ( const McAffe& );

//Destrator:

	~McAffe();


//Metodos:

    void infoMcAffe( ) const;
	void verificarVirus( int  );
	void tiposDeAssinaturas( ) const ;
	
	void adicionarVirus( const Virus &);
	void printVirus( ) const;
	
	void addUser ( const Assinante & );
	void printUser ( ) const ;
	
	
private:
//Atributos:
 
	int numbInfectado;

	Assinante *user;
	Virus *virus;
	int quantVirus;
	int quantUser;
	
};
 
#endif // MCAFFE_H