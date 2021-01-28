
float randomNumber[100];
float dataEMG[2];

void setup() {
  Serial.begin(115200); // Starts the serial communication
}
void loop() 
{
   int sensorValue1 = analogRead(A0);
   int sensorValue2 = analogRead(A1);

   
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
      float e1 = map(sensorValue1,0,1023,0,255);
      float e2 = map(sensorValue2,0,1023,0,255);

      dataEMG[0]= e1;
      dataEMG[1]= e2;
      Serial.print(dataEMG[0]);
      Serial.print(":");
      Serial.print(dataEMG[1]);
      Serial.println();
      
 
   delay(250);
 
}
