#include "utils.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void delay(int milliseconds) {
    this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

void drawBorder(int width, int height) {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
                cout << "#";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printCentered(const string& text, int width) {
    int padding = (width - text.length()) / 2;
    if (padding > 0) {
        cout << string(padding, ' ');
    }
    cout << text << endl;
}

void logDebug(const string& label, const string& value) {
    cout << "[DEBUG] " << label << ": " << value << endl;
}
