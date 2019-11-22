int incomingByte = 0;

int seconds = 0;

int milliseconds = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    incomingByte = Serial.read();

    if (incomingByte == 49)
    {
      digitalWrite(4, HIGH);

      Serial.println("");

      Serial.println("-----------------------------");
      Serial.println("");
      Serial.println("Current through fuse");
      milliseconds = millis();
            
      
      delay(100);
    }
    if (incomingByte == 48)
    {
      digitalWrite(4, LOW);
      Serial.println("");

      Serial.println("-----------------------------");
      Serial.println("");
      Serial.println("Current through bypass");

      milliseconds =  millis()-milliseconds;
      seconds = milliseconds / 1000;
      Serial.println(seconds);
      Serial.println(milliseconds);
    }
  
    

  }
}

    
