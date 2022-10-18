#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

int main()
{

    stack<int> s;

    s.push(2);
    s.push(4);
    s.push(3);
    s.push(1);
    s.push(5);
    s.push(7);

    int x;
    x = s.size();

    vector<int> v;

   

   

     int element;

    for (int i = 1; i <=x; i++)
    {
        {
            element = s.top();   
            v.push_back(element); 
            s.pop(); 
        }

       
    }

     int n=v.size();

    sort(v.begin(),v.end());

     for (int i = 0; i <=v.size(); i++)
        {
            cout << v[i] << " ";
        }

        
   




}