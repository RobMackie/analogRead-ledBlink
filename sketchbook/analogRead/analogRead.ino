
#define POT_PIN_NUMBER 0
#define LED_PIN_NUMBER 13
#define MAX_POT_READING 1023
#define EXT_LED_PIN_NUMBER 10

void setup ()
{
    // no setup for analog reads
    // no setup for pwm writes
      pinMode(LED_PIN_NUMBER, OUTPUT);
      Serial.begin(9600);
}

void loop ()
{

  int pot_reading = analogRead(POT_PIN_NUMBER);
  pot_reading /= 4; // get the pot reading into the range of 0 .. 255
 
  if (pot_reading > 512) {
     digitalWrite(LED_PIN_NUMBER, HIGH); 
  } else {
     digitalWrite(LED_PIN_NUMBER, LOW); 
  }
 
  analogWrite(EXT_LED_PIN_NUMBER, pot_reading);
  Serial.println(pot_reading);
}


