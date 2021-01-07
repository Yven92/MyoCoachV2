
float randomNumber[100];
float dataEMG[2];

void setup() {
  Serial.begin(9600); // Starts the serial communication
}
void loop() 
{
  
      dataEMG[0]= random(0,30);
      dataEMG[1]= random(0,30);
      Serial.print(dataEMG[0]);
      Serial.print(":");
      Serial.print(dataEMG[1]);
      Serial.println();
      
 
   delay(1000);
 
}
