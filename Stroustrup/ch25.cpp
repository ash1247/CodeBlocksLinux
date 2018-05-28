#include<bits/stdc++.h>

using namespace std;

int main(){
        int n;
        int s;
        int beg,en,mid;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            a[i] = rand()%100;
        }

        sort(a, a+n);
        for(int i = 0; i < n; i++)
        {
             cout << a[i] << " ";
        }

        cout<<endl;
        cin >> s;

        beg = 0;
        en = n-1;

        while( beg <= en)
        {
            mid = floor((beg+en)/2);
            if(s==a[mid]){
                cout << a[mid] << " found on " << mid << "\n";
                break;
            }
            else
            {
                if(s >= a[mid])
                    beg = mid+1;
                if(s < a[mid])
                    en = mid-1;
            }
        }

}
