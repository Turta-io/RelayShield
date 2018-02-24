/*
  TurtaRelayShield.h - Library for controlling relays.
  Created by Turta, February 25, 2018.
  Released under the MIT Licence.
  www.turta.io
*/

#ifndef TurtaRelayShield_h
#define TurtaRelayShield_h

#include "Arduino.h"

class TurtaRelayShield
{
  public:
    TurtaRelayShield();
    void begin();
    void relayWrite(byte relayNo, bool state);
    bool relayRead(byte relayNo);
};

#endif
