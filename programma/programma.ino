int pinSensore0(A0);
int pinSensore1(A1);
int pinSensore2(A2);
int pinPompa(8);
int pinLeva(10);
int sensore0;
int sensore1;
int sensore2;
int leva;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinSensore0, INPUT_PULLUP);
  pinMode(pinSensore1, INPUT_PULLUP);
  pinMode(pinSensore2, INPUT_PULLUP);
  pinMode(pinPompa, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  sensore0 = analogRead(pinSensore0);
  sensore1 = analogRead(pinSensore1);
  sensore2 = analogRead(pinSensore2);
//Serial.println(sensore);
  if(sensore0 < 300)
    {
      Serial.println("ON");
      digitalWrite(pinPompa, HIGH);
    }
  else
   {
     Serial.println("OFF");
     digitalWrite(pinPompa, LOW);
   }
   
delay(10);
}

