#ifndef MCAFFE_H
#define MCAFFE_H
#include <iostream>
#include <string>



using std::cout;

class McAffe
{
    
    
public:

    McAffe( );
    
    ~McAffe();
    
    void verificarVirus( int );
    void adicionarVirus( char );
    void adicionarVirus( int );

   
    
    
private:

   
  int numbinfectado;   
  int idvirus;
  char nomedovirus;

};
 
#endif // MCAFFE_H
