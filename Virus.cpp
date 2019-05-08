#include "Virus.h"
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

//Construtores:

 Virus::Virus (  const string & nomeV, int ano, const string &effect )
{

	this-> nomeVirus = nomeV;
	this-> anoVirus = ano;
	this-> efeitoVirus = effect;
		
}	


Virus::Virus ( int anoVirus )
{
	
	if ( anoVirus< 1998)
	{
		cout << " ANO NÃO ";
	}
	
}


Virus::Virus ( const Virus &substrato)
{

}


//Destrutores:



// Metodos:

void Virus::printVirus( ) const
{
	cout << this->nomeVirus << "\n";
}


void Virus::infoVirus() const 
{
	
	
}