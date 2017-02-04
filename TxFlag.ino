#include "FastLED.h"

#define LED_TYPE    WS2811
#define COLOR_ORDER GRB

// How many leds in your strip?
#define NUM_LEDS 50

#define BRIGHTNESS 200
#define FRAMES_PER_SECOND  140

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 6
//#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

int delayValue = 20;
int delayValue2 = 500;
int delayValue3 = 1000;

void setup() { 
      // Uncomment/edit one of the following lines for your leds arrangement.
      // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
       FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  	 // FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
      // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
      
      // FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, RGB>(leds, NUM_LEDS);

      // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);

      FastLED.setBrightness(BRIGHTNESS);



      
}

//StarOn();  // Star
//lbbOn();   // Left Blue Bar
//twbOn();   // Top White Bar
//brbOn();   // Bottom Red Bar
//FlagOff(); // Flag Off


void loop() { 

lbbOn();
FastLED.show();
delay(delayValue2);
StarOn();
FastLED.show();
delay(delayValue2);
twbOn();
FastLED.show();
delay(delayValue2);
brbOn();
FastLED.show();
delay(delayValue3);

StarOff();
FastLED.show();
delay(delayValue2);
lbbOff();
FastLED.show();
delay(delayValue2);
twbOff();
FastLED.show();
delay(delayValue2);
brbOff();
FastLED.show();
delay(delayValue3);

lbbOn2();
FastLED.show();
delay(delayValue2);
StarOn2();
FastLED.show();
delay(delayValue2);
twbOn2();
FastLED.show();
delay(delayValue2);
brbOn2();
FastLED.show();
delay(delayValue3);

StarOff2();
FastLED.show();
delay(delayValue2);
lbbOff2();
FastLED.show();
delay(delayValue2);
twbOff2();
FastLED.show();
delay(delayValue2);
brbOff2();
FastLED.show();
delay(delayValue3);

}

void StarOn()
{
// Star

leds[44] = CRGB::White;
leds[45] = CRGB::White;
leds[46] = CRGB::White;
leds[47] = CRGB::White;
leds[48] = CRGB::White;
leds[49] = CRGB::White;

}




void StarOn2()
{
// Star

leds[44] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[45] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[46] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[47] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[48] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[49] = CRGB::White;
FastLED.show();
delay(delayValue);
}

void StarOff()
{
// Star

leds[44] = CRGB::Black;
leds[45] = CRGB::Black;
leds[46] = CRGB::Black;
leds[47] = CRGB::Black;
leds[48] = CRGB::Black;
leds[49] = CRGB::Black;

}


void StarOff2()
{
// Star

leds[44] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[45] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[46] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[47] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[48] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[49] = CRGB::Black;
FastLED.show();
delay(delayValue);

}

// ----------------

void lbbOn()
{

// left Blue bar

leds[24] = CRGB::Blue;
leds[25] = CRGB::Blue;
leds[26] = CRGB::Blue;
leds[27] = CRGB::Blue;
leds[28] = CRGB::Blue;
leds[29] = CRGB::Blue;
leds[30] = CRGB::Blue;
leds[31] = CRGB::Blue;
leds[32] = CRGB::Blue;
leds[33] = CRGB::Blue;
leds[34] = CRGB::Blue;
leds[35] = CRGB::Blue;
leds[36] = CRGB::Blue;
leds[37] = CRGB::Blue;
leds[38] = CRGB::Blue;
leds[39] = CRGB::Blue;
leds[40] = CRGB::Blue;
leds[41] = CRGB::Blue;
leds[42] = CRGB::Blue;
leds[43] = CRGB::Blue;

// ----------------

}


void lbbOn2()
{

// left Blue bar

leds[24] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[25] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[26] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[27] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[28] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[29] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[30] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[31] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[32] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[33] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[34] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[35] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[36] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[37] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[38] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[39] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[40] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[41] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[42] = CRGB::Blue;
FastLED.show();
delay(delayValue);
leds[43] = CRGB::Blue;
FastLED.show();
delay(delayValue);

// ----------------

}


void lbbOff()
{

// left Blue bar

leds[24] = CRGB::Black;
leds[25] = CRGB::Black;
leds[26] = CRGB::Black;
leds[27] = CRGB::Black;
leds[28] = CRGB::Black;
leds[29] = CRGB::Black;
leds[30] = CRGB::Black;
leds[31] = CRGB::Black;
leds[32] = CRGB::Black;
leds[33] = CRGB::Black;
leds[34] = CRGB::Black;
leds[35] = CRGB::Black;
leds[36] = CRGB::Black;
leds[37] = CRGB::Black;
leds[38] = CRGB::Black;
leds[39] = CRGB::Black;
leds[40] = CRGB::Black;
leds[41] = CRGB::Black;
leds[42] = CRGB::Black;
leds[43] = CRGB::Black;

// ----------------

}


void lbbOff2()
{

// left Blue bar

leds[24] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[25] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[26] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[27] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[28] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[29] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[30] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[31] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[32] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[33] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[34] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[35] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[36] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[37] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[38] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[39] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[40] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[41] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[42] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[43] = CRGB::Black;
FastLED.show();
delay(delayValue);

// ----------------

}






void twbOn()
{
// top White bar

leds[3] = CRGB::White;
leds[4] = CRGB::White;
leds[5] = CRGB::White;
leds[6] = CRGB::White;
leds[7] = CRGB::White;
leds[8] = CRGB::White;

leds[15] = CRGB::White;
leds[16] = CRGB::White;
leds[17] = CRGB::White;
leds[18] = CRGB::White;
leds[19] = CRGB::White;
leds[20] = CRGB::White;

// ----------------
}


