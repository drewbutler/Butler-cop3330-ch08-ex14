/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Drew Butler
 */

#include <iostream>
using namespace std;

const int x = 5;
const int y = 2;
const int a = 3;
const int b = 2;

void addition(const int x, const int y) {
    cout << x+y << "\n";
}

void pythagorean(const int a, const int b) {
    cout << a*a + b*b << "\n";
}

int main(void) {

    addition(x, y);
    pythagorean(a, b);

    return 0;
}