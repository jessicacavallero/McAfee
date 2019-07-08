#include "Antivirus.h"

const string Antivirus::NOME = "Jessica Cavallero";

Antivirus::Antivirus(  ) // Construtor que não recebe nenhum dos argumentos
: virus(), user(),SoftwareDeSeguranca( )
{
    this-> nUsuario = " ";
	this-> idUsuario = 0;
	this-> qUsuario = 0;
	this-> tUsuario  = " ";
    this-> qVirus = 0;
    this-> eVirus = "";
    this-> aVirus = 1998;
    this-> ameacaA = true;
	this-> atualizacaoA = true;
    this-> pontoA = true;
    this-> idade = 0;
    this-> senha = 0;
    
}

Antivirus::Antivirus( const  Antivirus &base )
: SoftwareDeSeguranca(  base  )
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


Antivirus::~Antivirus()
{
}

ostream &operator <<(ostream & print, const Antivirus & antivirus )
{
    
	print << "Lista de Virus:\n";
	for(int i = 0; i < antivirus.qVirus; i++ )
		print << antivirus.virus[ i ] << '\n';

	print << "Lista de Usuario(s):\n";
	for(int i = 0; i < antivirus.qUsuario; i++ )
		print << antivirus.user[ i ] << '\n';


	return print;
 
}


bool Antivirus::verificarAmeaca( bool threat )
{
    if ( ameacaA == true) 
        cout << "Procurando por vírus \n"; 
    else
        cout << "A verificação ficará para outra hora\n" ;
}

bool Antivirus::fazerAtualizacoes ( bool update )
{
    if (atualizacaoA == true )
        cout << " Fazendo atualização no banco de dados do antivirus\n";
    else
        cout << "Você cancelou a atualização\n";
}

bool Antivirus::pontoDeRestauracao ( bool spot )
{
    if ( pontoA == true )
        cout << "Seu ponto de restauração está sendo feito \n ";
    else 
        cout << "Você não tem ponto de restauração\n";
}

int Antivirus::idadeDeAcesso ( int age )
{
      if ( idade >= 18)
    {
        cout << " Você está liberado para acessar qualquer site\n";
    }
    else 
    {
        cout << " Você poderá acessar a internet, porém alguns sites serão bloqueados\n";
    }
    
}


void Antivirus::criacaoDeSenha ()
{
     int i;
    
    cout << "Sua senha é : \n";
    for (i=0; i<8; i++)
        senha = ("%d", rand() %9);
        cout << senha;
    
}



bool Antivirus::operator != (const Antivirus &right ) 

{
		return ! ( *this == right );

}

const Antivirus &Antivirus::operator = ( const Antivirus &right ) 
{
    ameacaA = right.ameacaA ;
    atualizacaoA = right.atualizacaoA;
    pontoA = right.pontoA; 
    idade = right.idade;
    senha = right.senha;
   
	return *this;
}


bool Antivirus::operator == ( const Antivirus &right)const
{
    if ( ameacaA != right.ameacaA)
		return false;
    if (atualizacaoA != right.atualizacaoA)
		return false;
    if (pontoA != right.pontoA)
		return false;
    if (idade != right.idade)
		return false;
    if (senha != right.senha)
		return false;
  
    return true;
}


void Antivirus::adicionarUsuario( const Assinante&usuario )
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
	else
	{
		
		user = new Assinante [ ++qUsuario ];
		user[ qUsuario - 1 ] = usuario;
	
	}
}

void Antivirus::adicionarVirus( const Virus&ameaca )
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

