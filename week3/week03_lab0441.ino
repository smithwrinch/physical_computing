
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte eye_one[8] = {
  B00000,
  B00000,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000,
  B00000
};

int led1 = 8;
int led2 = 10;
int led3 = 9;

int ldrPin = A0;
void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, eye_one);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(ldrPin, INPUT);
  
  Serial.begin(9600);
  neutral();
}

void loop() {
  //neutral();
  int ldrStatus = analogRead(ldrPin);
  
  //Serial.println(ldrStatus);
  /*
  
  mood switching would depend on ldr in actual model,
  would turn off lights as result 
  
  if(ldrStatus < 50){
    digitalWrite(led1, HIGH);
  }
    else if (ldrStatus < 400){
      digitalWrite(led2, HIGH);
      awake();
    }
  else{
    digitalWrite(led3, HIGH);
	angry();
  }*/
  randomlySwitchLight();
}
void angry(){
   lcd.setCursor(6, 0);
   lcd.print("> <");
   lcd.setCursor(0, 1);
   lcd.print("       x");
   delay(100); 
}

void awake(){
   lcd.setCursor(6, 0);
   lcd.print("0 0");
  
   lcd.setCursor(0, 1);
   lcd.print("       .");
   delay(100); 
}
void waking_up(){
   lcd.setCursor(0, 1);
   lcd.print("       ."); 
}
void neutral(){
 
  lcd.setCursor(0, 1);
  lcd.print("       -");
  lcd.setCursor(6, 0);
  lcd.write(byte(0));
  lcd.setCursor(8, 0);
  lcd.write(byte(0)); 
}
void randomlySwitchLight(){
  int finalNum = 0;
  int r;
  for(int i =8; i< 11; i++){
    r = random(0,2);
    finalNum += r;
    if(r == 1){
      digitalWrite(i, HIGH);
    }
    else{
      digitalWrite(i, LOW);
    }
    /* this switch wouldn't be in final model */
    Serial.println(finalNum);
    switch(finalNum){
      	case 2:
      	awake();
      	break;
     	case 3:
      	angry();
      	break;
      	case 1:
      	waking_up();
      	break;
      	default:
      	neutral();
      	break;
    }
  	delay(1000);
  }
}