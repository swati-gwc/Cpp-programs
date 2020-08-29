#include <bits/stdc++.h>
using namespace std;
int main() {


    set<int> s;
    int i,a,n;
    cout<<" SET : STL IN C++ "<<endl;

    cout<<"Enter no of elements you want to enter in set"<<endl;
    cin>>n;

    cout<<"Enter the elements "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        //Inserting elements in a set
        s.insert(a);
    }

    cout<<"Current values in set is : ";
    for(auto it= s.begin(); it!=s.end();it++)
    {
        //traversing set through iterator
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"The size of set is " <<s.size()<<endl;
    cout<<"The maximum number of elements that the set can hold is "<<s.max_size()<<endl;

    cout<<"Erase/Delete a number from set, enter an element present in set "<<endl;
    cin>>a;
    s.erase(a);

    cout<<"Current values in set is : ";
    for(auto it= s.begin(); it!=s.end();it++)
    {
        //traversing set through iterator
        cout<<*it<<" ";
    }
    cout<<endl;

    //check if an element is present in set or not
    cout<<"check is an element is present in set or not, enter an element : "<<endl;
    cin>>a;
    if(s.count(a)==1) cout<<"element "<<a<<" is present in set!"<<endl;
    else  cout<<"element "<<a<<" is not present in set!"<<endl;

    //empty() function is used to check if the set container is empty or not.
    if(s.empty()) cout<<"set is empty !"<<endl;
    else  cout<<"set is non empty !"<<endl;

    //clear() function removes all the elements from the set.
    cout<<"using clear function on set "<<endl;
    s.clear();

    if(s.empty()) cout<<"set is empty !"<<endl;
    else  cout<<"set is non empty !"<<endl;







	return 0;
}
