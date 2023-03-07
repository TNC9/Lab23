#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        cout << "Please input numbers to find average.";
    }
    else{
        cout << "---------------------------------" << endl;
        cout << "Average of " << argc-1 << " numbers = " ;
        double Average = 0;
        for (int i = 0; i < argc; i++)
        {
            Average += atof(argv[i])/(argc-1);
        }
        cout << Average << endl;
        cout << "---------------------------------" ;
        
    }
    return 0;
}
