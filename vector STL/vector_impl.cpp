#include <iostream>
// For Vectors we need to Include a headerfile called <vector>
#include <vector>
// For using sort function
#include <algorithm>

using namespace std;

int main()
{

    // Analysing How Size and capacity grows with with continuous Insertion of elements.

    vector<int> v;
    vector<int> v1(5 , 1);
    cout << "Size of v:" << v.size() << endl;
    cout << "Capacity of v:" << v.capacity() << endl;
    
    v.push_back(2);
    v.push_back(3);
    cout << "Size of v:" << v.size() << endl;
    cout << "Capacity of v:" << v.capacity() << endl;

  
    v.push_back(10);
    cout << "Size of v:" << v.size() << endl;
    cout << "Capacity of v:" << v.capacity() << endl;
    

    //Update Value
    v[1] = 5;

    //Checking the size and capacity of the vector v1


    cout << "Size of v:" << v1.size() << endl;
    cout << "Capacity of v:" << v1.capacity() << endl;

 
    // Now checking how the capacity pushing back new elements into the vector

    v1.push_back(8);

    cout << "Size of v:" << v1.size() << endl;
    cout << "Capacity of v:" << v1.capacity() << endl; // Here you will see the capacity is doubled , which shows that every time you push_back a new element , a new vector is created with the double size and previous vector space is released

    vector<int>v3 = {1 , 2 , 3 , 4 ,5};

    // Delete value from vector

    v3.pop_back();


    cout << "Size of v3:" << v3.size() << endl;
    cout << "Capacity of v3:" << v3.capacity() << endl;


    // Erasing a particular element from the vector
    v3.erase(v3.begin()+1);
    cout<<"Size of v3:"<<v3.size()<<endl;
    cout<<"Capacity of v3: "<<v3.capacity()<<endl;


    // Printing the vector
    for(int i = 0 ; i < v3.size() ; i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    // Inserting a new value in a particular Position


    v3.insert(v3.begin()+1 , 50);

    for(int i = 0 ; i < v3.size() ; i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;



    // Clearing Up the whole vector which deletes all the elements

    v3.clear();

    cout<<"Size of v3:"<<v3.size()<<endl;
    cout<<"Capacity of v3:"<<v3.capacity()<<endl;



    vector<int> arr;

    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(122);

    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;


    // Copying a vector to another vector

    vector <int> a;

    a = arr; // Just by this , the elements are copied , see how amazing it is

    cout<<a.size();
    cout<<endl;

    for(auto it = arr.begin() ; it!=arr.end() ;it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for (auto ele: arr) 
    {
        cout<<ele<<" ";
    }
    cout<<endl;


    // Sorting of Arrays

    vector<int> ans;

    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);


    // Now let's sort this ans vector

    sort(ans.begin() , ans.end());

    for(auto ele: ans)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    

    // Applying search functionality in the vector (it returns whether the element is present in the array or not)
    // Only applicable after array sorted in non decreasing order

    cout<<binary_search(ans.begin(), ans.end(),54)<<endl;



    // Now to sort in decreasing order, we need to do like this

    sort(ans.begin() , ans.end() , greater<int>());

     for(auto ele: ans)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    // Now we need the search where the element index is returned

    cout<<(find(ans.begin(), ans.end() ,54) - ans.begin())<<endl;

    // count

    cout<<"The count is:"<<count(ans.begin(),ans.end(),15)<<endl;

    // Max or Min 
    
    int max =  *(max_element(ans.begin() , ans.end()));

    cout<<"The max value of ans vector is:"<<max;


    /*
    
       1: lower_bound(first_iterator , last_iterator , x)

       returns an iterator pointing to the first element
       in the range [first , last) which has a value not less than 'x'

       2: upper_bound(first_iterator , last_iterator ,x)

       returns an iterator pointing to the first element
       in the range [first , last)

       which has a value greater than 'x'.

       
    
    
    
    
    */
    

    return 0;
}