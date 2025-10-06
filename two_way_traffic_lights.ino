//first direction
int red1=2;
int yellow1=4;
int green1=5;

//second direction
int red2=18;
int yellow2=19;
int green2=21;
int button=34;
int buttonvalue;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(red1,OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(green1,OUTPUT);

  pinMode(red2,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(green2,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
  }
  
  

void loop() {
  buttonvalue = digitalRead(button);
  Serial.println("btnval");
  Serial.println(buttonvalue);

   if (buttonvalue==HIGH){
  

//in the first direction, cars are at rest, but the second direction, cars are moving. 
 digitalWrite(red1,HIGH);
 digitalWrite(yellow1,LOW);
 digitalWrite(green1,LOW);

 digitalWrite(red2,LOW);
 digitalWrite(yellow2,HIGH);
 digitalWrite(green2,LOW);

delay(200);
 

//in the first direction, cars are at rest and they are preparing to go, but the second direction, cars are moving and preparing to stop.
 digitalWrite(red1,HIGH);
 digitalWrite(yellow1,LOW);
 digitalWrite(green1,LOW);

 digitalWrite(red2,LOW);
 digitalWrite(yellow2,LOW);
 digitalWrite(green2,HIGH);

 delay(300); 

//in the second direction, cars are at rest, but the first direction, cars are moving.
  digitalWrite(red1,LOW);
 digitalWrite(yellow1,HIGH);
 digitalWrite(green1,LOW);

 digitalWrite(red2,HIGH);
 digitalWrite(yellow2,LOW);
 digitalWrite(green2,LOW);

 delay(200);


//in the second direction, cars are at rest and they are preparing to go, but the first direction, cars are moving and preparing to stop.z
 digitalWrite(red1,LOW);
 digitalWrite(yellow1,LOW);
 digitalWrite(green1,HIGH);

 digitalWrite(red2,HIGH);
 digitalWrite(yellow2,LOW);
 digitalWrite(green2,LOW);

 delay(300); 

  }

else{
      digitalWrite(yellow1,HIGH);
    digitalWrite(yellow2,HIGH);
          digitalWrite(red1,LOW);
    digitalWrite(red2,LOW);
       digitalWrite(green1,LOW);
    digitalWrite(green2,LOW);
    
delay(300);
    
    digitalWrite(yellow1,LOW);
    digitalWrite(yellow2,LOW);
      digitalWrite(red1,LOW);
    digitalWrite(red2,LOW);
          digitalWrite(green1,LOW);
    digitalWrite(green2,LOW);    
 delay(300);
  }
 


} 
