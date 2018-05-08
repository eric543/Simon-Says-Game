const int buttonPin1 = 4;
const int buttonPin2 = 2;
const int buttonPin3 = 3;
const int ledPin1 = 11;
const int ledPin2 = 12;      
const int ledPin3 = 13;
const int buzzer = 8;

int array[20];
int sequence;
int button1;
int button2;
int button3;

void setup() 
{
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buttonPin3, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));  
  for (int i = 0; i < 20; i++)
  {
    for (int j = 0; j <1; j++)
    {
    sequence = random(1,4);
    array[i] = sequence;
    if (sequence == 1)
  {
    digitalWrite(ledPin1, HIGH);
    tone(buzzer, 1000); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    delay(1000);
    digitalWrite(ledPin1, LOW);
  }

  if (sequence == 2)
  {
    digitalWrite(ledPin2, HIGH);
    tone(buzzer, 1200); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    delay(1000);
    digitalWrite(ledPin2, LOW);
  }
  
  if (sequence == 3)
  {
    digitalWrite(ledPin3, HIGH);
    tone(buzzer, 1400); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    delay(1000);
    digitalWrite(ledPin3, LOW);
  }
  }
}
}
void loop()
{
  
  button1 = digitalRead(buttonPin1);
  if(button1 == HIGH){
    digitalWrite(ledPin1, HIGH);
    tone(buzzer, 1000); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    delay(1000);
  }
  else{
    digitalWrite(ledPin1, LOW);
  }
   button2 = digitalRead(buttonPin2);
  if(button2 == HIGH){
    digitalWrite(ledPin2, HIGH);
    tone(buzzer, 1200); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    delay(1000);
  }
  else{
    digitalWrite(ledPin2, LOW);
  }
   button3 = digitalRead(buttonPin3);
  if(button3 == HIGH){
    digitalWrite(ledPin3, HIGH);
    tone(buzzer, 1400); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    delay(1000);
  }
  else{
    digitalWrite(ledPin3, LOW);
  }
}

