#include "CambioEnCentavos.h"

/*
*Se declarara el metodo constructor
*Aqui igual solamente contamos con uno la cual sera nuestra entrada
*La entrada sera la cantidad que dbe ser menor a 100
*/

//Metodos constructores
CambioEnCentavos:: CambioCentavos (int cantidad<100){
     this->CambioEnCentavos();
}
CambioEnCentavos::CambioEnCentavos(){
}


/*
*Ahora lo que se hara son los metodos setter
*En esta parte se le asignara un valor inicial a los atributos
*En este caso mis atributos seran los centavos 
*Y el valor que le asignare a cada uno de ellos sera el Numero de monedas (Nm)
*Utilizaremos el puntero this que  nos permitirá obtener una referencia al objeto como valor de retorno para nuestra operación 
*En este caso la operacion ser Nm, o sea obtener numero de monedas
*/

//Metodos setter

  void CambioEnCentavos::setCantidad(int cantidad<100){
  this->Cantidad = Cantidad;
}
  void CambioEnCentavos::setDevolveraCambio (int DevolveraCambio){
  this->DevolveraCambio = DevolveraCambio;
}

  void CambioEnCentavos::setDevolveraCambioNm50(DevolveraCambio50){
  this->DevolveraCambioNm50 =DevolveraCambioNm50;
}

  void CambioEnCentavos::setDevolveraCambioNm25(DevolveraCambio25){
  this->DevolveraCambioNm50 =DevolveraCambioNm25;
}

  void CambioEnCentavos::setDevolveraCambioNm10(DevolveraCambio10){
  this->DevolveraCambioNm50 =DevolveraCambioNm10;
}

  void CambioEnCentavos::setDevolveraCambioNm5(DevolveraCambio5){
  this->DevolveraCambioNm50 =DevolveraCambioNm5;
}

  void CambioEnCentavos::setDevolveraCambioNm1(DevolveraCambio1){
  this->DevolveraCambioNm50 =DevolveraCambioNm1;
}


/*
*Ahora se declararan los metodos getter
*En esta parte se accedera al valor ya asignado a los atributos
*Y se ultilizaran para ciertos metodos los cuales seran el obtener los valores que se le asignen
*En esta parte ya se encontaran nuestras salidas las cuales seran el Numero de Monedas de cada centavo
*/


//Metodos getter

  CambioEnCentavos::getCantidad(){}
  CambioEnCentavos::getDevolveraCambio(){}
  CambioEnCentavos::getDevolveraCambio50(){}
  CambioEnCentavos::getDevolveraCambio25(){}
  CambioEnCentavos::getDevolveraCambio10(){}
  CambioEnCentavos::getDevolveraCambio5(){}
  CambioEnCentavos::getDevolveraCambio1(){}

