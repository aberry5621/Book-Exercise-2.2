//
//  main.cpp
//  Book Exercise 2.1
//
//  Created by ax on 8/25/16.
//  Copyright © 2016 COMP130. All rights reserved.
//  compute the volume of a cylinder
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // insert code here...
    
    double radius_input = 0.0;
    double length_input = 0.0;
    const double PI = 3.14159;
    
    // I
    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius_input >> length_input;
    
    // P
    // calculate volume
    // area = radius x radius x 3.14
    // volume = area x length
    double area_calc = pow(radius_input, 2.0) * PI;
    double volume_calc = area_calc * length_input;
    
    // O
    cout << "The area is " << area_calc << endl;
    cout << "The volume is " << volume_calc << endl;
    
    return 0;
}
