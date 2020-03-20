#ifndef CAMBIOENCENTAVOS_H
#define CAMBIOENCNTAVOS_H

class CambioEnCentavos{

// Metodos 
public:
   
/*
*Como primer paso lo que haremos sera crear el metodo constructor
*En este caso solamente vamos a tner uno
*Esta sera la entrada la cual sera la cantidad que debo ser menor de 100 (<100)
*/

  // Metodos constructores                        
   CambioEnCentavos(int cantidad<100);
   CambioEnCentavos();

/*
*Ahora lo que se hara son los metodos setter
*En esta parte se le asignara un valor inicial a los atributos
*En este caso mis atributos seran los centavos 
*Y el valor que le asignare a cada uno de ellos sera el Numero de monedas (Nm)
*El Numero de monedas va a variar de cada centavo (50, 25, 10, 5, 1)
*/

  // Metodos setter
  void setCantidad(int cantidad<100);
  void setDevolveraCambio(int DevolverCambio);
  void setDevolveraCambio(int DevolverCambioNm50);
  void setDevolveraCambio(int DevolverCambioNm25);
  void setDevolveraCambio(int DevolverCambioNm10);
  void setDevolveraCambio(int DevolverCambioNm5);
  void setDevolveraCambio(int DevolverCambioNm1);
  
/*
*Ahora se declararan los metodos getter
*En esta parte se accedera al valor ya asignado a los atributos
*Y se ultilizaran para ciertos metodos los cuales seran el obtener los valores que se le asignen
*/

  //Metodos getter
  int getCantidad();
  int getDevolveraCambio();
  int getDevolveraCambio();
  int getDevolveraCambio();
  int getDevolveraCambio();
  int getDevolveraCambio();

/*
*Ahora en esta parte se declararan los atributos
*Estos se representan de forma privada ya que no se mostraran en el programa
*/

//Atributos
private:
int cantidad<100;
int DevolveraCambio;
int Devolvera cambioNm50;
int Devolvera cambioNm25;
int Devolvera cambioNm10;
int Devolvera cambioNm5;
int Devolvera cambioNm1;

};

#endif
 
