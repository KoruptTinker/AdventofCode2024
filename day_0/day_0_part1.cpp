#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {

    ifstream file("day_0.txt");

    vector<int> firstList;
    vector<int> secondList;
    int number;
    int counter = 0;

    while (file >> number) {
        if (counter%2==0) {
            firstList.push_back(number);
        } else {
            secondList.push_back(number);
        }
        counter++;
    }

    sort(firstList.begin(), firstList.end());
    sort(secondList.begin(), secondList.end());

    int totalDistance = 0;

    for (int i=0;i<firstList.size();i++) {
        totalDistance += abs(firstList[i] - secondList[i]);
    }

    cout<<totalDistance<<endl;

    file.close();
    return 0;
}