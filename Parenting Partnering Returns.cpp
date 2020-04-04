#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int test;
    cin >> test;
    for(int t = 1; t <= test; ++t)
    {
        int n;
        cin >> n;
        vector<pair<int,int>> a;
        int arr[n][2];
        char res[n];
        for(int i = 0; i < n; ++i)
        {
            cin >> arr[i][0] >> arr[i][1];
            a.push_back(make_pair(arr[i][0],i));
        }

        sort(a.begin(), a.end());

        int flag1 = 0, flag2 = 0;
        int flag = 0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i].first >= flag1)
            {
                res[a[i].second] = 'C';
                flag1 = arr[a[i].second][1];
            }
            else
            {
                if(a[i].first >= flag2)
                {
                    res[a[i].second] = 'J';
                    flag2 = arr[a[i].second][1];
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
        {
            cout << "Case #" << t << ": IMPOSSIBLE" << endl;
        }
        else
        {
            cout << "Case #"<< t << ": ";
            for(int i = 0; i < n; ++i)
            {
                cout<<res[i];
            }
            cout << '\n';
        }
    }
}
