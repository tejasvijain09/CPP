#include <iostream>

// Function to find the minimum number of apples
int findMinApples() {
    int n = 7; // Start with the smallest number that meets the last condition (divisible by 7)
    
    // Loop until we find a number that satisfies all conditions
    while (true) {
        // Check if n leaves a remainder of 1 when divided by 2, 3, 4, 5, and 6
        if (n % 2 == 1 && n % 3 == 1 && n % 4 == 1 && n % 5 == 1 && n % 6 == 1) {
            return n; // Return the number if all conditions are met
        }
        n += 7; // Move to the next multiple of 7
    }
}

int main() {
    int minApples = findMinApples();
    std::cout << "The minimum number of apples is: " << minApples << std::endl;
    return 0;
}
// --- Method 2 

//#include <iostream>

// int main() {
//     int n = 7; // Start with the smallest number that meets the last condition (divisible by 7)
    
//     // Loop until we find a number that satisfies all conditions
//     while (true) {
//         // Check if n leaves a remainder of 1 when divided by 2, 3, 4, 5, and 6
//         if (n % 2 == 1 && n % 3 == 1 && n % 4 == 1 && n % 5 == 1 && n % 6 == 1) {
//             std::cout << "The minimum number of apples is: " << n << std::endl;
//             break; // Exit the loop once the condition is satisfied
//         }
//         n += 7; // Move to the next multiple of 7
//     }
    
//     return 0;
// }

// --- Method 3

// #include <iostream>

// int main() {
//     // Iterate over multiples of 7
//     for (int n = 7; ; n += 7) {  // Start with 7 and increment by 7
//         // Check if n leaves a remainder of 1 when divided by 2, 3, 4, 5, and 6
//         if (n % 2 == 1 && n % 3 == 1 && n % 4 == 1 && n % 5 == 1 && n % 6 == 1) {
//             std::cout << "The minimum number of apples is: " << n << std::endl;
//             break; // Exit the loop once the condition is satisfied
//         }
//     }
    
//     return 0;
// }
