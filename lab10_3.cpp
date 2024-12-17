#include <iostream>
#include <iomanip>
#include<fstream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ofstream dest ;
    ifstream source;
    source.open("score.txt");
    int count = 0;
    float sum = 0;

    float standard  = 0;
    string text;
    
    while(getline(source,text)){
        count += 1;
        sum += atof(text.c_str());
        standard += pow(stof(text),2);
    }
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    double mean = sum/count;
    double all = standard/count;
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << pow(all - (pow(mean,2)),0.5) ;
}
