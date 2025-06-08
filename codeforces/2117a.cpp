//
// Created by vinia on 6/8/2025.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n, x;
        cin >> n >> x;

        bool button_was_pressed = false;
        bool could_pass_through = true;

        while (n > 0)
        {
            int cur_door;
            cin >> cur_door;

            if (cur_door == 1 && !button_was_pressed)
            {
                button_was_pressed = true;
            } else if (cur_door == 1 && button_was_pressed)
            {
                if (x <= 0)
                {
                    could_pass_through = false;
                }
            }

            if (button_was_pressed)
            {
                x--;
            }

            n--;
        }

        if (could_pass_through)
        {
            cout << "YES" << endl;
        } else
        {
            cout << "NO" << endl;
        }

        t--;
    }
}
