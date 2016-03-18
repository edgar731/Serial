
/*************************************************************************
**                                                                      **
**                        Operacions matemàtiques                       **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************
 
int a = 5; 
int b = 10; 
int c = 20;

//******  Setup  *********************************************************
void setup() //executar una vegada, quan s'inicia 
{
  Serial.begin(9600);   
  Serial.println ("Here is the math:") ;
   
  
  Serial.print("a=");
  Serial.println(a);
  Serial.print("b=");
  
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // sumar
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplicar
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // dividir
  Serial.println(c / b);

  Serial.print("c % b = ");       // tant per cent
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // restar
  Serial.println(b - c);
}

  
  
//******  Loop  **********************************************************
void loop (){

}
