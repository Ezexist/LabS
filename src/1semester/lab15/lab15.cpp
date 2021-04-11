
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Funeralagency
{
    string name;
    int Number_of_coffins;//гроб
    int Number_of_crosses;//кресты
    int Number_of_wreaths;//венки
    int amount_of_workers;
};


int main()
{
    Funeralagency OneAgency;
    ifstream fin("D:\\funeral.txt");
    fin >> OneAgency.name;
    fin >> OneAgency.Number_of_coffins;
    fin >> OneAgency.Number_of_crosses;
    fin >> OneAgency.Number_of_wreaths;
    fin >> OneAgency.amount_of_workers;
    cout << "Name Agency: " << OneAgency.name << endl;
    cout << "Number of coffins: " << OneAgency.Number_of_coffins << endl;
    cout << "Number of crosses: " << OneAgency.Number_of_crosses << endl;
    cout << "Number of wreaths: " << OneAgency.Number_of_wreaths << endl;
    cout << "Amount of workers: " << OneAgency.amount_of_workers << endl;
    fin.close();
    ofstream fin2("D:\\textsave.txt");
    fin2 << OneAgency.name; fin2 << endl;
    fin2 << OneAgency.Number_of_coffins; fin2 << endl;
    fin2 << OneAgency.Number_of_crosses; fin2 << endl;
    fin2 << OneAgency.Number_of_wreaths; fin2 << endl;
    fin2 << OneAgency.amount_of_workers;
    fin2.close();
    return 0;
}