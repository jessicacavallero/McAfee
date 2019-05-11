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
	
	void adicionarEfeito( const Virus &);
	
	void adicionarAno( const Virus &);

	
	void setConfigUser( int, int, const string &, const string & );
	
	void setSenha( int senha );
	
	void setAssinatura( const string &tipo );
	
	void getNome(  );
	
private:
//Atributos:
 
	int numbInfectado;

	Assinante *user;
	Virus *virus;
	Virus *efeito;
	Virus *ano;
	int quantVirus;
	int quantUser;
	int quantEfeito;
	int quantAno;
	
	const static  string  NOME;
	string typeS ;
	
};
 
#endif // MCAFFE_H