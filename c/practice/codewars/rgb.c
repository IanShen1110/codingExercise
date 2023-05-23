#include <stdio.h>
void rgb(int r, int g, int b, char hex[6 + 1]){
    r = r > 255 ? 255 : r < 0 ? 0 : r;
    g = g > 255 ? 255 : g < 0 ? 0 : g;
    b = b > 255 ? 255 : b < 0 ? 0 : b;
    sprintf(hex, "%02X%02X%02X", r, g ,b);
}