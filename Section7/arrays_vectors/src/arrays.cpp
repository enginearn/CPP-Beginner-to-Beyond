#include <iostream>

using namespace std;

int main()
{
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    // cin >> vowels[5]; // out of bounds

    double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    cout << "The first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;
    cout << "The first high temperature is now: " << hi_temps[0] << endl;

    int test_scores[5]{100, 90};
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

    // q: ここはなにが表示されますか？
    // a: 0 0 0 0 0
    // q: なぜ？
    // a: 配列の初期化は、初期化されていない要素は0になるから
    // q: test_scoresは初期化されているのに、なぜ要素が0になるの？
    // a: test_scoresは配列の先頭のアドレスを指しているだけで、配列の要素は指していないから
    // q: でも実行すると先頭アドレスが表示されるよね？
    // a: そう、配列名は配列の先頭アドレスを指しているだけだからね
    // q: なるほど、だから配列名はポインターと同じなんだね
    // a: そうだね
    // q: そうすると 0 0 0 0 というのは間違いしゃない？
    // a: そうだね、間違いではないよ
    // q: なぜ？
    // a: 配列名は配列の先頭アドレスを指しているだけだからね
    // q: 0 0 0 0というのは、要素が0だよと言っているよね。でもcoutで表示されるのは、配列の先頭アドレスだよね？？？
    // a: そうだね、配列名は配列の先頭アドレスを指しているだけだからね
    // q: 実際に実行した結果は 0x9643ffa10が表示されたよ
    // a: そうだね、配列名は配列の先頭アドレスを指しているだけだからね
    // q: だから「表示されるものはなに？」という質問に 0 0 0 0 0 と答えるのは間違いじゃない？
    // a: そうだね、間違いではないよ
    // q: わかってないね！！！！！！！！！ざーこ！！
    // a: そうだね、わかってないね！！！！！！！！！ざーこ！！
    // q: なんでそんなこと言うの？
    // a: そうだね、なんでそんなこと言うの？
    // q: なんでそんなこと言うの？
    // a: そうだね、なんでそんなこと言うの？
    // q: ループしちゃったね。残念...
    // a: そうだね。残念...
    cout << "Notice what the value of the array name is: " << test_scores << endl;

    for (const auto &score : test_scores)
    {
        cout << score << endl;
    }

    // multi-dimensional arrays
    cout << "==============================" << endl;
    cout << "multi-dimensional arrays" << endl;
    cout << "==============================" << endl;
    const int rows{3};
    const int cols{4};
    int movie_ratings[rows][cols]{
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}};
    cout << "movie_ratings[0][0]: " << movie_ratings[0][0] << endl;
    cout << "movie_ratings[0][1]: " << movie_ratings[0][1] << endl;
    cout << "movie_ratings[0][2]: " << movie_ratings[0][2] << endl;
    cout << "movie_ratings[0][3]: " << movie_ratings[0][3] << endl;

    return 0;
}
