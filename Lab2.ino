int button1 = 8; //input
int buttonState = 0;
int ledPin = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT);
  pinMode(ledPin, OUTPUT);
  //This is how we initialize serial communications
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button1);
  //0 or 1
  Serial.println(buttonState);

  if(buttonState == 0){
    //if button is not pressed, led id off
    digitalWrite(ledPin, LOW);
  }
  else
  {
    digitalWrite(ledPin, HIGH);
  }
  

}
