#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        int n,sum=0;
        cin>>n;

        int arr[n][n];

        int r=0,c=0;
        for(int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(i==j)
                {
                    sum+=arr[i][j];
                }

            }
        }

        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<n-1;j++)
            {
                int temp=arr[i][j];

                for(int k=j+1 ; k<n ; k++)
                {
                    if(temp == arr[i][k])
                    {
                        r++;
                        flag=1;
                        break;
                    }
                }
                if(flag !=0)
                break;
            }
        }

        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<n-1;j++)
            {
                int temp=arr[j][i];
                for(int k=j+1;k<n;k++)
                {
                    if(temp == arr[k][i])
                    {
                        c++;
                        flag=1;
                        break;
                    }
                }
                if(flag != 0)
                {
                    break;
                }
            }
        }
        cout << "CASE #" << t << ": " << sum << " " << r << " " <<  c << '\n';
    }
}
