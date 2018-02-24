/*
  TurtaRelayShield.cpp - Library for controlling relays.
  Created by Turta, February 25, 2018.
  Released under the MIT Licence.
  www.turta.io
*/

#include "Arduino.h"
#include "TurtaRelayShield.h"

#define RELAY_1_PIN 4
#define RELAY_2_PIN 7
#define RELAY_3_PIN 8
#define RELAY_4_PIN 12

TurtaRelayShield::TurtaRelayShield() {}

void TurtaRelayShield::begin() {
  pinMode(RELAY_1_PIN, OUTPUT);
  pinMode(RELAY_2_PIN, OUTPUT);
  pinMode(RELAY_3_PIN, OUTPUT);
  pinMode(RELAY_4_PIN, OUTPUT);
}

void TurtaRelayShield::relayWrite(byte relayNo, bool state) {
  switch (relayNo)
  {
    case 1:
      digitalWrite(RELAY_1_PIN, state);
      break;
    case 2:
      digitalWrite(RELAY_2_PIN, state);
      break;
    case 3:
      digitalWrite(RELAY_3_PIN, state);
      break;
    case 4:
      digitalWrite(RELAY_4_PIN, state);
      break;
    default:
      break;
  }
}

bool TurtaRelayShield::relayRead(byte relayNo) {
  bool result;
  switch (relayNo)
  {
    case 1:
      result = digitalRead(RELAY_1_PIN);
      break;
    case 2:
      result = digitalRead(RELAY_2_PIN);
      break;
    case 3:
      result = digitalRead(RELAY_3_PIN);
      break;
    case 4:
      result = digitalRead(RELAY_4_PIN);
      break;
    default:
      result = LOW;
      break;
  }
  return result;
}
