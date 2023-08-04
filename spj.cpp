#include "testlib.h"
#include<bits/stdc++.h>

using namespace std;
/*
If you want to use Special referee, please read [luogu help center-Special Judge function description] (https://help.luogu.com.cn/manual/luogu/problem/special-judge).
*/
int main(int argc, char *argv[]) {
    registerTestlibCmd(argc, argv);
    i64 m = inf.readLong();
    string s = ouf.readString("[a-z]{1,60000}");
    i64 dp[3] = {0};
    for(char c : s) {
        if(c == 'c') dp[0] ++;
        else if(c == 'o') dp[1] += dp[0];
        else if(c == 'n') dp[2] += dp[1];
    }
    if(dp[2] != m) quitf(_wa, "Wrong Answer");
    quitf(_ok, "Accepted");
}

