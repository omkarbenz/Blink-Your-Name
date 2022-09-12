void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
    int size;
  char name[] = "--- -- -.- .- .-.";
  size = sizeof(name)/sizeof(name[0]);
    for(int i=0; i<= size; i++)
    {
      if(name[i] == '-')
      {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(300);
        digitalWrite(LED_BUILTIN, LOW);
      }
      else if(name[i] == '.')
      {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(100);
        digitalWrite(LED_BUILTIN, LOW);
      }
      else if(name[i] == ' ')
      {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(500);
        digitalWrite(LED_BUILTIN, LOW);
      }
      delay(100);
    }
}