void twbOn2()
{
// top White bar

leds[3] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[4] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[5] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[6] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[7] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[8] = CRGB::White;
FastLED.show();
delay(delayValue);

leds[15] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[16] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[17] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[18] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[19] = CRGB::White;
FastLED.show();
delay(delayValue);
leds[20] = CRGB::White;
FastLED.show();
delay(delayValue);

// ----------------
}


void twbOff()
{
// top White bar

leds[3] = CRGB::Black;
leds[4] = CRGB::Black;
leds[5] = CRGB::Black;
leds[6] = CRGB::Black;
leds[7] = CRGB::Black;
leds[8] = CRGB::Black;

leds[15] = CRGB::Black;
leds[16] = CRGB::Black;
leds[17] = CRGB::Black;
leds[18] = CRGB::Black;
leds[19] = CRGB::Black;
leds[20] = CRGB::Black;



// ----------------
}


void twbOff2()
{
// top White bar

leds[3] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[4] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[5] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[6] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[7] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[8] = CRGB::Black;
FastLED.show();
delay(delayValue);

leds[15] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[16] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[17] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[18] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[19] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[20] = CRGB::Black;
FastLED.show();
delay(delayValue);
FastLED.show();
delay(delayValue);


// ----------------
}


void brbOn()
{

// bottom RED bar

leds[0] = CRGB::Red;
leds[1] = CRGB::Red;
leds[2] = CRGB::Red;

leds[9] = CRGB::Red;
leds[10] = CRGB::Red;
leds[11] = CRGB::Red;
leds[12] = CRGB::Red;
leds[13] = CRGB::Red;
leds[14] = CRGB::Red;

leds[21] = CRGB::Red;
leds[22] = CRGB::Red;
leds[23] = CRGB::Red;

// ----------------


}


void brbOn2()
{

// bottom RED bar

leds[0] = CRGB::Red;
FastLED.show();
delay(delayValue);
leds[1] = CRGB::Red;
FastLED.show();
delay(delayValue);
leds[2] = CRGB::Red;
FastLED.show();
delay(delayValue);

leds[9] = CRGB::Red;
FastLED.show();
delay(delayValue);
leds[10] = CRGB::Red;
FastLED.show();
delay(delayValue);
leds[11] = CRGB::Red;
FastLED.show();
delay(delayValue);
leds[12] = CRGB::Red;
FastLED.show();
delay(delayValue);
leds[13] = CRGB::Red;
FastLED.show();
delay(delayValue);
leds[14] = CRGB::Red;
FastLED.show();
delay(delayValue);

leds[21] = CRGB::Red;
FastLED.show();
delay(delayValue);
leds[22] = CRGB::Red;
FastLED.show();
delay(delayValue);
leds[23] = CRGB::Red;
FastLED.show();
delay(delayValue);

// ----------------


}


void brbOff()
{

// bottom RED bar

leds[0] = CRGB::Black;
leds[1] = CRGB::Black;
leds[2] = CRGB::Black;

leds[9] = CRGB::Black;
leds[10] = CRGB::Black;
leds[11] = CRGB::Black;
leds[12] = CRGB::Black;
leds[13] = CRGB::Black;
leds[14] = CRGB::Black;

leds[21] = CRGB::Black;
leds[22] = CRGB::Black;
leds[23] = CRGB::Black;

// ----------------



}


void brbOff2()
{

// bottom RED bar

leds[0] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[1] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[2] = CRGB::Black;
FastLED.show();
delay(delayValue);

leds[9] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[10] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[11] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[12] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[13] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[14] = CRGB::Black;
FastLED.show();
delay(delayValue);

leds[21] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[22] = CRGB::Black;
FastLED.show();
delay(delayValue);
leds[23] = CRGB::Black;
FastLED.show();
delay(delayValue);

// ----------------



}


void FlagOff()
{
// Star

leds[44] = CRGB::Black;
leds[45] = CRGB::Black;
leds[46] = CRGB::Black;
leds[47] = CRGB::Black;
leds[48] = CRGB::Black;
leds[49] = CRGB::Black;

// ----------------

// left Blue bar

leds[24] = CRGB::Black;
leds[25] = CRGB::Black;
leds[26] = CRGB::Black;
leds[27] = CRGB::Black;
leds[28] = CRGB::Black;
leds[29] = CRGB::Black;
leds[30] = CRGB::Black;
leds[31] = CRGB::Black;
leds[32] = CRGB::Black;
leds[33] = CRGB::Black;
leds[34] = CRGB::Black;
leds[35] = CRGB::Black;
leds[36] = CRGB::Black;
leds[37] = CRGB::Black;
leds[38] = CRGB::Black;
leds[39] = CRGB::Black;
leds[40] = CRGB::Black;
leds[41] = CRGB::Black;
leds[42] = CRGB::Black;
leds[43] = CRGB::Black;

// ----------------

// top White bar

leds[3] = CRGB::Black;
leds[4] = CRGB::Black;
leds[5] = CRGB::Black;
leds[6] = CRGB::Black;
leds[7] = CRGB::Black;
leds[8] = CRGB::Black;

leds[15] = CRGB::Black;
leds[16] = CRGB::Black;
leds[17] = CRGB::Black;
leds[18] = CRGB::Black;
leds[19] = CRGB::Black;
leds[20] = CRGB::Black;

// ----------------


// bottom RED bar

leds[0] = CRGB::Black;
leds[1] = CRGB::Black;
leds[2] = CRGB::Black;

leds[9] = CRGB::Black;
leds[10] = CRGB::Black;
leds[11] = CRGB::Black;
leds[12] = CRGB::Black;
leds[13] = CRGB::Black;
leds[14] = CRGB::Black;

leds[21] = CRGB::Black;
leds[22] = CRGB::Black;
leds[23] = CRGB::Black;

// ----------------



}
