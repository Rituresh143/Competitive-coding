#include <bits/stdc++.h>
using namespace std;
int smallestSuperSequence(string &str1, int len1, string &str2, int len2)
{
int superseq[len1 + 1][len2 + 1];
for (int p = 0; p <= len1; p++)
{
for (int q = 0; q <= len2; q++)
{
if (p == 0)
{
superseq[p][q] = q;
}
else if (q == 0)
{
superseq[p][q] = p;
}
else if (str1[p - 1] == str2[q - 1])
{
superseq[p][q] = 1 + superseq[p - 1][q - 1];
}
else
{
superseq[p][q] = 1 + min(superseq[p - 1][q],
superseq[p][q - 1]);
}
}
}
return superseq[len1][len2];
}
int main()
{
int t;
cin >> t;
while (t--)
{
string str1, str2;
cin >> str1>>str2;
cout << smallestSuperSequence(str1, str1.size(), str2,
str2.size()) << endl;
}
}