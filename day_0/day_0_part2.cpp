#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    
    ifstream file("day_0.txt");

    vector<int> firstList;
    unordered_map<int, int> secondList;

    int number;
    int counter = 0;

    while (file >> number) {
        if (counter%2==0) {
            firstList.push_back(number);
        } else {
            secondList[number]++;
        }
        counter++;
    }

    sort(firstList.begin(), firstList.end());

    int similarityScore = 0;

    for (int i=0;i<firstList.size();i++) {
        similarityScore += firstList[i] * secondList[firstList[i]];
    }

    cout<<similarityScore<<endl;

    file.close();
    return 0;
}