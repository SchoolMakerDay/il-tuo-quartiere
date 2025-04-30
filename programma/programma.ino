int pinSensore0(A0);
int pinSensore1(A1);
int pinSensore2(A2);
int pinButt1(9);
int pinPompa(8);
int pinRubinetto();
int pinLeva(10);
int pinLed0(10);
int pinLed1(11);
int sensore0;
int sensore1;
int sensore2;
int butt1;
int leva;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinSensore0, INPUT_PULLUP);
  pinMode(pinSensore1, INPUT_PULLUP);
  pinMode(pinSensore2, INPUT_PULLUP);
  pinMode(pinButt1, INPUT_PULLUP);
  pinMode(pinPompa, OUTPUT);
  pinMode(pinLed0, OUTPUT);
  pinMode(pinLed1, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  sensore0 = analogRead(pinSensore0);
  sensore1 = analogRead(pinSensore1);
  sensore2 = analogRead(pinSensore2);
  butt1 = digitalRead(pinButt1);

//Serial.println(sensore);
  if(butt1 == 0)
    {
      Serial.println("pinButt ON: pompa ON");
      digitalWrite(pinPompa, HIGH);
    }
  else
   {
     Serial.println("pinButt OFF");
     digitalWrite(pinPompa, LOW);
   }

  if(sensore0 < 300)

    {
      Serial.println("sensore0 ON: ledG ON");
      digitalWrite(pinLed0, HIGH);
    }
  else
   {
     Serial.println("sensore0 OFF");
     digitalWrite(pinLed0, LOW);
   }

 if(sensore1 < 300)
    {
      Serial.println("sensore1 ON: ledR ON");
      digitalWrite(pinLed1, HIGH);
    }
  else
   {
     Serial.println("sensore1 OFF");
     digitalWrite(pinLed1, LOW);
   }

 if(sensore2 < 300)
    {
      Serial.println("sensore2 ON: pompa ON");
      digitalWrite(pinPompa, HIGH);
    }
  else
   {
     Serial.println("sensore2 OFF");
     digitalWrite(pinPompa, LOW);
   }
   
delay(10);
}
