#include<iostream>
using namespace std;

int main()
{
  int n;  /* 審判の数 */
  cin >> n;     /* scanf("%d", &n); と同じ*/
  while(n > 0) {
    int sum = 0;
    int i;
    for(i = 0; i < n; i++) {
      int s = 0; /* 各審判のスコア */
      cin >> s;
      sum += s;
    }
    cout << sum << endl;   /* printf("%d\n", sum) と同じ */
    cin >> n;
  }
  return 0;
}


