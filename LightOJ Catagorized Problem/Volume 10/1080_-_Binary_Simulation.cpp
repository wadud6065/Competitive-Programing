#include<iostream>
#include<vector>
#define SZ 100000
using namespace std;

void update(string arr, int i, int j)
{
  for(int k=i-1; k<=j-1; k++){
    if(arr[k] == '1')arr[k] = '0';
    else if(arr[k] == '0')arr[k] = '1';
  }
}

int main()
{
  int Test_Case;
  cin >> Test_Case;
  string v;
  for(int i=0; i<Test_Case; i++){
    cout << "Case " << i+1 <<":" << endl;
    cin >> v;
    int no_of_query;
    cin >> no_of_query;
    for(int i=0; i<no_of_query; i++){
      char c;
      cin >> c;
      if(c == 'I'){
        int i, j;
        cin >> i >> j;
        update(v, i, j);
        cout << v << endl;
      }
      else if(c == 'Q'){
        int i; cin >> i;
        cout << v[i-1] << endl;
      }
    }
  }
  return 0;
}
