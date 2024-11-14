#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number (0 to 10000): ";
    cin >> number;
    if(number==0){
        cout<<"zero";
    }
       
    if (number < 0 || number > 10000) {
        cout << "The entered number must be between 1 and 10000." << endl;
    } else {
        if (number == 10000) {
            cout << "ten thousand" << endl;
        } else {
            if (number >= 1000) {
                switch (number / 1000) {
                    case 1: cout << "one thousand"; break;
                    case 2: cout << "two thousand"; break;
                    case 3: cout << "three thousand"; break;
                    case 4: cout << "four thousand"; break;
                    case 5: cout << "five thousand"; break;
                    case 6: cout << "six thousand"; break;
                    case 7: cout << "seven thousand"; break;
                    case 8: cout << "eight thousand"; break;
                    case 9: cout << "nine thousand"; break;
                }
                number %= 1000;
                if (number > 0) {
                    cout << " ";
                }
            }

            if (number >= 100) {
                switch (number / 100) {
                    case 1: cout << "one hundred"; break;
                    case 2: cout << "two hundred"; break;
                    case 3: cout << "three hundred"; break;
                    case 4: cout << "four hundred"; break;
                    case 5: cout << "five hundred"; break;
                    case 6: cout << "six hundred"; break;
                    case 7: cout << "seven hundred"; break;
                    case 8: cout << "eight hundred"; break;
                    case 9: cout << "nine hundred"; break;
                }
                number %= 100;
                if (number > 0) {
                    cout << " ";
                }
            }

            if (number >= 1 && number <= 19) {
                switch (number) {
                    case 1: cout << "one"; break;
                    case 2: cout << "two"; break;
                    case 3: cout << "three"; break;
                    case 4: cout << "four"; break;
                    case 5: cout << "five"; break;
                    case 6: cout << "six"; break;
                    case 7: cout << "seven"; break;
                    case 8: cout << "eight"; break;
                    case 9: cout << "nine"; break;
                    case 10: cout << "ten"; break;
                    case 11: cout << "eleven"; break;
                    case 12: cout << "twelve"; break;
                    case 13: cout << "thirteen"; break;
                    case 14: cout << "fourteen"; break;
                    case 15: cout << "fifteen"; break;
                    case 16: cout << "sixteen"; break;
                    case 17: cout << "seventeen"; break;
                    case 18: cout << "eighteen"; break;
                    case 19: cout << "nineteen"; break;
                }
            } else if (number >= 20 && number < 100) {
                switch (number / 10) {
                    case 2: cout << "twenty"; break;
                    case 3: cout << "thirty"; break;
                    case 4: cout << "forty"; break;
                    case 5: cout << "fifty"; break;
                    case 6: cout << "sixty"; break;
                    case 7: cout << "seventy"; break;
                    case 8: cout << "eighty"; break;
                    case 9: cout << "ninety"; break;
                }

                if (number % 10 != 0) {
                    cout << " ";
                    switch (number % 10) {
                        case 1: cout << "one"; break;
                        case 2: cout << "two"; break;
                        case 3: cout << "three"; break;
                        case 4: cout << "four"; break;
                        case 5: cout << "five"; break;
                        case 6: cout << "six"; break;
                        case 7: cout << "seven"; break;
                        case 8: cout << "eight"; break;
                        case 9: cout << "nine"; break;
                    }
                }
            }

            cout << endl;
        }
    }

    return 0;
}
