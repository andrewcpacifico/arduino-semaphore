#define RED_SEM1_PIN 2
#define YELLOW_SEM1_PIN 3
#define GREEN_SEM1_PIN 4

#define RED_SEM2_PIN 5
#define YELLOW_SEM2_PIN 6
#define GREEN_SEM2_PIN 7

#define RED 0
#define YELLOW 1
#define GREEN 2

void blinkPin(int pin) 
{
  for (int i = 0; i < 5; i++) {
    digitalWrite(pin, HIGH);
    delay(300);
    digitalWrite(pin, LOW);
    delay(300);
  }
}

void switchPins(int pin1, int pin2)
{
  digitalWrite(pin1, LOW);  
  digitalWrite(pin2, HIGH);  
}

void setup()
{
  pinMode(RED_SEM1_PIN, OUTPUT);
  pinMode(YELLOW_SEM1_PIN, OUTPUT);
  pinMode(GREEN_SEM1_PIN, OUTPUT);

  pinMode(RED_SEM2_PIN, OUTPUT);
  pinMode(YELLOW_SEM2_PIN, OUTPUT);
  pinMode(GREEN_SEM2_PIN, OUTPUT);

  digitalWrite(RED_SEM2_PIN, HIGH);
  digitalWrite(GREEN_SEM1_PIN, HIGH);
}

void loop()
{
  int sem1[] = {2, 3, 4};
  int sem2[] = {5, 6, 7};
       

  delay(3000);
    
  blinkPin(sem1[GREEN]);
  switchPins(sem1[GREEN], sem1[YELLOW]);
   
  blinkPin(sem2[RED]);
    
  switchPins(sem1[YELLOW], sem1[RED]); 
  switchPins(sem2[RED], sem2[GREEN]); 
  
  delay(3000);
  
  blinkPin(sem2[GREEN]);
  switchPins(sem2[GREEN], sem2[YELLOW]);
   
  blinkPin(sem1[RED]);
    
  switchPins(sem2[YELLOW], sem2[RED]); 
  switchPins(sem1[RED], sem1[GREEN]); 
}
