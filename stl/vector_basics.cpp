#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define mod 1000000007

using namespace std;

int main() {


    vector<int> vec;

    //feeding elements to vector
    for (int i = 1; i <= 5; i++)
        vec.push_back(i);

    cout << "Size : " << vec.size();
    cout << "\nCapacity : " << vec.capacity();
    cout << "\nMax_Size : " << vec.max_size();

    // resizes the vector size to 4
    vec.resize(4);

    // prints the vector size after resize()
    cout << "\nSize : " << vec.size();

    // checks if the vector is empty or not
    if (vec.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    // Shrinks the vector
    vec.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = vec.begin(); it != vec.end(); it++)
        cout << *it << " ";

	return 0;
}
