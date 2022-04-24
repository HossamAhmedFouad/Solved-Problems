#include <bits/stdc++.h>
using namespace std;

int main(){

    long long testCases{0},kinds{0},value{0},leftPointer{0},rightPointer{0};
    long long firstSum{0},secondSum{0};

    vector<long long>chocolates;
    cin>>testCases;
    while (testCases--) {
        chocolates.clear();
        cin >> kinds;
        if (kinds < 2) {
            cin >> value;
            if (kinds == 1 && value == 1) {
                cout << "YES" << endl;
            } else{
                cout<<"NO"<<endl;
            }
        } else {
            for (int i = 0; i < kinds; ++i) {
                cin >> value;
                chocolates.push_back(value);
            }
            sort(chocolates.begin(), chocolates.end());

            for (int i = 0; i <kinds-2 ; ++i) {
                firstSum+= chocolates[i];
            }
            chocolates[kinds-1] -= firstSum;
            chocolates[kinds-2] -= firstSum;

            firstSum = chocolates[kinds-2];
            secondSum = chocolates[kinds-1];

            if(abs(firstSum-secondSum)<=1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
