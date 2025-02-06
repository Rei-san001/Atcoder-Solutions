#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin>>A>>B>>C;

    vector<int> syllables = {A, B, C};
    vector<int> haikupattern = {5, 5, 7};

    sort(syllables.begin(), syllables.end());

    if(syllables == haikupattern){
        cout<<"YES";
    }
    else
        cout<<"NO";
}
