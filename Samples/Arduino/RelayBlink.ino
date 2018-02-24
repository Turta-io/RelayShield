#include <TurtaRelayShield.h>

// Create an instance of the relay shield.
TurtaRelayShield trs;

void setup() {
  // Initialize the relay pins.
  trs.begin();
}

void loop() {
  for(int i = 1; i <= 4; i++) {
    // Toggle the relays.
    trs.relayWrite(i, !trs.relayRead(i));

    // Delay 500ms.
    delay(500);
  }
}
