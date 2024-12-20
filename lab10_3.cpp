#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string formatFloat(float number) {
    ostringstream oss;
    oss << fixed << setprecision(3) << number; 
    string result = oss.str();
    
    result.erase(result.find_last_not_of('0') + 1, string::npos);
    if (result.back() == '.') result.pop_back();           
    
    return result;
}

int main() {
    int count = 0;
    float sum = 0.0;
    float sum_of_square = 0.0;
    string textline;

    ifstream source("score.txt"); 

    if (!source) {
        cerr << "Error: Cannot open file score.txt\n";
        return 1;
    }

    while (getline(source, textline)) {
        float value = stof(textline); 
        sum += value;               
        sum_of_square += value * value; 
        count++;                      
    }

    source.close();

    float mean = sum / count;

    float standard_deviation = sqrt((sum_of_square / count) - (mean * mean));

    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << formatFloat(mean) << "\n";
    cout << "Standard deviation = " << formatFloat(standard_deviation) << "\n";

    return 0;
}