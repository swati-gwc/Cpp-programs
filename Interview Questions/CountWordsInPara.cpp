//Count no of words in paragraph
//Asked in Amazon Interview

#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define mod 1000000007

using namespace std;
int count_words(string s) {

  int no_of_words = 0;

  for(int i=0; i<s.length(); i++)
  {
      if(s[i]==' ')
      {
        no_of_words ++;
      }
  }

  if(no_of_words == 0 && s.length()>0)
    {
        return 1;
    }
  else return no_of_words+1;


  return -1;
}
int main() {


    string para;

    //cin>>para;
    getline(cin,para);

    int no_of_words = count_words(para);

    if(no_of_words != -1)
    cout<<"Paragraph has "<<no_of_words<<" words.";
    else
    cout<<"Paragraph is empty";

	return 0;
}
