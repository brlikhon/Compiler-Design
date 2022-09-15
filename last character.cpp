/*Write a code that will accept all the strings having the last character a or b or ab
Sample input : jain
Sample output: not accepted
Sample input : jaina
Sample output: accepted
Sample input : jainb
Sample output: accepted
Sample input : jainab
Sample output: accepted*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fraction() cout.unsetf(ios::floatfield); cout.precision(6);

int main()
{
  cout<<"Sample input : ";
  string st; cin>>st;
 cout<<"Sample output : ";

        if(st.back()=='a' or st.back()=='b' or st.back()=='ab')cout<<"accepted"<<endl;
        else cout<<"not accepted\n";


}
