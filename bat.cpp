#include<bits/stdc++.h>
#include<windows.h>

using namespace std;
int main(){
  system("g++ sol.cpp -o sol -O2 -std=c++14 & g++ xs.cpp -o xs -O2 -std=c++14 & g++ spj.cpp -o spj -O2 -std=c++14");
  for (long long i = 1; /*If you want to set the number of shots, please fill in this expression. Otherwise, execution continues until Hack data is found.*/; i++){
    system("python checker.py > t.in");
    int xsca = clock();
    system("xs.exe < t.in > t.out");
    int xscb = clock();
    system("sol.exe < t.in > t.ans");
    int solcb = clock();
    if (xscb - xsca > solcb - xscb && xscb - xsca >= 1000){
      cout << "Time Limit Exceeded on test #" << i << ".Time: " << xscb - xsca << "ms.STD time:" << solcb - xscb << "ms.\n";
    }
    if (system("fc t.out t.ans")){
      cout << "Wrong answer on test #" << i << ".Time: " << xscb - xsca << "ms.STD time:" << solcb - xscb << "ms.\n";
      return 0;
    }
    cout << "Accepted on test #" << i << ".Time: " << xscb - xsca << "ms.STD time:" << solcb - xscb << "ms.\n";
  }
  return 0;
}
