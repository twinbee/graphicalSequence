#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include <functional>

using namespace std;

void print(int seq[], int index)
{
 cout << "S: ";
 for (int i=0; i < index; i++) cout << seq[i] << " ";
 cout << endl;
}

int main()
{
 const int max_len = 100;

 int seq[max_len];

 int tempy = 0;
 int index = 0;

 cin >> tempy;
 while(tempy >= 0 && index < max_len)
 {
  seq [index++] = tempy;
  cin >> tempy;
 }

 sort(seq, seq + index);
 print(seq, index);

 if (seq[--index] > index)
 {
  cout << seq[index] << " > " << index;
  cout << "\nNOT graphical 1\n";
  system("PAUSE"); return 0;
 }

while (index >= 0)
{
 sort(seq, seq + index);
 if (seq[index] < 0)
 {
  cout << "\nNOT graphical\n";
  system("PAUSE"); return 0;
 }

 for (int i = 1; index-i >= 0 && i <= seq[index]; i++) seq[index-i]--;
 sort(seq, seq + index);
 print(seq, index--);
}


 cout << "\ngraphical\n";
 system("PAUSE");
 return 0;
}
