/*************************************************************************
**                                                                      **
**                   DEC,BIN,HEX i OCT                                  **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************

int num = 64;

//******  Setup  *********************************************************
void setup(){
  
  Serial.println("Different formats for the same number:");

  Serial.write(num);
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);
  
  Serial.println(num,BIN);
  
  Serial.println(num,HEX);
  
  Serial.println(num,OCT);

}


//******  Loop  **********************************************************
void loop (){
  
}
