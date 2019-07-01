#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <vector>

#include "SoftwareDeSeguranca.h"

using std::cout;
using std::cin;
using std::string;

int main(int argc, char **argv)
{
 
    vector < SoftwareDeSeguranca* > seguranca;
    seguranca.push_back (new Firewall ("192.168.0.2", "255.255.255.0"));
    seguranca.push_back (new Firewall ("168.192.0.1", "255.255.255.0"));
    seguranca.push_back (new Antispyware ("McAfee", "Antivirus"));
    seguranca.push_back (new Antispyware ( "Panda", "Antivirus"));
    
    
    
    
    
    
}
