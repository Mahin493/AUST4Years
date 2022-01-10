#include<bits/stdc++.h>
using namespace std;

int main(){
  int page;
  cout << "Number of pages:\n";
  cin >> page;
  int n;
  cout << "Number of page Reference:\n";
  cin >> n;
  int ar[100];
  cout << "Reference String:\n";
  for (int i = 0; i < n; i++){
    cin >> ar[i];
  }

  //7 0 1 2 0 3 0 4 2 3 0 3 0 3 2 1 2 0 1 7 0 1
  cout << "Number of Memory Page Frame:\n";
  int Frame;
  cin >> Frame;
  int memory[Frame + 7];
  for (int i = 0; i < Frame; i++){
    memory[i] = -1;
  }
  int hit = 0;
  int fault = 0;
  for (int i = 0; i < n; i++){
    bool flag = false;
    for (int j = 0; j < Frame; j++){
      if (memory[j] == ar[i]){
        flag = true;
        break;
      }
    }
    if (flag){
      hit++;
    } else {
      fault++;
      bool done = false;
      for (int j = 0; j < Frame; j++){
        if (memory[j] == -1){
          memory[j] = ar[i];
          done = true;
          break;
        }
      }
      if (!done){
        int mi = -1;
        int mx = -1;
        for (int j = 0; j < Frame; j++){
          int dis = n;
          for (int k = i + 1; k < n; k++){
            if (memory[j] == ar[k]){
              dis = k;
              break;
            }
          }
          if (dis - i > mx){
            mx = dis - i;
            mi = j;
          }
        }
        memory[mi] = ar[i];
      }
    }
  }
  cout << "Number of page fault using Optimal Page replacement Algorithm: " << fault << "\n";
   cout << "Number of page Hit using Optimal Page replacement Algorithm: " << hit << "\n";
  cout << "Page Fault Rate: " << (double) fault / (double) n * 100.00 << "%\n";
  return 0;
}


