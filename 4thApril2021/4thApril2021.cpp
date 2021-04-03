// 4thApril2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <vector>
using namespace std;

vector<int> get_even_number(vector<int>& numbers) {
    vector<int> output;

    for (int value : numbers) {
        if (value % 2 == 0) {
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

// find min 
int find_min(const vector<int>& numbers) {
    int min = numbers[0];
    for (int value : numbers) {
        if (min > value) {
            min = value;
        }
    }
    return min;
}

// find min 
int find_max(const vector<int>& numbers) {
    int max = numbers[0];
    for (int value : numbers) {
        if (max > value) {
            max = value;
        }
    }
    return max;
}

// find sum of all numbers
int find_sum(const vector<int>& numbers) {
    int sum = 0;
    for (int value : numbers) {
        sum += value;
    }
    return sum;
}

int main()
{
    
    vector<int> numbers = { 1,4, 3, 2, 6, 3, 15, 32 };
    vector<int> even_numbers = get_even_number(numbers);
    cout << "numbers = " << endl;
    display_vector(numbers);

    cout << "even numbers = " << endl;
    display_vector(even_numbers);
    cout << "number appearance of 3: " << count_appearance(numbers, 3) << endl;
    cout << "number appearance of 15: " << count_appearance(numbers, 15) << endl;
    cout << "number appearance of 25: " << count_appearance(numbers, 25) << endl;
    cout << "min of numbers = " << find_min(numbers) << endl;
    cout << "max of numbers = " << find_max(numbers) << endl;
    cout << "sum of numbers = " << find_sum(numbers) << endl;

}
