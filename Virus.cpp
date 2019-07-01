#include "Virus.h"
#include <iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;
using std::ostream; 

Virus::Virus ( const string & nVirus, int aVirus, const string &eVirus, int qVirus )
{

   this-> nomeDoVirus = nVirus;
   this-> anoDoVirus = aVirus;
   this-> efeitoDoVirus = eVirus;
   this-> quantidadeDeVirus = qVirus;
		
}


Virus::Virus ( int anoDoVirus )
{
	
  if ( anoDoVirus < 1998)
   cout << "Ano invalido ";
  else
   cout << "COMPLETO";
	
}


Virus::Virus ( const Virus &substrato)
{

   this-> nomeDoVirus= substrato.nomeDoVirus;
   this-> anoDoVirus = substrato.anoDoVirus;
   this-> efeitoDoVirus = substrato.efeitoDoVirus;
   this-> quantidadeDeVirus = substrato.quantidadeDeVirus;

}


Virus::~Virus()
{
}

ostream &operator << ( ostream & print, const Virus &virus )
{

 print << "O nome, o ano e o efeito do vírus são :  " << virus.nomeDoVirus<< '\t' << virus.anoDoVirus << '\t' << virus.efeitoDoVirus<< '\n';
 return  print;

}


void Virus::printVirus( ) const
{

  cout << this->nomeDoVirus << "\n";
	 
}

