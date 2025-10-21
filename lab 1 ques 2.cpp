#include <iostream> 
using namespace std; 
int main() { 
    int marks[6]; 
    int sum = 0; 
    cout << "Enter marks of 6 subjects: "; 
    for (int i = 0; i < 6; i++) { 
        cin >> marks[i]; 
        sum += marks[i]; 
    } 
    float average = sum / 6.0; 
 
    cout << "Average Marks: " << average << endl; 
    cout << "Grade: "; 
    if (average > 90) 
        cout << "A+\n"; 
    else if (average > 80) 
        cout << "A\n"; 
    else if (average > 70) 
        cout << "B\n"; 
    else if (average > 60) 
        cout << "C\n"; 
    else if (average > 50) 
        cout << "D\n"; 
    else 
        cout << "F\n"; 
    return 0; 
}