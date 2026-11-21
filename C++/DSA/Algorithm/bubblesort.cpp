#include <bits/stdc++.h>

using namespace std;

int main()
{

  int arr[100];
  int n;
  cin >> n;
  if (n < 0 || n > 100)
  {
    return 1;
  }

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j],arr[j+1]);
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << (i + 1 == n ? '\n' : ' ');
  }
}