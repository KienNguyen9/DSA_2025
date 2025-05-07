// #include <bits-stdc++.h>
#include <iostream>
using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        int rating; cin >> rating;
        cout << "Division ";
        if(rating >= 1900) cout << "1";
        else if (rating >= 1600 && rating <= 1899) cout << "2";
        else if (rating >= 1400 && rating <= 1599) cout << "3";
        else cout << "4";
        cout << "\n";
    }
    return 0;
}


