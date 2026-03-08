#include<bits/stdc++.h> //Super library
using namespace std;

/*  C++ STL
   Algorithms
   Containers
   Functions
   Iterators */ 


// Pairs
void explainPair(){
    pair<int, int> p = {1, 3};// contains two entity
    cout << p.first <<" "<< p.second <<endl;

    pair<int, pair<int, int>> q = {1, {3,4}};// pair of pairs
    cout << q.first <<" "<< q.second.second <<" "<< q.second.first <<endl;

    pair<int, int> arr[] ={{1, 2}, {2, 5}, {5, 1}};// pair array
    cout << arr[1].second <<endl;
}

// Vectors
void explainVectors(){// when you don't know the size of particular required data structure 
    vector<int> v;
    v.push_back(1);// Needs already constructed object
    v.emplace_back(2);// Constructs in-place

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);// no need of {}

    vector<int> v1(5, 100);// {100, 100, 100, 100, 100}
    for(int x : v1){
        cout << x <<" ";
    }
    cout <<endl;
    
    vector<int> v2(5);// {0, 0, 0, 0, 0}
    for(int x : v2){
        cout << x <<" ";
    }
    cout <<endl;

    vector<int> p(5, 20);
    vector<int> q(p);// p copied to q
    
    vector<int> vct;
    vct.push_back(10);
    vct.push_back(20);
    vct.push_back(30);
    vct.push_back(40);
    vct.push_back(50);
    // vector<int>::iterator it = vct.begin();

    // it++;
    // cout << *(it) <<" ";

    // it = it + 2;
    // cout << *(it) <<" ";

    // vector<int>::iterator it = vct.end();
    // vector<int>::reverse_iterator it2 = vct.rend();
    // vector<int>::reverse_iterator it3 = vct.rbegin();

    // cout << vct[0] <<" "<< vct.at(0);
    // cout << vct.back() <<" ";

    // for(vector<int>::iterator it = vct.begin(); it != vct.end(); it++){
    //     cout << *(it) <<" ";
    // }

    // for(auto it = vct.begin(); it !=v.end(); it++){
    //     cout << *(it) <<" ";
    // }

    // for(auto it : vct){
    //     cout << it <<" ";
    // }

    // {10, 20, 12, 23}
    v.erase(v.begin()+1);// {10, 12, 23}

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4);// {10, 20, 35} [start, end)


    // Insert function
    vector<int>v(2, 100);// {100, 100}
    v.insert(v.begin(), 300);// {300, 100 ,100}
    v.insert(v.begin() + 1, 2, 10);// {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);// {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());// {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size();// 2

    // {10, 20}
    v.pop_back();// {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2);// v1 -> {30, 40} , v2 -> {10, 20}

    v.clear();// erase the entire vector

    cout << v.empty();// False

    // Input elements from Terminal
    vector<int> nums;
    cout << "Enter the numbers (enter -1 to stop): ";
    int num;
    while(cin >> num && num != -1){
        nums.push_back(num);
    }

}

// List
void explainList(){
    list<int> ls;

    ls.push_back(2);// {2}
    ls.emplace_back(4);// {2, 4}

    ls.push_front(5);// {5, 2, 4}

    ls.emplace_front(1);// {1, 5, 2, 4}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}

// Deque
void explainDeque(){
    deque<int>dq;
    dq.push_back(1);// {1}
    dq.emplace_back(2);// {1, 2}
    dq.push_front(4);// {4, 1, 2}
    dq.emplace_front(3);// {3, 4, 1, 2}

    dq.pop_back();// {3, 4, 1}
    dq.pop_front();// {4, 1}

    // {10, 30, 40, 50}
    dq.back();// 10
    dq.front();// 50

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}

// Stack -> LIFO
void explainStack(){
    stack<int> st;
    st.push(1);// {1}
    st.push(2);// {2, 1}
    st.push(3);// {3, 2, 1}
    st.push(3);// {3, 3, 2, 1}
    st.emplace(5);// {5, 3, 3, 2, 1}

    cout << st.top();// prints 5 "** st[2] is invalid **"

    st.pop();// st looks like {3, 3, 2, 1}

    cout << st.top();// 3: only read no delete

    cout << st.size();// 4

    cout << st.empty();// false

    stack<int>st1, st2;
    st1.swap(st2);
    
    // push, pop, top -> O(1)
    
}

// Queue -> FIFO
void explainQueue(){
    queue<int> q;
    q.push(1);// {1}
    q.push(2);// {1, 2}
    q.emplace(4);// {1, 2, 4}

    q.back() += 5;

    cout << q.back();// prints 9

    // Q is {1, 2, 9}
    cout << q.front();// prints 1

    q.pop();// {2, 9}

    cout << q.front();// prints 2

    // push, pop, top -> O(1)

    // size, swap, empty same as stack

}

// Priority Queue -> Largest element at the top (Maximum Heap)
void explainPQ(){
    priority_queue<int> pq;

    pq.push(5);// {5}
    pq.push(2);// {5, 2}
    pq.push(8);// {8, 5, 2}
    pq.emplace(3);// {8, 5, 3, 2}
    pq.emplace(10);// {10, 8, 5, 2}

    cout << pq.top();// prints 10

    pq.pop();// {8, 5, 2}

    cout << pq.top();// prints 8

    // size, swap, empty function same as other

    // Minimum Heap -> Minimum element at the top
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);// {5}
    pq.push(2);// {2, 5}
    pq.push(8);// {2, 5, 8}
    pq.emplace(10);// {2, 5, 8, 10}

    cout << pq.top();// prints 2

    // push - O(log n), pop - O(log n), top - O(1)

}

