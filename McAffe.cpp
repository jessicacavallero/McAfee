#include "McAffe.h"
#include "Assinante.h"
#include <string>
using std::string;

//const char McAffe::NAME =" Jessica Cavallero"; 

// Construtor:

McAffe::McAffe ( int id , int passwd,  const string &name, const string &assinatura  )
{
	this ->numbInfectado = 0;
	this->user = 0;
	this->quantUser = 0;
	this->virus = 0;
	this->quantVirus = 0;
	
	
}


McAffe::McAffe( int nInfect )
{
	
		if(  nInfect > 0 )
			this->numbInfectado = nInfect;
			
		this->user = 0;
		this->quantUser =0;
		this->virus = 0;
		this->quantVirus = 0;

		
}   


McAffe::McAffe( const  McAffe &base )
{

	this->user = 0;
	this->virus = 0;
	
	
}


McAffe::~McAffe()
{
}

//Metodos:

void McAffe::verificarVirus( int numbInfectado  )
{
      
	if ( numbInfectado == 3 )
		{
			 
			  
					cout << "Seu computador provalmente não está infectado\n";
					cout << " Melhore sua experiencia e assine o McAffe\n ";
					cout << "\n";
					cout << " 	Planos disponiveis: \n";
					cout << "\n";
					
					tiposDeAssinaturas() ;
					
		}
		else 
		{

					cout << "Há uma possibilidade de seu computador ter um arquivo infectado\n";
					cout << "  Usando o McAffe você fica seguro e livre de qualquer vírus \n";
                    cout << "\n";
					cout << " 	 Escolha um plano  ";
					cout << "\n";
					
					tiposDeAssinaturas()  ;
				
		}
					 
}


 void McAffe::tiposDeAssinaturas( )  const
{
	cout  << "Tipos de assisnaturas são:\n\n";
	cout  << "Basic\n";
	cout  << "Internet Security\n" ;
	cout  << "Total Security\n";
	cout  << "\n";
}




void McAffe::adicionarVirus( const Virus&ameaca )
{
	
	if( virus != 0 )
	{

		Virus *aux = new Virus [ quantVirus ];
	
		for ( int i = 0 ; i  <  quantVirus ; i++)
			 aux[ i ]  = virus[ i ];
			 
		delete [ ]  virus;

		virus = new Virus [ ++quantVirus ];
	
		for (int i = 0; i  < quantVirus - 1; i++ )
			virus[ i ] = aux [ i ];
		
		virus[ quantVirus - 1 ] =  ameaca;

		delete [ ]  aux ;
	}
	else
	{
		virus = new Virus [ ++quantVirus ];
		virus[ quantVirus - 1 ] = ameaca;
	
	}
		
	cout << "Quantidade de virus cadastrado (s)  é (são):   " << quantVirus << '\n';
	cout << "Virus adicionado(s) " ;
	virus[ quantVirus - 1 ].printVirus( ) ;
	cout << '\n';

}

void McAffe::printVirus( ) const
{
	
	for( int i =0; i < quantVirus; i++)
	{
		cout << "Imprimir virus " << i  + 1<< "\n";
		virus[ i ].printVirus( );
	
	}
}





void McAffe::addUser( const Assinante&usuario )
{
	
	if( user != 0 )
	{

		Assinante *aux = new Assinante [ quantUser ];
	
		for ( int i = 0 ; i  <  quantUser ; i++)
			 aux[ i ]  = user[ i ];
			 
		delete [ ]  user;

		user = new Assinante [ ++quantUser ];
	
		for (int i = 0; i  < quantUser - 1; i++ )
			user[ i ] = aux [ i ];
		
		user[ quantUser - 1 ] =  usuario;

		delete [ ]  aux ;
	}
	else
	{
		user = new Assinante [ ++quantUser ];
		user[ quantUser - 1 ] = usuario;
	
}}

void McAffe::printUser( ) const
{
	
	for( int i =0; i < quantUser; i++)
	{
		cout << "Imprimir virus " << i  + 1<< "\n";
		user[ i ].printUser( );
	
	}
}


void McAffe::infoMcAffe( )  const 
{
	cout << " As informações da classe são : \n";
	cout << " Atributos\n";
	cout << "A soma das questoes foi : " << numbInfectado ; 
	cout <<" A quantidade de virus cadatrados foi : " << quantVirus;
	cout << "A	 quantidade de usuarios cadatrados foi :  " << quantUser;
	
	user->infoAssinante();
	virus->infoVirus();

}
