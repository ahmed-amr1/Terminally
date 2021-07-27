#include <iostream>
#include <string>
using namespace std;

//making a function that converts numbers from 0 to 16 into hexadecimal values
string conv(int x,string var){
    if (x == 0)
        var = "0";
    if (x == 1)
        var = "1";
    if (x == 2)
        var = "2";
    if (x == 3)
        var = "3";
    if (x == 4)
        var = "4";
    if (x == 5)
        var = "5";
    if (x == 6)
        var = "6";
    if (x == 7)
        var = "7";
    if (x == 8)
        var = "8";
    if (x == 9)
        var = "9";
    if (x == 10)
        var = "A";
    if (x == 11)
        var = "B";
    if (x == 12)
        var = "C";
    if (x == 13)
        var = "D";
    if (x == 14)
        var = "E";
    if (x == 15)
        var = "F";
    cout << var;
    return var;
}
//making the law of converting rgb to hex
//I spent some time on the internet until I made this law
string rgbToHex(float r,float g,float b){
    cout << "#";
    string r1,g1,b1,r2,g2,b2;
    float red,green,blue;
    red = r/16;
    green = g/16;
    blue = b/16;
    int hexR1 = red;
    int hexG1 = green;
    int hexB1 = blue;
    float Fred = red - hexR1;
    float Fgreen = green - hexG1;
    float Fblue = blue - hexB1;
    int hexR2 = (Fred * 16);
    int hexG2 = (Fgreen * 16);
    int hexB2 = (Fblue * 16);
    conv(hexR1,r1);
    conv(hexR2,r2);
    conv(hexG1,g1);
    conv(hexG2,g2);
    conv(hexB1,b1);
    conv(hexB2,b2);
    return "0";

}

