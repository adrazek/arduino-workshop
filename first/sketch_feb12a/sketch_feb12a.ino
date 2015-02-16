void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  
  Serial.begin(9600);
  Serial.print("hello");
}

int d=1;

void loop() {
  // put your main code here, to run repeatedly:
  /*
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(1000);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(500);
  */
  
  int d2 = 256 / 2;
  for ( int a = 0 ; a < 512 ; a++ )
  {
    if (a >= 0 && a < 256)
    {
      set(11, a);
    }
    else
    {
      set(11, 511 - a);
    }
    
      
    if (a >= d2 && a < d2 * 3)
    {
      set(10, a - d2);
    }
    else
    {
      set(10, d2 * 3 - 1 - a);
    }
    
    if (a >= d2 * 2 && a < d2 * 4)
    {
      set(9, a - d2 * 2);
    }
    else
    {
      set(9, d2 * 4 - 1 - a);
    }
  }
  
  //down(11);
  //down(10);
  //down(9);
}

void set(int id, int a) {
    analogWrite(id, a);
    delay(d);
} 