// Set -> (Sorted & unique)
void explainSet(){
    set<int> st;
    st.insert(1);// {1}
    st.emplace(2);// {1, 2}
    st.insert(2);//{1, 2}
    st.insert(4);// {1, 2, 4}
    st.insert(3);// {1, 2, 3 ,4}

    /* Functionality of insert in vector
       can be used also, that only increases
       efficiency.

       begin(), end(), rbegin(), rend(), size(),
       empty() and swap() are same as those of above
    */

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // returns an iterator which points to the three

    // {1, 2, 3, 4, 5}
    auto it = st.find(6);// return st.end()

    // {1, 4, 5}
    st.erase(5);// erase 5 // takes lograthmic time

    int cnt = st.count(1);// returns 1 if element exists else return 0

    auto it = st.find(3);
    st.erase(it);// it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);// after erase {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function works in the same way as in vector it does.
 
    // This is the syntax
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);

    // in sets all functions takes O(log n)

}

// MultiSet -> only sorted not unique
void explainMultiSet(){
    // Everything is same as set
    // only stores duplicate element also

    multiset<int> ms;
    ms.insert(1);// {1}
    ms.insert(1);// {1, 1}
    ms.insert(1);// {1, 1, 1}
    
    ms.erase(1);// all 1's erased

    int cnt = ms.count(1);// 0

    // only a single one erased
    ms.erase(ms.find(1));// erase the address of first 1

    ms.erase(ms.find(1), ms.find(1+2));// erase the addresses of range

}

// Unordered Set -> only unique not sorted
void explainUSet(){
    unordered_set<int> st;
    /* lower_vound and upper_bound function
       does not works, rest all functions are same
       as above, it does not stores in any
       particular order it has a better complexity
       than set in most cases, except when some collision happens
       */

    //mostly Tc = O(1) in all cases

}

// Map -> It is like a container which stores everything in respect of unique key but may duplicate value
// key and value be of any datatypes
// it follows sorted order
void explainMap(){
    map<int, int> mpp1;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    //mpp[key] = value;
    mpp1[1] = 2;
    mpp2.insert({2, {3, 1}});
    mpp3[{2, 3}] = 10;

    map<pair<int, int>, int> mpp4;
    for(auto it : mpp2){
        cout << it.first << " " << it.second << endl;
    }
}








int main(){
    explainPair();
    explainVectors();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainMap();
    return 0;
} 

// BINARY SEARCH -> Check if X exists in the sorted array or not?
int A[] = {1, 4, 5, 6, 9, 9};
int n = 5;

bool res = binary_search(A, A+n, 3);// False
bool res = binary_search(A, A+n, 4);// True

//lower_bound function: -> O(log n)

/*  it ideally returns an 
    iterator pointing to the first element in the range [start, end)
    which is not less than (≥) the given value.
    */

/* lower bound is that stl which return the first
   occurence of the element if it occurs and if doesn't
   occurs then the iterator pointing to element which is
   th immediate next greater of the given element
   */

int B[] = {1, 4, 5, 6, 9, 9};
int n1 = 5;

int ind = lower_bound(B, B+n1, 4) - B;// 1
int ind = lower_bound(B, B+n1, 7) - B;// 4
int ind = lower_bound(B, B+n1, 10) - B;// B.end()

// For vectors
vector<int> v;
int x = v.size();
int ind = lower_bound(v.begin(), v.end(), x) - v.begin();

//upper_bound function: -> O(log n)

/*  it will never return an iterator pointing to that element
    whereas it will always return an iterator pointing to next 
    greater element of that element.
*/

int B[] = {1, 4, 5, 6, 9, 9};
int n1 = 5;

int ind = upper_bound(B, B+n1, 4) - B;// 2
int ind = upper_bound(B, B+n1, 7) - B;// 4
int ind = upper_bound(B, B+n1, 10) - B;// B.end()

// For vectors
vector<int> v;
int x = v.size();
int ind = upper_bound(v.begin(), v.end(), x) - v.begin();


