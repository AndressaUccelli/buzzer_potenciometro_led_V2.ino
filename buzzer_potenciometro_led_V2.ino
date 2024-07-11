// C++ code
//

#define potpin 0 
#define ledpin 10
#define buzzer 11
int leitura = 0;
int bu=0;

void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(potpin, INPUT);
}

void loop()
{
  leitura = analogRead (potpin);
  
  leitura = map(leitura,0, 1023, 0, 255);
  bu=map(bu, 0, 1023, 0, 255);
  
  analogWrite (ledpin, leitura);
  
  tone(buzzer, leitura);
  
  delay(20);
  
  
  
  
}