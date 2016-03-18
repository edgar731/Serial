/*************************************************************************
**                                                                      **
**                   TEMPERATURA                                        **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************

int energiaCasa =90
;

//******  Setup  *********************************************************
void setup(){

 Serial.begin(9600); 
 if ( energiaCasa < 3.5)
  {
    Serial.print("A"); 
  }
  
 else if (energiaCasa < 6.5)
  {
    Serial.print("B"); 
  }
 else  if (energiaCasa < 11.1)
  {
    Serial.print("C"); 
  }
   else  if (energiaCasa < 6.5)
  {
    Serial.print("D"); 
  }
  else if (energiaCasa < 38.2)
  {
  Serial.print("E"); 
  }
 else  if (energiaCasa < 43.2)
{
    Serial.print("F"); 
  }
  
  else if (energiaCasa >= 43.2)
  
  {
    Serial.print("G"); 
      
    }
}

//******  Loop  **********************************************************
void loop() {
} 



