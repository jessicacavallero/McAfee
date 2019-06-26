#ifndef VIRUS_H
#define VIRUS_H

#include <iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;
using std::ostream;


class Virus
{
	friend ostream &operator << (ostream & , const Virus &);
	
public:

	Virus( const string & = "", int = 0, const string & = "" , int = 0 );
	Virus( int );
	Virus (const Virus&);
	virtual~Virus();
	
	void printVirus( ) const;
      
   
		
	
private:

	
    int quantidadeDeVirus;
	string nomeDoVirus;
	int anoDoVirus;
	string efeitoDoVirus;

};
#endif // VIRUS_H