const int led=3;
void setup() {
    pinMode(led,OUTPUT);
    Serial.begin(9600);
}

void loop() {
      int valore=0;
      int appoggio=0;
      valore=analogRead(appoggio);
      valore/=4;
      analogWrite(led,valore);
      Serial.print("Valore restituito dal Trimmer");
      Serial.println(valore);
      
}
