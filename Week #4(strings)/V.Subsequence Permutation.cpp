 #include<bits/stdc++.h>

typedef long long ll ;
typedef unsigned long long ull ;
using namespace std ;

void FASTIO (){
   std::ios_base::sync_with_stdio(0);
   cin.tie(NULL); cout.tie(NULL);
   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
   #endif
}




int main(){
  FASTIO() ;

int tc ;  cin >> tc ;
   while(tc--){
      int n ;  cin >> n ;
      string s ;  cin >> s ;
      string s2 = s ;
      sort(s2.begin() , s2.end());
      int cnt = 0;
      for(int i = 0 ; i < n ; i++){
         if (s[i] != s2[i]) cnt++;
      }
    
    cout << cnt << "\n" ;
 
   }  
 

  return 0 ;
}
