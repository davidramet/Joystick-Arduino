const int VRx = 0;
const int VRy = 1;
const int SW = 2;

int calX, calY, calSW, rawX, rawY, rawSW;

void setup()
{
  Serial.begin(115200);
  calX = analogRead(VRx);
  calY = analogRead(VRy);
  calSW = analogRead(SW);
}


void loop()
{
  rawX = analogRead(VRx)- calX;
  rawY = analogRead(VRy)- calY;
  rawSW = analogRead(SW)- calSW;


  Serial.println("\nValue X : ");
  Serial.println((int)(rawX));
  Serial.println("Value y : ");
  Serial.println((int)(rawY));
  Serial.print("Switch : ");

  if(rawSW >50)
  {
  Serial.println("ON");
  }
  else
  {
  Serial.println("OFF");
  }
  
  delay(500);
}
