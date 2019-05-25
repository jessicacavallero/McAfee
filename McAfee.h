#ifndef MCAFEE_H


#include "Assinante.h"
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

// Outras Classes:
#include "Virus.h"
#include "Assinante.h"


class McAfee
{
	
friend ostream &operator << ( ostream & , const McAfee & );

public:
//Construtor:

    McAfee ( int, const string &, int , int, const string &);
    McAfee(  );
	McAfee ( const McAfee& );

//Destrator:

	~McAfee();


//Metodos:

	bool operator == (const McAfee & ) const ;
    bool operator != (const McAfee &) ;
	const McAfee &operator = ( const McAfee &);
	Virus &operator [ ] ( int);
	Virus operator [] (  int ) const ;
	bool operator < (const McAfee & ) const;



	 string verificarVirus( int );

    void addVirus( const Virus &);
	void printVirus(  ) const;
	void addUser ( const Assinante & );
	void printUser (  ) const;
	
    void setConfigUser(  const string &, int , const string  & , int );
      void setUser( int );
	  void getUser( ) const ;
	  void setName( const string &);
      void getName(  ) const ;
	  void setIdUser( int );
	  void getIdUser(  ) const ;
	  void setPassword( int );
	  void getPassword(  ) const ;
	  void setType( const string &);
	  void getType(  ) const ;
	  void getNome(  );
	  void setNome ( );
	  void infoMcAffe( ) const;
	

private:
//Atributos:
 
    Assinante *user;
	int soma;
	int idUsuario;
	int qUsuario;
	int pUsuario;
	 string nUsuario;
     string tUsuario;
	 
	Virus *virus;
	int qVirus;
	string nVirus;
	string eVirus;
	int aVirus;
	
	Assinante **vetorUser;


	const static  string  NOME;
	string typeS ;
	
};
 
#endif // MCAFEE_H