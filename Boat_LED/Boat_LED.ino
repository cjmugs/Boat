#include <FastLED.h>
#include "FastLED.h"

#define LED_PIN 7
#define NUM_LEDS 150
#define BRIGHTNESS 235
CRGB leds[NUM_LEDS];
  
void setup() {
   FastLED.addLeds<WS2812,LED_PIN, GRB>(leds, NUM_LEDS); 
   FastLED.setBrightness(BRIGHTNESS);

}

void loop() {
  for(int i = 0; i < 76; i++) {
    leds[i] = CRGB(155,0,0);
    FastLED.show();
  }
  for(int i = 76; i > 75; i++) {
    leds[i] = CRGB(0,155,0);
    FastLED.show();
  }
}
