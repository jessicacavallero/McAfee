#include "Virus.h"
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

using std::ostream; 



//Construtores:

 Virus::Virus (  const string & nVirus, int aVirus, const string &eVirus, int qVirus)
{

	this-> nomeDoVirus = nVirus;
	this-> anoDoVirus = aVirus;
	this-> efeitoDoVirus = eVirus;
	this->quantidadeDeVirus = qVirus;
		
}	


Virus::Virus ( int anoDoVirus )
{
	
	if ( anoDoVirus< 1998)
	{
		cout << " ANO NÃO ";
	}
	
}


Virus::Virus ( const Virus &substrato)
{

	this-> nomeDoVirus= substrato.nomeDoVirus;
	this-> anoDoVirus = substrato.anoDoVirus;
	this-> efeitoDoVirus = substrato.efeitoDoVirus;
 
}


//Destrutores:



// Metodos:


ostream &operator << (ostream & print, const Virus &virus )
{

 print << "O nome, o ano e o efeito do vírus são :  " << virus.nomeDoVirus<< '\t' << virus.anoDoVirus << '\t' << virus.efeitoDoVirus<< '\n';
 
return  print ;

}


void Virus::printVirus( ) const
{
	
	 cout << this->nomeDoVirus << "\n";
	 
}


void Virus::infoVirus() const 
{
	
	cout <<"O (s) nome (s) cadatrado (s) foi (foram ): " << nomeDoVirus;
	
}