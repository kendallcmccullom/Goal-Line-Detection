


const int led = 9;
int intensity = 0;

void setup() {
 // Serial.begin(9600);
  //ssrfid.begin(9600);
 // ssrfid.listen();
  //Serial.println("Done");
  Serial.begin(9600);
  delay(5000);
  Serial.println("TAG: 008EC793");
  Serial.println();
  delay (2000);
  Serial.println("TAG: 008EC794");
  Serial.println();
  delay (2000);
  Serial.println("TAG: 008EC795");
  Serial.println();
  delay (2000);
  Serial.println("TAG: 008EC796");
  Serial.println();
  delay (2000);
  Serial.println("VALID GOAL!");
  delay (2000);

  pinMode(led, OUTPUT);

}

void loop() {
  
  digitalWrite(led, 0);
  
  //intensity = 10;
  //intensity +=5;
 // if (intensity == 255)
//  {
 //   intensity =0;
 // }
  //delay(100);

}