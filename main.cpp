#include <iostream>
#include <vector>
#include "Computer.h"
using namespace std;
int main()
{
    vector<Computer> arr;
    arr.push_back(Computer("Dell", 2.5, 8, 0, 10'000));
    arr.push_back(Computer("Dell", 3.2, 16, 1, 20'000));
    arr.push_back(Computer("Lenovo", 2.7, 16, 0, 16'000));
    arr.push_back(Computer("Dell", 4.5, 32, 1, 32'000));
    arr.push_back(Computer("Hp", 3.2, 32, 0, 50'000));

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i].show(); cout << endl;
    }
}