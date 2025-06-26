//
// Created by Ricardo on 23/06/2025.
//
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;

    char current_char = 0;
    char previous_char = 0;
    int longest_repetition = 1;
    int current_repetition = 1;

    for (char i : s)
    {
        current_char = i;

        if (current_char == previous_char)
        {
            current_repetition++;
        } else
        {
            current_repetition = 1;
        }

        if (longest_repetition < current_repetition)
        {
            longest_repetition = current_repetition;
        }

        previous_char = current_char;
    }

    cout << longest_repetition;
}