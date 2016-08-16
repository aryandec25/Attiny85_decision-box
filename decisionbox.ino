
//https://www.youtube.com/channel/UC9i2-Fy9IOo8yzypeB7Xpow

int red = 3;
int green = 0;
int blue = 1;
int button = 4;
int val = 0;
int rn = 0;

void setup(){
  pinMode(red, OUTPUT); 
  pinMode(green, OUTPUT); 
  pinMode(blue, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(blue,HIGH);
}

void loop(){

  val = digitalRead(button);
  randomSeed(millis());

  if(val==HIGH){
    delay(20);  //debounce
    rn = random(0,3);   //random selection


    if(rn==0){
      digitalWrite(red, LOW);
      delay(3000);   //time red LED is on
      digitalWrite(red, HIGH);  
    }

    if(rn==1){
      digitalWrite(green, LOW);
      delay(3000);   //time green LED is on
      digitalWrite(green, HIGH);  
    }

    if(rn==2){
      digitalWrite(blue, LOW);
      delay(3000);   //time blue LED is on
      digitalWrite(blue, HIGH); 
    }

  }
  delay(10);
}













