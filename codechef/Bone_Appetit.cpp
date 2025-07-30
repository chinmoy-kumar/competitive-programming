/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Bone Appetit
URL: https://www.codechef.com/problems/BNE_APT
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int bones, blood;
    cin >> bones >> blood;

    long totalBones = n * bones;
    long totalBlood = m * blood;

    cout << totalBones + totalBlood << endl;


    return 0;
}