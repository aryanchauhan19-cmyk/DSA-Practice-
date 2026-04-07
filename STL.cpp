#include <bits/stdc++.h>
using namespace std;

// void explainPair(){

//     pair<int,int> pr1=make_pair(2,8);
//     pair<pair<int,char>,int> pr2 ={{1,'h'},9};

//     cout << pr1.first<< endl;
//     cout << pr2.first.second<<endl;
// }
// void explainVector(){

//     vector <int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.emplace_back(0);

//     //Long Method

//     for(int i=0;i < vec.size();i++){
//         cout << vec[i]<< endl;
//     }

//     //Use Iterator Method
//     //Long Method

//      vector<int> :: iterator beginItr = vec.begin();
//      vector<int> :: iterator endItr= vec.end();
//      for(vector<int> :: iterator i = beginItr; i<endItr; i++){
//         cout << *i<<endl;
//      }

//      Effective Method Use Auto instead these long lines of code

//      Normal

//      auto beginItr=vec.begin();
//      auto endItr=vec.end();
//      for(auto i : vec){
//         cout << i << " " << endl;
//      }
//      Reverse iterator
//      auto beginItr=vec.rbegin();
//      auto endItr=vec.rend();
//      for (auto i : vec){

//         cout << i <<" "<< endl;

//      }

//     vector <int> vec = {1,2,3};
//     vec.pop_back();  // Pops the last element out

//     // Duplicate vector

//     vector <int> dupVec(vec);
//     for(auto i : dupVec){
//         cout << i << " " <<endl;
//     }

// }
void explainList()
{

    list<int> ls = {12, 13};

    for (auto i : ls)
    {
        cout << i << " ";
    }
}
void explainStack()
{
    stack<int> st;
    st.push(12);
    st.push(13);
    // cout << st.top() << " ";
    // st.pop();
    // cout << st.top() << " ";

    // All Elements printing

    while (st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }
}
void explainQueue()
{

    queue<int> qr;
    qr.push(12);
    qr.push(13);
    qr.push(14);
    while (qr.empty() == false)
    {
        cout << qr.front() << " ";
        qr.pop();
    }
}

// void explainPriorityQueue(){
//    //Syntax for highest Queue => Stores the Highest Term at the top
//     priority_queue <int> pq;
//     //Syntax for Minimum Queue =>Stores Lowest Term at the top
//     priority_queue<int,vector<int>,greater<int>> pq;

//     pq.push(5);
//     pq.push(10);
//     pq.push(15);

//     // cout << pq.top() << " ";
//     // pq.pop();

//     while(pq.empty() == false){
//         cout << pq.top()<<endl;
//         pq.pop();
//     }
// }

// void explainSet(){
//     set <int> st;
//     st.insert(12);
//     st.insert(20);
//     st.insert(24);
// for(auto i : st){
//     cout << i << " ";
//     cout << endl;
// }

// auto i = st.find(12);
// if(i !=st.end()){
//     cout << *i;
// }
// Lower Bound ->Find value >= number Given

//     auto it = st.upper_bound(21);
//     cout << *it;
// }

// void explainMultiSet(){

//     multiset <int> ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(2);
//     ms.insert(2);
//     ms.insert(2);

//     ms.erase(1); // Erases All The Elements which are '1'.
//     for(auto it : ms){
//         cout << it << endl;
//     }
//     cout << "No of '2': "<< ms.count(2)<<endl;
// }

// void explainUnorderedSet(){
//     unordered_set<int> us; // lower and upper bound in not applicable in this...
//     us.insert(1);
//     us.insert(1);
//     us.insert(1);
//     us.insert(2);
//     us.insert(2);
//     us.insert(1);
//     us.insert(2);
//     us.insert(12);
//     us.insert(13);

//     for (auto it : us){
//         cout << it << " ";
//     }
// }

// void explainMap()
// {
//     map<int, string> mpp; // int => key , string => value (value of key should be unique)
//     mpp[1] = "abc";
//     mpp[2] = "bcd";
//     mpp[3] = "cat";
//     mpp[3] = "rat";
//     mpp[4] = "aryan";
//     // Printing all the elements out
//     for (auto i : mpp)
//     {
//         cout << i.first << "->" << i.second << endl;
//     }

//     // Finding out the Element in the map

//     auto i = mpp.find(4);
//     cout << (*i).first << "->" << (*i).second << endl;
//     // Unordered_map

//     unordered_map<int, string> mp;
//     mp[1] = "aryan";
//     mp[2] = "ryan";
//     mp[3] = "yan";
//     mp[4] = "an";
//     mp[5] = "n";
//     for (auto i : mp){
//         cout << i.first << "->" << i.second << endl;  //You might get decending order while priting these =>But here is the illusion all It uses hash table concept .You cant say its decending order.The order can be random also!!
//     }

// }

// void explainmultiMap(){
//     multimap<int,char> mpp;

//     mpp.insert({1,'a'});
//     mpp.insert({2,'b'});
//     mpp.insert({1,'c'});
//     mpp.insert({1,'d'});

//     //Finding out the range of the Element in the multimap

//     auto it  = mpp.equal_range(1);
//     for(auto i = it.first ; i!=it.second;i++){
//         cout << (*i).first << " -> " << (*i).second<<endl;
//     }

// }

// void explainSort(){
//     int arr[4]={1,10,5,8};
//     sort(arr,arr+4);
//     for(int i=0; i <4 ;i++){
//         cout << arr[i] << " ";
//     }
// }

// void explainAccumulate(){// Calculates the sum of the array .If we want to add some value to sum of array we can do that too!

//     int arr[] ={12,67,32,4};
//     int sum=5;
//     cout << accumulate(arr,arr+4,sum);
// }

// void explainCount(){
//     int arr[] ={12,67,12,4};
//     int num =12;
//     cout << count(arr,arr+4,num);
// }

// void explainFind(){
//     int arr[] ={12,67,32,4};
//     auto it = find(arr,arr+4,133);
//     cout << *it;
//     if(it == arr + 4){

//         cout << "Element not Found!!";
        
//     }
// }

// void explainNextPermutation(){
//     string str = "bca";
//     do {
//         cout << str <<endl;
//     }while(next_permutation(str.begin(),str.end()));
// }

// void explainPreviousPermutation(){
//     string str = "bca";
//     do{
//         cout << str << endl;
//     }while(prev_permutation(str.begin(),str.begin()+3));
// }

// void explainMaxElement(){
//     int arr[]={12,45,32,23};
//     auto it = max_element(arr,arr+4);
//     cout << *it <<endl;
// }

// void explainReverse(){
//     int arr[]={12,45,32,23};

//     reverse(arr,arr+4);
//     for(int i=0;i<4;i++){
//         cout << arr[i]<< " ";
//     }
// }



int main()
{

    

    return 0;
}