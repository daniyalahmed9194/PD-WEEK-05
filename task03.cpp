#include<iostream>
using namespace std;

float taxCalculator(char type,float price);
float tatx(int x,float p)
{
    return (p*x)/100;
}
float finalPrice;

main()
{
    char Type;
    float Price,result;
    cout<<"Enter the vehical type code (M, E, S, V, T): ";
    cin>> Type;
    cout<<"Enter the price of the vehical: $";
    cin>> Price;
    result = taxCalculator(Type,Price);
    cout<<"The final price of a vehical of type "<<Type<< " after adding tax is $"<<result;
    
}
float taxCalculator(char type,float price)
{
    float tax;
    if (type == 'M')
    {
    tax = tatx(6,price);
    finalPrice = tax + price;
    }
    if (type == 'S')
    {
        tax = tatx(10,price);
        finalPrice = tax + price;
    }
    if (type == 'E')
    {
        tax = tatx(8,price);
        finalPrice = tax + price;
    }
    if (type == 'V')
    {
        tax = tatx(12,price);
        finalPrice = tax + price;
    }
    if (type == 'T')
    {
        tax = tatx(15,price);
        finalPrice = tax + price;
    }
    return finalPrice;
}