#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

float degree() {
    printf("Enter a three-digit number: ");
    bool range = true;
    float a;
    while (range) {
        scanf("%f", &a);
        if (a < 100 || a > 1000)
            printf("Incorrect value, enter correct number: ");
        else
            range = false;
    }
    float first = (int)a / 100;
    float second = (int)a % 10;
    float result = first / second;
    return result;
}

int main() {
    ofstream myfile;
    float result = degree();
    myfile.open("random.txt");
    myfile << "Result is:" << result;
    myfile.close();

    string line;
    ifstream myfile1("random.txt");
    if (myfile1.is_open())
    {
        while (getline(myfile1, line))
        {
            cout << line << '\n';
        }
        myfile1.close();
    }

    else cout << "Unable to open file";

    return 0;
}

