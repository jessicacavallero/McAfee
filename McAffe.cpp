#include "McAffe.h"
#include "Assinante.h"
#include <string>
using std::string;



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

		this->numbInfectado = base.numbInfectado;
		this->quantVirus = base.quantVirus;
		this->quantUser = base.quantUser;
		
				
		if( user != 0 )
			delete [ ] user;
			
		user = new Assinante[  this->quantUser ];		
		for( int i = 0; i < this->quantUser; i++ )
			this->user[ i ] = base.user[ i ];
			
			if ( virus != 0 )
			    delete [ ] virus;
		
       virus = new Virus [ this->quantVirus ];
	      for ( int i = 0; i < this -> quantVirus; i++)
			this -> virus [ i ]  = base.virus[ i ];
			
			if ( user !=0 )
				delete [ ] user;
}


McAffe::~McAffe()
{
}

//Metodos:

void McAffe::verificarVirus( int numbInfectado  )
{
      
	if ( numbInfectado == 3 )
		{
			 const string typeS ; 
			 
					cout << "\n";
					cout << " A partir das suas respostas o seu computador provalmente não está infectado, para continuar assim utilize o Internet Security.\n";
					cout << " Melhore sua experiencia e assine o McAffe\n ";
					this-> typeS = " Internet Security";
					//user->setTypeSubs( typeS );
				
				
				
		}
		else 
		{
			
					cout << "\n";
					cout << "A partir das suas respostas há uma possibilidade de seu computador ter um arquivo infectado, para ficar livre de qualquer vírus utilize o  Total Security.\n";
					cout << "  Usando o McAffe você fica seguro e livre de qualquer vírus \n";
				    this-> typeS = " Total Security";
                    //user->setTypeSubs( typeS );
		}
					 
}


 void McAffe::tiposDeAssinaturas( )  const
{
	
	cout  << "Tipos de assisnaturas são:\n\n";
	cout  << "\n";
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
	
}

void McAffe::printVirus( ) const
{
	
	
		cout << "Quantidade de virus cadastrado(s) é(são):   " << quantVirus << '\n';
		cout << "\n";
		for( int i =0; i < quantVirus; i++)
		{
			
			//cout << "Imprimir virus " << i  + 1<< "\n";
			//virus[ i ].printVirus( );
			cout << " O  nome do vŕus é \n" ;
			virus[ quantVirus - 1 ].printVirus( ) ;

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
		
	}
	
}

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

void McAffe::setConfigUser(  const string &name, int id, const string  &typeS, int pass )
{
	
	user->setNameUser( name );
	user->setId( id );
	user->setTypeSubs( typeS );
	user->setPassword( pass );
	
}


void McAffe::setSenha( int senha )
{
	
	user->setPassword( senha );

}


void McAffe::setAssinatura( const string &tipo )
{
	
	 user->setTypeSubs( tipo );  

	
}


void McAffe::getNome(  )
{
	
 this-> NOME;
	
}


void setNome ( const string &nomezin)
{
	
	
	
}
	
	