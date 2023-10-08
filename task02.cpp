#include<iostream>
#include<string>
using namespace std;
string pyramidVolume(double height,double width, double length);

string output;
main()
{
    double Height, Width, Length;
    cout << "Enter the length of the pyramid (in meters): ";
    cin>> Length;
    cout << "Enter the width of the pyramid (in meters): ";
    cin>> Width;
    cout << "Enter the height of the pyramid (in meters): ";
    cin>> Height;
    cout << "Enter the desired output unit  (millimeters, centimeters, meters, kilometers): ";
    cin>> output;
    string result = pyramidVolume(Height,Length,Width);
    cout<<result;
}
string pyramidVolume(double height,double width, double length)
{
    double volume;
    string result;
    volume = (height*width*length)/3;
    if (output == "millimeters")
    {
        volume =volume * 1000*1000*1000; 
        return result =  "The volume of the pyramid is: "+to_string(volume) + " cubic millimeters";
    }
    if (output == "centimeters")
    {
        volume =volume * 100*100*100;
        return result =  "The volume of the pyramid is: "+to_string(volume) + " cubic centimeters";
    }
    if (output == "kilometers")
    {
        volume =volume / 1000*1000*1000;
        return result =  "The volume of the pyramid is: "+to_string(volume) + " cubic kilometers"; 
    }
    
    return result;
}
