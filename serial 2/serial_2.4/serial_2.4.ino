/*************************************************************************
**                                                                      **
**                   Conversor                                          **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************

int drive_gb = 100;
long int drive_mb;

//******  Setup  *********************************************************
void setup(){
 Serial.begin(9600);     
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");
  
 drive_mb = drive_gb;
 drive_mb = drive_mb * 1024;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");

 
 }


//******  Loop  **********************************************************
void loop (){
  
}
