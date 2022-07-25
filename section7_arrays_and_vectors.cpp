// Beginning C++ Programming - From Beginner to Beyond

#include<iostream>
#include<vector>

using namespace std;



int main(){

    /*Declaring, initializing and
    Accesing Vector */

    //Declare 2 empty vectors
    vector <int> vector1;
    vector <int> vector2;
    //Add 10 and 20 to the vector dynamically
    vector1.push_back(10);
    vector1.push_back(20);
    //Display the vector1
    cout << "Vector1 contains: \n";
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Vector1 contains " << vector1.size() << " elements.";
    //Add 100 and 200 to the second vector dynamically
    vector2.push_back(100);
    vector2.push_back(200);
    //Display the vector2
    cout << "Vector2 contains: \n";
    vector2.push_back(100);
    vector2.push_back(200);
    //Display the vector2
    cout << "Vector2 contains: \n";
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Vector2 contains " << vector1.size() << " elements.";
    // Declare empty 2d vector
    vector <vector<int> > vector_2d;
    // Add vectors to 2d vector
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    //Display vector 2d
    cout << "\nVector 2d: " << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    //Change vector1
    vector1.at(0) = 1000;
    //Display vector 2d
    cout << "\nVector 2d: (new)" << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    //Display the vector1
    cout << "Vector1 contains: \n";
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    return 0;
}
