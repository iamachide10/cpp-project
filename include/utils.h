#ifndef UTILS_H
#define UTILS_H

#include <string>

// Function to clear the console screen
void clearScreen();

// Function to prevent everything from moving too fast
// This pauses the program for a specified number of milliseconds
void delay(int milliseconds);

// Function to draw a border around the console window
void drawBorder(int width, int height);

// This function prints messages centered within the given width
void printCentered(const std::string& text, int width);

// This function helps print debug messages to the console
void logDebug(const std::string& label, const std::string& value);


#endif // UTILS_H

