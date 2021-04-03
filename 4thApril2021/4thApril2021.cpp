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


void display_vector(const vector<int>& numbers) {
    for (int value : numbers) {
        cout << value << endl;
    }
}

// find the number of appearance of x in numbers
int count_appearance(const vector<int>& numbers, int x) {
    int count = 0;
    for (int value : numbers) {
        if (value == x) {
            count++;
        }
    }
    return count;
}


int main()
{
    vector<int> numbers = { 1,4, 3, 2, 6, 3, 15, 32 };
    vector<int> results = get_divide_by3(numbers);
    display_vector(results);
    cout << "number appearance of 3 " << count_appearance(numbers, 3) << endl;
    cout << "number appearance of 15 " << count_appearance(numbers, 15) << endl;
    cout << "number appearance of 25 " << count_appearance(numbers, 25) << endl;

}
