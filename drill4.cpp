#include "std_lib_facilities.h"

int main () 
{
    double input;
    double sum=0.0;
    string unit;
    vector<double> value;

    while (cin >> input >> unit)
    {


        if (unit == "m")

            input=input;

        else if (unit == "cm")

            input = input/100;

        else if (unit== "in")

            input = input*0.3048;

        else if (unit == "ft")

            input=input*0.254;

        else {
            cout << "Wrong input unit.\n";
            }

        value.push_back(input);
        sum +=input;

    }

    double max=0;
    
    for(int i=1; i<value.size();++i)
    {
        if(value[i]>value[max])
        {
            max=i;
        }
    }

    double min=0;

    for(int i=1; i<value.size();++i)
    {
        if(value[i]<value[min])
        {
            min=i;
        }
    }

    sort(value);

    cout << " The value: ";

    for (int i = 0; i < value.size(); ++i)
        cout << value[i] << "m, ";
    cout << "\n";
    cout<<":The sum "<<sum<<" m\n";
    cout<<"Maximum value: "<<value[max]<<" m\n";
    cout<<"Minimum value: "<<value[min]<<" m\n";
    
    return 0;
}
