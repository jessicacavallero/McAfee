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
	
	//void adicionarEfeito( const Virus &);
	
	//void adicionarAno( const Virus &);

	
	void setConfigUser(  const string &, int , const string  & , int , int );
	
	void setSenha( int senha );
	
	void setAssinatura( const string &tipo );
	
	string getNome(  );
	
	void setNome ( const string & );
	
private:
//Atributos:
 
	int numbInfectado;

	Assinante *user;
	Virus *virus;

	int quantVirus;
	int quantUser;

	
	const static  string  NOME ;

};
 
#endif // MCAFFE_H