#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Shreya Sharma
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */



// TODO 1:
// Define LDR analog pin (Use A0)
const int ldrPin = A0;

// TODO 2:
// Create variable to store sensor reading
int ldrValue = 0;
