#include <Arduino.h>

/**
 * @file `main.cpp`
 * @brief Embedded Obstacle Detection System using an IR proximity sensor
 * @author prashansha-31 (Prashansha Maheshwari)
 * @date 2026-02-17
 *
 * @details
 * Reads a digital input from an IR proximity sensor connected to digital pin 2.
 * The system reports obstacle presence to the Serial console at 9600 baud.
 * LOW on the sensor pin indicates an obstacle; HIGH indicates no obstacle.
 */

const int IR_PIN = 2;
int sensorState = 0;