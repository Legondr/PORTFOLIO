const int tlacitko0plus = 2;
const int tlacitko1krat = 3;
const int tlacitko2minus = 4;
const int tlacitko3deleno = 5;
const int tlacitko4rovnase = 6;
const int tlacitko5 = 7;
const int tlacitko6 = 8;
const int tlacitko7 = 9;
const int tlacitko8 = 10;
const int tlacitko9 = 11;
const int zmenafunkce = 12;

void setup(){
  pinMode(tlacitko0plus,INPUT);
  pinMode(tlacitko1krat,INPUT);
  pinMode(tlacitko2minus,INPUT);
  pinMode(tlacitko3deleno,INPUT);
  pinMode(tlacitko4rovnase,INPUT);
  pinMode(tlacitko5,INPUT);
  pinMode(tlacitko6,INPUT);
  pinMode(tlacitko7,INPUT);
  pinMode(tlacitko8,INPUT);
  pinMode(tlacitko9,INPUT);
  pinMode(zmenafunkce,INPUT);
  Serial.begin(9600);

  
}

void loop(){

  long z = 2147483647;      
  long x = 2147483647;
  long y = 2147483647;
  char operation = 'n';
  char rovnase = 'm';

Serial.println("enter");
  
  while(operation == 'n')
  {
    if (digitalRead(tlacitko0plus) == HIGH && x == z  && digitalRead(zmenafunkce) == LOW)
  {
    x = 0;
    Serial.print(x);
    delay(500);
  }
    else if (digitalRead(tlacitko1krat) == HIGH && x == z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = 1;
    Serial.print(x);
    delay(500);
  }
    else if (digitalRead(tlacitko2minus) == HIGH && x == z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = 2;
    Serial.print(x);
    delay(500);
  }
    else if (digitalRead(tlacitko3deleno) == HIGH && x == z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = 3;
    Serial.print(x);
    delay(500);
  }
    else if (digitalRead(tlacitko4rovnase) == HIGH && x == z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = 4;
    Serial.print(x);
    delay(500);
  }
    else if (digitalRead(tlacitko5) == HIGH && x == z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = 5;
    Serial.print(x);
    delay(500);
  }
    else if (digitalRead(tlacitko6) == HIGH && x == z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = 6;
    Serial.print(x);
    delay(500);
  }
    else if (digitalRead(tlacitko7) == HIGH && x == z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = 7;
    Serial.print(x);
    delay(500);
  }
    else if (digitalRead(tlacitko8) == HIGH && x == z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = 8;
    Serial.print(x);
    delay(500);
  }
    else if (digitalRead(tlacitko9) == HIGH && x == z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = 9;
    Serial.print(x);
    delay(500);
  }
    else if (digitalRead(tlacitko0plus) == HIGH  &&  x < z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = x * 10;
    Serial.print('0');
    delay(500);
  }
    else if (digitalRead(tlacitko1krat) == HIGH  &&  x < z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = x * 10 + 1;
    Serial.print('1');
    delay(500);
  }
    else if (digitalRead(tlacitko2minus) == HIGH  &&  x < z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = x * 10 + 2;
    Serial.print('2');
    delay(500);
  } 
    else if (digitalRead(tlacitko3deleno) == HIGH  &&  x < z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = x * 10 + 3;
    Serial.print('3');
    delay(500);   
  }
    else if (digitalRead(tlacitko4rovnase) == HIGH  &&  x < z &&  digitalRead(zmenafunkce) == LOW)
      {
    x = x * 10 + 4;
    Serial.print('4');
    delay(500);
  }
    else if (digitalRead(tlacitko5) == HIGH  &&  x < z && digitalRead(zmenafunkce) == LOW)
  {
    x = x * 10 + 5;
    Serial.print('5');
    delay(500);
  }
    else if (digitalRead(tlacitko6) == HIGH  &&  x < z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = x * 10 + 6;
    Serial.print('6');
    delay(500);
  }
   else if (digitalRead(tlacitko7) == HIGH  &&  x < z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = x * 10 + 7;
    Serial.print('7');
    delay(500);
  }
    else if (digitalRead(tlacitko8) == HIGH  &&  x < z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = x * 10 + 8;
    Serial.print('8');
    delay(500);
  }
    else if (digitalRead(tlacitko9) == HIGH  &&  x < z &&  digitalRead(zmenafunkce) == LOW)
  {
    x = x * 10 + 9;
    Serial.print('9');
    delay(500);
  }
    else if (digitalRead(tlacitko0plus) == HIGH && x < z  && digitalRead(zmenafunkce) == HIGH)
  {
    operation = '+';
    Serial.print(" + ");
  }
    else if (digitalRead(tlacitko1krat) == HIGH && x < z  && digitalRead(zmenafunkce) == HIGH)
  {
    operation = '*';
    Serial.print(" * "); 
  }
    else if (digitalRead(tlacitko2minus) == HIGH && x < z  && digitalRead(zmenafunkce) == HIGH)
  {
    operation = '-';
    Serial.print(" - ");
  }
    else if (digitalRead(tlacitko3deleno) == HIGH && x < z  && digitalRead(zmenafunkce) == HIGH)
  {
    operation = '/';
    Serial.print(" / ");
  }
  }


//lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll

    
  while(rovnase == 'm')
  {
    if (digitalRead(tlacitko0plus) == HIGH && y == z  && digitalRead(zmenafunkce) == LOW)
  {
    y = 0;
    Serial.print(y);
    delay(500);
  }
    else if (digitalRead(tlacitko1krat) == HIGH && y == z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = 1;
    Serial.print(y);
    delay(500);
  }
    else if (digitalRead(tlacitko2minus) == HIGH && y == z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = 2;
    Serial.print(y);
    delay(500);
  }
    else if (digitalRead(tlacitko3deleno) == HIGH && y == z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = 3;
    Serial.print(y);
    delay(500);
  }
    else if (digitalRead(tlacitko4rovnase) == HIGH && y == z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = 4;
    Serial.print(y);
    delay(500);
  }
    else if (digitalRead(tlacitko5) == HIGH && y == z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = 5;
    Serial.print(y);
    delay(500);
  }
    else if (digitalRead(tlacitko6) == HIGH && y == z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = 6;
    Serial.print(y);
    delay(500);
  }
    else if (digitalRead(tlacitko7) == HIGH && y == z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = 7;
    Serial.print(y);
    delay(500);
  }
    else if (digitalRead(tlacitko8) == HIGH && y == z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = 8;
    Serial.print(y);
    delay(500);
  }
    else if (digitalRead(tlacitko9) == HIGH && y == z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = 9;
    Serial.print(y);
    delay(500);
  }
    else if (digitalRead(tlacitko0plus) == HIGH  &&  y < z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = y * 10;
    Serial.print('0');
    delay(500);
  }
    else if (digitalRead(tlacitko1krat) == HIGH  &&  y < z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = y * 10 + 1;
    Serial.print('1');
    delay(500);
  }
    else if (digitalRead(tlacitko2minus) == HIGH  &&  y < z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = y * 10 + 2;
    Serial.print('2');
    delay(500);
  } 
    else if (digitalRead(tlacitko3deleno) == HIGH  &&  y < z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = y * 10 + 3;
    Serial.print('3');
    delay(500);   
  }
    else if (digitalRead(tlacitko4rovnase) == HIGH  &&  y < z &&  digitalRead(zmenafunkce) == LOW)
      {
    y = y * 10 + 4;
    Serial.print('4');
    delay(500);
  }
    else if (digitalRead(tlacitko5) == HIGH  &&  y < z && digitalRead(zmenafunkce) == LOW)
  {
    y = y * 10 + 5;
    Serial.print('5');
    delay(500);
  }
    else if (digitalRead(tlacitko6) == HIGH  &&  y < z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = y * 10 + 6;
    Serial.print('6');
    delay(500);
  }
   else if (digitalRead(tlacitko7) == HIGH  &&  y < z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = y * 10 + 7;
    Serial.print('7');
    delay(500);
  }
    else if (digitalRead(tlacitko8) == HIGH  &&  y < z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = y * 10 + 8;
    Serial.print('8');
    delay(500);
  }
    else if (digitalRead(tlacitko9) == HIGH  &&  y < z &&  digitalRead(zmenafunkce) == LOW)
  {
    y = y * 10 + 9;
    Serial.print('9');
    delay(500);
  }
    else if(digitalRead(tlacitko4rovnase) == HIGH && digitalRead(zmenafunkce) == HIGH && operation == '+')
  {
    Serial.print(" = ");
    Serial.println(x+y);
    rovnase = '=';
  }
    else if(digitalRead(tlacitko4rovnase) == HIGH && digitalRead(zmenafunkce) == HIGH && operation == '*')
  {
    Serial.print(" = ");
    Serial.println(x*y);
    rovnase = '=';
  }
    else if(digitalRead(tlacitko4rovnase) == HIGH && digitalRead(zmenafunkce) == HIGH && operation == '/')
  {
    Serial.print(" = ");
    Serial.println(x/y);
    rovnase = '=';
  }
    else if(digitalRead(tlacitko4rovnase) == HIGH && digitalRead(zmenafunkce) == HIGH && operation == '-')
  {
    Serial.print(" = ");
    Serial.println(x-y);
    rovnase = '=';
  }
  }
}
