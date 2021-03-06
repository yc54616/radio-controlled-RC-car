//오른쪽 모터 - 7, 8, 9
//7 - 후진
//8 - 전진
//9 - 속도 조절

//왼쪽 모터 - 3, 4, 5
//4 - 후진
//5 - 전진
//3 - 속도 조절

void setup() {
  pinMode(7, OUTPUT);       
  pinMode(8, OUTPUT);       
  pinMode(4, OUTPUT);       
  pinMode(5, OUTPUT);      
  Serial.begin(9600); 
}

void loop() {
  char input = Serial.read();
  if(input == 'W'){
    W();
    delay(500);
    R();
  }
  else if(input == 'D'){
    D();
    delay(500);
    R();
  }
  else if(input == 'A'){
    A();
    delay(500);
    R();
  }
  else if(input == 'S'){
    S();
    delay(500);
    R();
  }
}

void R(){
  analogWrite(3, 0); 
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  analogWrite(9, 0); 
}

void W(){
  analogWrite(3, 150); 
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  analogWrite(9, 150); 
}

void D(){
  analogWrite(3, 150); 
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  analogWrite(9, 150); 
}

void A(){
  analogWrite(3, 150); 
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  analogWrite(9, 150); 
}

void S(){
  analogWrite(3, 150); 
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  analogWrite(9, 150); 
}
