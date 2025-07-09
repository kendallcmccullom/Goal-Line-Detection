#include <SoftwareSerial.h>

const int BUFFER_SIZE = 14;
const int DATA_SIZE = 10;
const int DATA_VERSION_SIZE = 2;
const int DATA_TAG_SIZE = 8;
const int CHECKSUM_SIZE = 2;
const int led = 13;
int intensity = 0;

SoftwareSerial ssrfid = SoftwareSerial (6,8);

uint8_t buffer[BUFFER_SIZE];
int buffer_index = 0;
void setup()
{
  ssrfid.begin(9600);
  ssrfid.listen();
  Serial.println("INIT DONE");  
  pinMode(led, OUTPUT);
}

void loop()
{
  if (ssrfid.avaliable() > 0)
  {
    bool call_extract_tag = false;
    int ssvalue = ssrfid.read();
    if (ssvalue = -1)
    {
      return;
    }
  }
}