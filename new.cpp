#include<bits/stdc++.h>
using namespace std;

int main(){


    // arrays
    // array<int,5>arr={1,2,3,4,5};
    // cout<<arr.front()<<endl;
    // cout<<arr.back()<<endl;
    // cout<<arr.at(4)<<endl;
    // cout<<arr.data()<<endl;



    // vector 

    // vector<int>vec;
    // vec.push_back(-9);
    // vec.push_back(1);
    // for(int i=0;i<vec.size();i++)
    //     cout<<vec[i]<<endl;

    // cout<<vec.size()<<endl;

    // vec.pop_back();//remove the last part
    // for(int i=0;i<vec.size();i++)
    //     cout<<vec[i]<<endl;

    // vec.resize(5);//increases the size and places the zeros in it
    //     for(int i=0;i<vec.size();i++)
    //         cout<<vec[i];
    // cout<<endl;

    // vec.begin();//gives the begin 
    // vec.end();//gives the end 

    // //functions used in vectors 1.push_back,pop_back,size(),resize,begin,end,clear,empty,erase,insert,reverse,sort
    // vec.erase(vec.begin()+1);
    // for(int i=0;i<vec.size();i++)
    //     cout<<vec[i]<<" " ;

    // vec.insert(vec.begin()+1,8);//first gives position and second gives values
    // for(int i=0;i<vec.size();i++)
    //     cout<<vec[i]<<" " ;
    
    // reverse(vec.begin(),vec.end());//start,end

    // sort(vec.begin(),vec.end());//start and end position
    // for(int i=0;i<vec.size();i++)
    //     cout<<vec[i]<<" " ;



    // stack contains push,pop,empty,size,top
    // stack<int>s;
    // s.push(0);
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
    // cout<<s.size()<<endl;

    // while(!s.empty()){
    //     int val=s.top();
    //     cout<<val<<" ";
    //     s.pop();
    // }



    // pairs
    // pair<int,int>p;
    // p.first=0;
    // p.second=1;
    // cout<<p.first<<" "<<p.second<<endl;

    // pair<int,pair<int,int>>pt;
    // pt.first=1;
    // pt.second.first=5;
    // pt.second.second=9;
    // cout<<pt.first<<" "<<pt.second.first<<" "<<pt.second.second<<endl;


    // vector of pairs
    // int n;
    // cin>>n;
    // vector <pair<int,int >>v;
    // for(int i=0;i<n;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     //both below statement gave same output
    //     v.push_back(make_pair(x,y));
    //     v.push_back({x,y});
    // }
    // for(int i=0;i<n;i++)
    //     cout<<v[i].first<<" "<<v[i].second<<endl;

    // list contains push_front,push_back,front,back,pop_front,pop_back,reverse,sort
    // list<int>l;
    // l.push_front(10);
    // l.push_back(20);
    // l.push_front(30);

    // list<int>:: iterator it;
    // for(it=l.begin();it!=l.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // cout<<l.front()<<endl;
    // cout<<l.back()<<endl;
    
    // l.reverse();
    // for(it=l.begin();it!=l.end();it++){
    //    cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // l.sort();
    // for(it=l.begin();it!=l.end();it++){
    //    cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // l.pop_front();
    //  for(it=l.begin();it!=l.end();it++){
    //    cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // l.pop_back();
    //  for(it=l.begin();it!=l.end();it++){
    //    cout<<*(it)<<" ";
    // }
    // cout<<endl;


    // queue contains push,pop,size,fonrt,back,empty
    // queue<int>q;
    // q.push(0);
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // cout<<q.size()<<endl;
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // cout<<q.empty()<<endl;
    // while(!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }


    // deque contains push_front,push_back,pop_front,pop_back,front,back
    // deque<int>dq;
    // dq.push_back(10);
    // dq.push_front(20);
    // dq.push_front(30);
    // dq.pop_front();
    // dq.pop_front();
    // while(!dq.empty()){
    //     cout<<dq.front()<<" ";
    //     dq.pop_front();
    // }

    // priority queue contains push,pop,top,empty,size
    // default is max heap
    // priority_queue<int>pq;//max heap
    // pq.push(1);
    // pq.push(2);
    // pq.push(3);
    // pq.push(4);
    // pq.push(5);

    // cout<<pq.size()<<endl;
    // while(!pq.empty()){
    //     int val=pq.top();
    //     cout<<val<<" ";
    //     pq.pop();
    // }
    // cout<<endl;


    // for  min heap
    // priority_queue<int,vector<int>,greater<int>>p;
    // p.push(1);
    // p.push(2);
    // p.push(3);
    // p.push(4);
    // p.push(5);
    //  while(!p.empty()){
    //     int val=p.top();
    //     cout<<val<<" ";
    //     p.pop();
    // }


    // set all numbers are in sorted order and no duplicate allowed 
    // it contains insert,find,count,erase
    // unordered set uses hasing
    // set<int>s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    

    // map contains insert,find,many more
    // map is in sorted order
    // we use set for only values but map is used to store values and keys

    // map<int,int>m;
    // m.insert({1,2});//key->1 and value is 2
    // m[3]=5;//key->3, and value->5
    // m[4]=8;
    // m[4]=8;
    // m[2]=20;
    // for(auto x:m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // auto val=m.find(4);
    // cout<<val->first<<" "<<val->second<<endl;


    // to find max element in an array
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0;i < n ; ++i) {
    //     cin>>arr[i];
    //     }
    //     int ma=*max_element(arr,arr+n);
    //     cout<<ma<<endl;

    // next permutation
    // string s="abcd";
    // do{
    //     cout<<s<<endl;
    // }while(next_permutation(s.begin(),s.end()));
    

    // it counts the number of 1 in binary form
    // int n;
    // cin>>n;
    // int ans=__builtin_popcount(n);
    // cout<<ans<<endl;

    // binary search gives if the element is present or not and must be in sorted order
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++) cin>>a[i];

    // if(binary_search(a,a+n,10)){
    //     cout<<"present"<<endl;
    // }
    // else cout<<"absent"<<endl;

    


    return 0;
}
// give me a pair program in c++ with 3 inputs?