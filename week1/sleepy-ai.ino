int no_leds = 5;

bool reset = false;

void turn_off(int a){
  digitalWrite(a, LOW);
}

void check_reset(){
  if (digitalRead(10) == HIGH){ 
  	reset = true;
  } 
}

void turn_on(int a){
  check_reset();
  for (int i = 0; i < no_leds; i++){
  	turn_off(i); 
  }
  digitalWrite(a, HIGH);  
}
void setup() {
  for(int i = 0; i< no_leds; i++){
  	pinMode(i, OUTPUT);
  }
  pinMode(13, OUTPUT); //for red LED
  pinMode(10, INPUT);
}

void loop() {
  for( int i = 1050; i >=0; i -= 200){ 
    if(reset){
      break;
    }
	one_iteration(i);
  }
  if(!reset){
 	 warning();
  }
  
  turn_on(0);
  turn_off(13);
  reset = false;
  
}

void warning(){
  for(int i =0; i = 3; i++){
    if(reset){
      break;
    }
  	turn_off(13);
    delay(500);
    turn_on(13);
	one_iteration(100);
    turn_off(1);
  }
}

void one_iteration(int time){
  for(int i = 0; i< no_leds; i++){
    turn_on(i);
    delay(time);
    if(reset){
      break;
    }
  }
  for(int i = no_leds-2; i>0; i--){
    turn_on(i);
    delay(time);
    if(reset){
      break;
    }
  }
  
}