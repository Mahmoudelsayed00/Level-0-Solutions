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
  
 string s , s2;   cin >> s ;
  for(int i = 0 ; i < s.size() ; i++){
      if ( islower(s[i])){
        s[i] = toupper(s[i]);
        cout << s[i];
     }
 
      else if (isupper(s[i])){
         s[i] = tolower(s[i]);
         cout << s[i];
     }
      else
        cout << " " ;
}


  return 0 ;
}
