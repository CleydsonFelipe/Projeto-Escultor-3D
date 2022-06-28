#include  <iostream>
#include  <fstream>
#include  <string>
#include  "voxel.hpp"
#include  "scultor.hpp"
using  namespace  std ;

int  main () {
  Sculptor Gato (50, 50, 50);
  //Corpo
  Gato. setColor(0, 0, 0, 1.0);
  Gato.putBox(7, 22, 5, 11, 1, 6);
  Gato. cutBox(7, 8, 5, 7, 1, 6);
  //Cabeça
  Gato. setColor(0,0,0,1.0);
  Gato.putBox(2, 7, 8, 12, 1, 6);
  //Orelhas
  Gato. setColor(255,255,255,1.0);
  Gato.putBox(4, 6, 12, 13, 2, 3);
  Gato. setColor(255,255,255,1.0);
  Gato.putBox(4, 6, 12, 13, 4, 5);
  //Olhos
  Gato. setColor(255,255,255,1.0);
  Gato.putBox(2, 3, 10, 11, 1, 2);
  Gato. setColor(255,255,255,1.0);
  Gato.putBox(2, 3, 10, 11, 5, 6);
  Gato. setColor(0,255,0,1.0);
  Gato.putBox(2, 3, 10, 11, 2, 3);
  Gato. setColor(0,255,0,1.0);
  Gato.putBox(2, 3, 10, 11, 4, 5);
  //Focinho
  Gato. setColor(255,255,255,1.0);
  Gato.putBox(1, 2, 8, 10, 2, 5);
  Gato. setColor(255,105,180,1.0);
  Gato.putBox(1, 2, 9, 10, 3, 4);
  //Coleira
  Gato. setColor(255,182,193,1.0);
  Gato.putBox(7, 8, 7, 11, 1, 6);
  //Pingente
  Gato. setColor(255,215,0,1.0);
  Gato. putBox(7,8, 6, 7, 3, 4);
  //Patas
  Gato. setColor(0, 0, 0, 1.0);
  Gato.putBox(8, 10, 1, 5, 1, 3);
  Gato.putBox(8, 10, 1, 5, 4, 6);
  Gato.putBox(19, 21, 1, 5, 1, 3);
  Gato.putBox(19, 21, 1, 5, 4, 6);
  Gato. setColor(255, 255, 255, 1.0);
  Gato.putBox(8, 10, 1, 2, 1, 3);
  Gato.putBox(8, 10, 1, 2, 4, 6);
  Gato.putBox(19, 21, 1, 2, 1, 3);
  Gato.putBox(19, 21, 1, 2, 4, 6);
  //Rabo
  Gato. setColor(255, 255, 255, 1.0);
  Gato. putBox(22, 23, 9, 11, 3, 4);
  Gato. putBox(23, 24, 8, 10, 3, 4);
  Gato. putBox(24, 25, 7, 9, 3, 4);
  Gato. putBox(25, 26, 6, 8, 3, 4);
  Gato. putBox(26, 27, 5, 7, 3, 4);
  Gato. putBox(26, 29, 5, 6, 3, 4);
  Gato. writeOFF ((const char *)"Gato.off");

  //Esfera e Elipsóide
  
    Sculptor EE(60,60,60);
    EE.setColor(0,0,139,1);
    EE.putSphere(40,40,40,10);
    
    EE.setColor(255,20,147,1);
    EE.putEllipsoid(20,20,20,15,10,7);
    EE.writeOFF((const char*)"Esfera_Elipisóide.off");
  

	return  0 ;
}
