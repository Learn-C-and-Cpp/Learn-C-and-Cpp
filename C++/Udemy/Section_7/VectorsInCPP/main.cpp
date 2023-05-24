#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declare 2 empty vectors of integer type
    vector<int> vector1;
    vector<int> vector2;
    vector<int> vector3;

    // add 10 and 20 to vector1 dynamically using push_back
    vector1.push_back(10);
    vector1.push_back(20);

    // Display the elements in vector1 using the at() method as well as it's size()method
    cout << "\nvector1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;

    // add 100, 200 to vector2 dynamically using push_back
    vector2.push_back(100);
    vector2.push_back(200);

    // Display the elements in vector1 using the at() method as well as it's size()method
    cout << "\nvector2:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "vector2 contains " << vector2.size() << " elements" << endl;

    // add 300 and 400 to vector3 dynamically using push_back
    vector3.push_back(300);
    vector3.push_back(400);

    // Display the elements in vector3 using the at() method as well as it's size()method
    cout <<"\nvector3:" << endl;
    cout << vector3.at(0)<<endl;
    cout << vector3.at(1)<<endl;
    cout << "vector3 contains " << vector3.size() << " elements" << endl;
    // Declare an empty 2D vector called vector_2d
    vector<vector<int>> vector_2d;

    // Add vecter1 and vector2 dynamically using push_back.
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    vector_2d.push_back(vector3);

    cout <<"\nvector_d2:" << endl;
    cout << vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "\t" << vector_2d.at(1).at(1) << endl;
    cout << vector_2d.at(2).at(0) << "\t" << vector_2d.at(2).at(1) << endl;

    vector1.at(0) = 1000;


    // Display the elements in vector1 using the at() method as well as it's size()method
    cout << "\nvector1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;

    return 0;
}
