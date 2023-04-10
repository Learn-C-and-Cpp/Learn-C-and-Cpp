#include <iostream>
using namespace std;

int main()
{
    // variable
    int score{};

    // get input
    cout << "Enter your score on the exam (0-100): ";
    cin >> score;

    // validate input
    char letter_grade{};

    if (score >= 0 && score <= 100)
    {
        if (score > 90)
            letter_grade = 'A';
        else if (score > 80)
            letter_grade = 'B';
        else if (score > 70)
            letter_grade = 'C';
        else if (score > 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';
    }
    else
    {
        cout << "Sorry, " << score << " is not in range" << endl;
    }

    return 0;
}