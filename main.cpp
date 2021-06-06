#include <iostream>
#include <ctime>

using namespace std;

string coin_toss()
{
    int heads_or_tails{rand() % 2 + 1};
    if(heads_or_tails == 1)
    {
        return "heads";
    }
    else
    {
        return "tails";
    }
}

int main()
{
    cout << "Welcome To Heads or Tails!" << endl << endl;

    srand(time(nullptr));
    int times_tossed{};
    cout << "How many attempts at tossing ";
    cin >> times_tossed;

    for(int count{1}; count <= times_tossed; ++count)
    {
        string result{coin_toss()};
        cout << count << ": " << result << endl;
    }

    return 0;
}
