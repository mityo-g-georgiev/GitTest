//
//  main.cpp
//  GitTest
//
//  Created by m.georgiev on 26.12.17.
//  Copyright © 2017 m.georgiev. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    cout << "Please enter a integer counter!" << endl;
    int allNumbers = 0;
    cin >> allNumbers;
    for (int i = 0; i < allNumbers; i++) {
        cout << "the current number is: " << i << endl;
    }
    cout << "This is for the branch!" << endl;
    return 0;
}
