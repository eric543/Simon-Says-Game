const int buttonPin1 = 4, buttonPin2 = 2, buttonPin3 = 3;
//const int buttonPin2 = 2;
//const int buttonPin3 = 3;
const int ledPin1 = 11, ledPin2 = 12, ledPin3 = 13;
//const int ledPin2 = 12;      
//const int ledPin3 = 13;
const int buzzer = 8;

int array[20];
int sequence, button1, button2, button3;
//int button1;
//int button2;
//int button3;

void setup() { //Runs through all the statements once
  pinMode(ledPin1, OUTPUT); //Made the LED lights outputs
  pinMode(buttonPin1, INPUT); //Made the buttons inputs
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buttonPin3, INPUT);
  Serial.begin(9600); //This is the baud rate. It is the speed at which it receieves and sends things
  randomSeed(analogRead(0)); //This is the randomizer that generates random sequences
  
  for (int i = 0; i < 20; i++){ //This was supposed to be the maximum level for the blinks
    for (int j = 0; j <1; j++){ //This was supposed to make each level increment by one
      sequence = random(1,4); //The sequence lets the randomizer pick a number from 1-3
      array[i] = sequence; //This would store the sequence the randomizer makes
      
      if (sequence == 1){
        digitalWrite(ledPin1, HIGH);
        tone(buzzer, 1000); // Send 1KHz sound signal...
        delay(1000);        // ...for 1 sec
        noTone(buzzer);     // Stop sound...
        delay(1000);
        digitalWrite(ledPin1, LOW);
        }
      if (sequence == 2){
        digitalWrite(ledPin2, HIGH);
        tone(buzzer, 1200); 
        delay(1000);        
        noTone(buzzer);     
        delay(1000);
        digitalWrite(ledPin2, LOW);
        }
  
      if (sequence == 3){
        digitalWrite(ledPin3, HIGH);
        tone(buzzer, 1400); 
        delay(1000);        
        noTone(buzzer);     
        delay(1000);
        digitalWrite(ledPin3, LOW);
        }
      }
    }
  }

void loop(){ //Loops all the if else statements inside 
  button1 = digitalRead(buttonPin1);
  
  if(button1 == HIGH){ //If the button is pressed, the corresponding light will blink
    digitalWrite(ledPin1, HIGH);
    tone(buzzer, 1000); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    delay(1000);}
  else{
    digitalWrite(ledPin1, LOW); //If the button is not pressed, the lights will not blink
    }
  
  button2 = digitalRead(buttonPin2);
  
  if(button2 == HIGH){
    digitalWrite(ledPin2, HIGH);
    tone(buzzer, 1200); 
    delay(1000);        
    noTone(buzzer);     
    delay(1000);
    }
  else{
    digitalWrite(ledPin2, LOW);
    }
  button3 = digitalRead(buttonPin3);
  if(button3 == HIGH){
    digitalWrite(ledPin3, HIGH);
    tone(buzzer, 1400); 
    delay(1000);        
    noTone(buzzer);     
    delay(1000);
    }
  else{
    digitalWrite(ledPin3, LOW);
    }
 }

