#include<bits/stdc++.h>

using namespace std;
int main(){
  system("g++ sol.cpp -o sol -O2 -std=c++14 & g++ xs.cpp -o xs -O2 -std=c++14 & g++ spj.cpp -o spj -O2 -std=c++14");
  for (long long i = 1; /*If you want to set the number of shots, please fill in this expression. Otherwise, execution continues until Hack data is found.*/; i++){
    #ifdef _WIN32
    system("python checker.py > t.in");
    int xsca = clock();
    system("xs.exe < t.in > t.out");
    int xscb = clock();
    system("sol.exe < t.in > t.ans");
    int solcb = clock();
    #endif
    #ifdef __linux__
    system("python checker.py > t.in");
    int xsca = clock();
    system("./xs < t.in > t.out");
    int xscb = clock();
    system("./sol < t.in > t.ans");
    int solcb = clock();
    #endif
    if (xscb - xsca > solcb - xscb && xscb - xsca >= 1000){
      cout << "Time Limit Exceeded on test #" << i << ".Time: " << 1.0 * (xscb - xsca) / CLOCKS_PER_SEC << "ms.STD time:" << 1.0 * (solcb - xscb) / CLOCKS_PER_SEC << "ms.\n";
    }
    #ifdef _WIN32
    if (system("fc t.out t.ans")){
    #endif
    #ifdef __linux__
    if(system("diff t.out t.ans")){
    #endif
      cout << "Wrong answer on test #" << i << ".Time: " << 1.0 * (xscb - xsca ) / CLOCKS_PER_SEC << "ms.STD time:" << 1.0 * (solcb - xscb) / CLOCKS_PER_SEC << "ms.\n";
      return 0;
    }
    cout << "Accepted on test #" << i << ".Time: " << 1.0 * (xscb - xsca) / CLOCKS_PER_SEC << "ms.STD time:" << 1.0 * (solcb - xscb) / CLOCKS_PER_SEC << "ms.\n";
  }
  return 0;
}
