int green1=13;
int yellow1=12;
int red1=11;
int green2=10;
int yellow2=9;
int red2=8;
int green3=7;
int yellow3=6;
int red3=5;
int green4=4;
int yellow4=3;
int red4=2;
bool executed1=false;
bool executed2=false;
bool executed3=false;
bool executed4=false;

void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT); //IR traffic light 1 sensor 1
pinMode(A1,INPUT); //IR traffic light 2 sensor 1
pinMode(A2,INPUT); //IR traffic light 3 sensor 1
pinMode(A3,INPUT); //IR traffic light 4 sensor 1
pinMode(A4,INPUT); //IR traffic light 4 sensor 2
pinMode(green1,OUTPUT); // GREEN LED pin of Traffic signal 1
pinMode(yellow1,OUTPUT); // YELLOW LED pin of Traffic signal 1
pinMode(red1,OUTPUT); // RED LED pin of Traffic signal 1
pinMode(green2,OUTPUT); // GREEN LED pin of Traffic signal 2
pinMode(yellow2,OUTPUT); // YELLOW LED pin of Traffic signal 2
pinMode(red2,OUTPUT); // RED LED pin of Traffic signal 2
pinMode(green3,OUTPUT); // GREEN LED pin of Traffic signal 3
pinMode(yellow3,OUTPUT); // YELLOW LED pin of Traffic signal 3
pinMode(red3,OUTPUT); // RED LED pin of Traffic signal 3
pinMode(green4,OUTPUT); // GREEN LED pin of Traffic signal 4
pinMode(yellow4,OUTPUT); // YELLOW LED pin of Traffic signal 4
pinMode(red4,OUTPUT); // RED LED pin of Traffic signal 4
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(analogRead(A0) < 500)
  {
    digitalWrite(green1,HIGH);
    digitalWrite(yellow1,LOW);
    digitalWrite(red1,LOW);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,LOW);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,HIGH);
    digitalWrite(green4,LOW);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,HIGH);
    delay(5000); // 5 Second Delay to avoid immediate traffic light change due to successive cars        
    executed1=true;
  }
  else
  {
    if(executed1==true)
    {
      digitalWrite(green1,LOW);
      digitalWrite(yellow1,HIGH); 
      digitalWrite(red1,LOW);
      digitalWrite(green2,LOW);
      digitalWrite(yellow2,LOW);
      digitalWrite(red2,HIGH);
      digitalWrite(green3,LOW);
      digitalWrite(yellow3,LOW);
      digitalWrite(red3,HIGH);
      digitalWrite(green4,LOW);
      digitalWrite(yellow4,LOW);
      digitalWrite(red4,HIGH);
      delay(3000); // 3 Second Delay from Amber to Red Light Change
      executed1=false;
    }
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW); 
    digitalWrite(red1,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,LOW);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,HIGH);
    digitalWrite(green4,LOW);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,HIGH);
  }
  if(analogRead(A1) < 500)
  {
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green2,HIGH);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,LOW);
    digitalWrite(green3,LOW);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,HIGH);
    digitalWrite(green4,LOW);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,HIGH);
    delay(5000); // 5 Second Delay to avoid immediate traffic light change due to successive cars        
    executed2=true;
  }
  else
  {
    if(executed2==true)
    {
      digitalWrite(green1,LOW);
      digitalWrite(yellow1,LOW); 
      digitalWrite(red1,HIGH);
      digitalWrite(green2,LOW);
      digitalWrite(yellow2,HIGH);
      digitalWrite(red2,LOW);
      digitalWrite(green3,LOW);
      digitalWrite(yellow3,LOW);
      digitalWrite(red3,HIGH);
      digitalWrite(green4,LOW);
      digitalWrite(yellow4,LOW);
      digitalWrite(red4,HIGH);
      delay(3000); // 3 Second Delay from Amber to Red Light Change
      executed2=false;
    }
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW); 
    digitalWrite(red1,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,LOW);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,HIGH);
    digitalWrite(green4,LOW);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,HIGH);
  }
  if(analogRead(A2) < 500)
  {
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,HIGH);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,LOW);
    digitalWrite(green4,LOW);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,HIGH);
    delay(5000); // 5 Second Delay to avoid immediate traffic light change due to successive cars        
    executed3=true;
  }
  else
  {
    if(executed3==true)
    {
      digitalWrite(green1,LOW);
      digitalWrite(yellow1,LOW); 
      digitalWrite(red1,HIGH);
      digitalWrite(green2,LOW);
      digitalWrite(yellow2,LOW);
      digitalWrite(red2,HIGH);
      digitalWrite(green3,LOW);
      digitalWrite(yellow3,HIGH);
      digitalWrite(red3,LOW);
      digitalWrite(green4,LOW);
      digitalWrite(yellow4,LOW);
      digitalWrite(red4,HIGH);
      delay(3000); // 3 Second Delay from Amber to Red Light Change
      executed3=false;
    }
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW); 
    digitalWrite(red1,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,LOW);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,HIGH);
    digitalWrite(green4,LOW);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,HIGH);
  }
  if(analogRead(A2) < 500 && analogRead(A5) < 500) //Sensors in series case
  {
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,HIGH);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,LOW);
    digitalWrite(green4,LOW);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,HIGH);
    delay(30000); // 30 Second Delay to clear heavy traffic        
    executed3=true;
  }
  else
  {
    if(executed3==true)
    {
      digitalWrite(green1,LOW);
      digitalWrite(yellow1,LOW); 
      digitalWrite(red1,HIGH);
      digitalWrite(green2,LOW);
      digitalWrite(yellow2,LOW);
      digitalWrite(red2,HIGH);
      digitalWrite(green3,LOW);
      digitalWrite(yellow3,HIGH);
      digitalWrite(red3,LOW);
      digitalWrite(green4,LOW);
      digitalWrite(yellow4,LOW);
      digitalWrite(red4,HIGH);
      delay(3000); // 3 Second Delay from Amber to Red Light Change
      executed3=false;
    }
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW); 
    digitalWrite(red1,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,LOW);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,HIGH);
    digitalWrite(green4,LOW);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,HIGH);
  }
  if(analogRead(A3) < 500)
  {
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,LOW);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,HIGH);
    digitalWrite(green4,HIGH);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,LOW);
    delay(5000); // 5 Second Delay to avoid immediate traffic light change due to successive cars        
    executed4=true;
  }
  else
  {
    if(executed4==true)
    {
      digitalWrite(green1,LOW);
      digitalWrite(yellow1,LOW); 
      digitalWrite(red1,HIGH);
      digitalWrite(green2,LOW);
      digitalWrite(yellow2,LOW);
      digitalWrite(red2,HIGH);
      digitalWrite(green3,LOW);
      digitalWrite(yellow3,LOW);
      digitalWrite(red3,HIGH);
      digitalWrite(green4,LOW);
      digitalWrite(yellow4,HIGH);
      digitalWrite(red4,LOW);
      delay(3000); // 3 Second Delay from Amber to Red Light Change
      executed4=false;
    }
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW); 
    digitalWrite(red1,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,LOW);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,HIGH);
    digitalWrite(green4,LOW);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,HIGH);
  }
  if(analogRead(A3) < 500 && analogRead(A4) < 500) //Sensors in series case
  {
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,LOW);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,HIGH);
    digitalWrite(green4,HIGH);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,LOW);
    delay(30000); // 30 Second Delay to clear heavy traffic       
    executed4=true;
  }
  else
  {
    if(executed4==true)
    {
      digitalWrite(green1,LOW);
      digitalWrite(yellow1,LOW); 
      digitalWrite(red1,HIGH);
      digitalWrite(green2,LOW);
      digitalWrite(yellow2,LOW);
      digitalWrite(red2,HIGH);
      digitalWrite(green3,LOW);
      digitalWrite(yellow3,LOW);
      digitalWrite(red3,HIGH);
      digitalWrite(green4,LOW);
      digitalWrite(yellow4,HIGH);
      digitalWrite(red4,LOW);
      delay(3000); // 3 Second Delay from Amber to Red Light Change
      executed4=false;
    }
    digitalWrite(green1,LOW);
    digitalWrite(yellow1,LOW); 
    digitalWrite(red1,HIGH);
    digitalWrite(green2,LOW);
    digitalWrite(yellow2,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(green3,LOW);
    digitalWrite(yellow3,LOW);
    digitalWrite(red3,HIGH);
    digitalWrite(green4,LOW);
    digitalWrite(yellow4,LOW);
    digitalWrite(red4,HIGH);
  }
}