#include "McAfee.h"
#include "Assinante.h"
#include <string>

using std::string;
using std::ostream;


//Construtores :

McAfee::McAfee(int qUsuario , const string &nUsuario, int idUsuario, int pUsuario, const string &tUsuario) // Construtor que recebe todos os argumentos
//:Assinante( )
{

	setUser(qUsuario);

	setName(nUsuario);

	setIdUser(idUsuario);

	setPassword(pUsuario);

	setType( tUsuario);
	
	this-> vetorUser = new Assinante*[ qUsuario ];

}

McAfee::McAfee(  ) // Construtor que não recebe nenhum dos argumentos
//: Assinante ()
{
	this-> nUsuario = " ";
	this-> idUsuario = 0;
	this-> qUsuario = 0;
	this-> tUsuario  = " ";
	
	this->vetorUser = new Assinante*[qUsuario];
	
}

McAfee::McAfee( const  McAfee &base )
{

		this->soma = base.soma;
		this->qVirus = base.qVirus;
		this->qUsuario = base.qUsuario;
		
				
		if( user != 0 )
			delete [ ] user;
			
		user = new Assinante[  this->qUsuario ];		
		for( int i = 0; i < this->qUsuario; i++ )
			this->user[ i ] = base.user[ i ];
			
			if ( virus != 0 )
			    delete [ ] virus;
		
       virus = new Virus [ this->qVirus ];
	      for ( int i = 0; i < this -> qVirus; i++)
			this -> virus [ i ]  = base.virus[ i ];
			
			if ( user !=0 )
				delete [] user;
}


//Destrutores:
McAfee:: ~McAfee( )
{
	
	
}

//Metodos:
ostream &operator <<(ostream & print, const McAfee & antivirus )
{

print << "Os virus sao:\n";
 for(int i = 0; i < antivirus.qVirus; i++ )
print << antivirus.virus[ i ] << '\n';

print << "Os virus sao:\n";
 for(int i = 0; i < antivirus.qUsuario; i++ )
print << antivirus.user[ i ] << '\n';


 return print;
 
}


//const McAfee &operator = ( const McAfee &);

/*	
bool operator != (const McAfee &right ) 

{
		return ! ( *this == right );

}


bool McAfee::operator == ( const McAfee &right)const
 {
	if (qUsuario != right.qUsuario && qVirus != right.qVirus)
		return false;
	
	for (int i=0;i<qUsuario;i++)
	{
		if (user [ i ] != right.user [ i ] )
			return false;
	}
	for (int i=0; i < qVirus ; i++)
    if ( virus[ i ] != right.virus[ i ] )
      return false;
		
	return true;
}
**/


const McAfee &McAfee::operator =  ( const McAfee &right ) 
{

	if (&right != this)
		nVirus = right.nVirus;
	{
		if (qVirus != right.qVirus)
		{
			delete [] virus;
			qVirus = right.qVirus;
			virus = new Virus [ qVirus ];
		}
		
		for (int i=0; i < qVirus; i++)
			virus[i] = right.virus[i];
	}
	return *this;
	
		if (&right != this)
		nUsuario = right.nUsuario;
	{
		if (qUsuario != right.qUsuario)
		{
			delete [] user;
			qUsuario = right.qUsuario;
			user = new Assinante [ qUsuario ];
		}
		
		for (int i=0; i < qUsuario; i++)
			user[i] = right.user[i];
	}
	return *this;
}

Virus &McAfee::operator[ ] ( int subscript )
{
	if (subscript < 0 || subscript >= qVirus)
	{
		cout << "\nErro: Subscript " << subscript
		<< " dssd" ;
		exit(1);
	}
	
	return virus [subscript];
}


Virus McAfee::operator [ ] ( int subscript )const
{
	if (subscript < 0 || subscript >= qUsuario)
	{
		cout << "\nErro: Subscript " << subscript
		<< " fora de alcance" ;
		exit(1);
	}
	
	return virus[subscript];
}

bool McAfee::operator < ( const McAfee &right )const
{
	if (qUsuario < right.qUsuario && qVirus < right.qVirus)
	{
		return true;
	} else
	{
		return false;
}
}




string McAfee::verificarVirus ( int soma  )
{
      
	if ( soma == 3 )
		{
			
			     string type ; 
					cout << "\n";
					cout << " A partir das suas respostas o seu computador provalmente não está infectado, para continuar assim utilize o Internet Security.\n";
					cout << " Melhore sua experiencia e assine o McAffe\n ";
					type = " Internet Security";
					user->setType( type);
		
		}
		else 
		{
			
					string type; 
                    cout << "\n";
					cout << "A partir das suas respostas há uma possibilidade de seu computador ter um arquivo infectado, para ficar livre de qualquer vírus utilize o  Total Security.\n";
					cout << "  Usando o McAffe você fica seguro e livre de qualquer vírus \n";
				   type = " Total Security";
				    user->setType( type);
					
		}
					 
}


void McAfee::addVirus ( const Virus&ameaca )
{
	
	if( virus != 0 )
	{

		Virus *aux = new Virus [ qVirus ];
	
		for ( int i = 0 ; i  <  qVirus ; i++)
			 aux[ i ]  = virus[ i ];
			 
		delete [ ]  virus;

		virus = new Virus [ ++qVirus ];
	
		for (int i = 0; i  < qVirus - 1; i++ )
			virus[ i ] = aux [ i ];
		
		virus[ qVirus - 1 ] =  ameaca;

		delete [ ]  aux ;
		
	}
	else
	{
		
		virus = new Virus [ ++qVirus ];
		virus[ qVirus - 1 ] = ameaca;
	
	}
}

/*void McAfee::printVirus( ) const
{
	
	
		cout << "Quantidade de virus cadastrado(s) é(são):   " << qVirus << '\n';
		cout << "\n";
		for( int i =0; i < qVirus; i++)
		{
			
			//cout << "Imprimir virus " << i  + 1<< "\n";
			//virus[ i ].printVirus( );
			cout << " O  nome do vŕus é \n" ;
			virus[ qVirus - 1 ].printVirus( ) ;

         }
		
}

	
**/

void McAfee::addUser( const Assinante&usuario )
{
	
	if( user != 0 )
	{

		Assinante *aux = new Assinante [ qUsuario ];
	
		for ( int i = 0 ; i  <  qUsuario ; i++)
			 aux[ i ]  = user[ i ];
			 
		delete [ ]  user;

		user = new Assinante [ ++qUsuario ];
	
		for (int i = 0; i  < qUsuario - 1; i++ )
			user[ i ] = aux [ i ];
		
		user[ qUsuario - 1 ] =  usuario;

		delete [ ]  aux ;
		
	}
}


	void McAfee::setUser ( int qUser)
	{
		this-> qUsuario = qUser;
	}

	void McAfee::setName ( const string &name )
	{
		this -> nUsuario= name;
		
	}

	void McAfee::setIdUser( int idUser)
	{
		
		this -> idUsuario = idUser;
		
	}

	void McAfee::setPassword( int password )
	{
		
		this -> pUsuario = password;
	}

	void McAfee::setType( const string &type)
	{
		
		this -> tUsuario = type;
	}


/**
void McAfee::getUser(  ) const
	{
		
	}

	void McAfee::getName(  ) const 
	{
		
		
	}

	void McAfee::getIdUser(  ) const 
	{
		
		
	}

	void McAfee::getPassword(  ) const 
	{
		
		
	}

	void McAfee::getType( ) const 
	{
		
		
	}


**/