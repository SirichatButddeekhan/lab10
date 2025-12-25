//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include<fstream>
#include <iomanip>
#include<cmath>
#include<string>
using namespace std;

int main(){
    int attemp=0;
    float sum=0;
    float sum_2=0;
    float mean;
    float standard=0;
    ifstream fin("score.txt");

    string value;
    while(getline(fin,value)){
        sum = sum+stod(value);
        sum_2 = sum_2 + pow(stod(value),2);
        attemp ++;
    }
    mean = sum / attemp;
    standard = pow((sum_2/attemp)-(pow(mean,2)),0.5);


  
    
    cout << "Number of data = "<<attemp<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<standard<<"\n";
}