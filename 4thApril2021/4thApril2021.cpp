// 4thApril2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <vector>
using namespace std;

vector<int> get_divide_by3(vector<int>& numbers) {
    vector<int> output;

    for (int value : numbers) {
        if (value % 3 == 0) {
            output.push_back(value);
        }
    }
    return output;
}

int main()
{
    vector<int> numbers = { 1,4, 3, 2, 6, 9, 15, 32 };

}
