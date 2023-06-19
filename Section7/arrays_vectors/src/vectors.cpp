#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    // cin >> vowels[5]; // out of bounds

    vector<double> hi_temps{90.1, 89.8, 77.5, 81.6};
    cout << "The first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;
    cout << "The first high temperature is now: " << hi_temps[0] << endl;

    vector<int> test_scores(5); // 5 elements all initialized to 0
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "Enter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "Updated test scores: " << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "Enter a test score to add to the vector: ";
    int score_to_add{0};
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nEnter one more test score to add to the vector ";
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "Test scores are now: " << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    cout << "Sixth score at index 5: " << test_scores[5] << endl;
    cout << "Seventh score at index 6: " << test_scores[6] << endl;

    cout << "There are now " << test_scores.size() << " scores in the vector" << endl;

    vector<int> vector1(10, 100); // 10 elements all initialized to 100
    vector<int> vector2(vector1); // copy of vector1
    vector<int> vector3;          // empty

    for (auto num : vector1)
        cout << num << " ";
    cout << endl;

    for (auto num : vector2)
        cout << num << " ";
    cout << endl;

    vector1.at(0) = 1000;

    for (auto num : vector1)
        cout << num << " ";
    cout << endl;

    // 2D vectors
    vector<vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}};

    cout << "\nHere are the movie rating for reviewer #1 using array syntax: " << endl;

    for (const auto &row : movie_ratings)
    {
        for (const auto &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    vector<int> vector4;
    vector<int> vector5;

    vector4.push_back(10);
    vector4.push_back(20);

    cout << "\nvector4: " << vector4.at(0) << " " << vector4.at(1) << endl;
    cout << "vector4 contains " << vector4.size() << " elements" << endl;

    vector5.push_back(100);
    vector5.push_back(200);

    cout << "\nvector5: " << vector5.at(0) << " " << vector5.at(1) << endl;
    cout << "vector5 contains " << vector5.size() << " elements" << endl;

    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector4);
    vector_2d.push_back(vector5);

    cout << "\nvector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    vector4.at(0) = 1000;

    cout << "\nvector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << "\nvector4: " << vector4.at(0) << " " << vector4.at(1) << endl;
    cout << "vector4 contains " << vector4.size() << " elements" << endl;

    return 0;
}
