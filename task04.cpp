#include<iostream>
#include<string>
using namespace std;

string projectTimeCalculation(int Hours,int Days, int Workers);

main()
{
    int days, workers, hours;
    string result;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;

    result = projectTimeCalculation(hours,days,workers);
    cout<<result;
    
    
}
string projectTimeCalculation(int Hours,int Days, int Workers)
{
    int totalWorkingHours,hoursAfterTraining,difference;
    string answer;
    totalWorkingHours = Days*10*Workers;
    hoursAfterTraining = totalWorkingHours - 0.1* totalWorkingHours;
    difference = hoursAfterTraining - Hours;
    if(difference> Hours){
    return "Yes!" + to_string(difference)+ " hours left.";
    }
    if(difference< Hours){
    return "Not enough time!" + to_string(difference)+ " hours needed.";
    }
    return "";
}