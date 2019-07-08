#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include "SoftwareDeSeguranca.h"
#include "Firewall.h"
#include "Antispyware.h"
#include "Antivirus.h"
#include "McAfee.h"
#include "Panda.h"

using std::vector;
using std::cout;
using std::cin;
using std::string;

int main(int argc, char **argv)
{
    
    Firewall firewall;
    Antispyware antispyware;

    vector < SoftwareDeSeguranca* > seguranca;
    seguranca.push_back (new Firewall ("192.168.0.2", "255.255.255.0"));
    seguranca.push_back (new Firewall ("168.192.0.1", "255.255.255.0"));
    seguranca.push_back (new Antispyware ("McAfee", "Antivirus"));
    seguranca.push_back (new Antispyware ("Panda", "Antivirus"));
    
    for (int i = 0; i < seguranca.size () ; i++){
        seguranca[i]->printDados();
        
        
    Firewall *derivedPtr = dynamic_cast < Firewall * > ( seguranca[i] );

    if ( derivedPtr !=0 ) 
        cout << " Teste do dynamic_cast \n";
        cout <<"\n";
        
    }
    
   
    for( size_t i = 0; i < seguranca.size( ); i++ )
	{
		cout << " Deletando objeto de  "
		<< typeid( *seguranca[ i ] ).name() << '\n';
		delete seguranca[ i ];
    }




   





}
