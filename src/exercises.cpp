
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
    int i, u=0, n;
    string c, d;
    n = s1.size();
    for (int i = 0; i<s1.size(); i++){
        c = s1[i];
        if (!(c== " " || c=="\n")){
            d = d + c;
        }
    }
    if (d==s1){
        cout<<d.size()<<endl;
    }
    else{
       for (int i = 0; i<s1.size(); i++){
           c = s1[i];
           u++;
           if (c==" " || c=="\n"){
               cout<<u-1<<endl;
           }
           else if (u==n){
               cout<<u<<endl;
           }
        }
    }
}

void exercise_2(string s1) {
  int i, u=0, n;
    string c, d, d2="[";
    n = s1.size();
    for (int i = 0; i<s1.size(); i++){
        c = s1[i];
        if (!(c== " " || c=="\n")){
            d = d + c;
        }
    }
    if (d==s1){
        cout<<"["+d+"]"<<endl;
    }
    else{
       for (int i = 0; i<s1.size(); i++){
           c = s1[i];
           u++;
           if (!(c==" " || c=="\n")){
               d2 = d2 + c;
           }
           else if (c==" "){
               d2 = d2 + "]\n" + "[";
           }
        }
        cout<<d2 + "]\n";
    }
}

void exercise_3(string s) {
  int i, w=0;
  string c, c2, d, d2, u;
  for (int i=0; i<s.size(); i++){
      c2 = s[i];
      if (c==" "){
          d2 = d2;
      }
      else{
          d2 = d2 + c2;
      }
  }
  for (int i=0; i<d2.size(); i++){
      c = d2[i];
      if (c=="1"){
          u= "Om-nom-nom :P\n";
          d = d + u;
          w++;
          if (w==10){
              break;
          }
      }
      else if (c=="0"){
          u = "No cake :(\n";
          d = d + u;
          break;
      }
  }
  cout<<d;
}

void exercise_4(int n) {
  int factorial = 1;
    cin>>n;
    if (n==0){
      cout<<"1"<<endl;
    }
    else if (n>=1){
        if (n<17){
            for(int i=1; i<=n; i++){
                factorial=factorial*i;
            }
            cout<<factorial<<endl;
        }
        else{
            cout<<"El numero es muy grande. Intentelo de nuevo"<<endl;
        }
    }
    else{
        cout<<"El numero es negativo. Intentelo de nuevo"<<endl;
    }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
    int suma=0;
    int r;
    if (n>=0){
        while(n!=0){
          suma = suma + n%10;
          n = n/10;
        }
      r = suma;
    }
    else{
      r = 0;
    }
  return r;
}

void exercise_7(int n) {
  double suma=0;
  if (n==0){
    cout<<"0"<<endl;
  }
  else{
    for (int i=1; i<=n; i++){
        suma = suma + (pow(-1, i+1))/i;
    }
    cout<<suma<<endl;
  }
}

void exercise_8(string s) {
  int i;
  string c, d, d2;
  for (int i=0; i<s.size(); i++){
      c = s[i];
      if (c==" "){
          d = d;
      }
      else{
      d = d + c;
      }
  }
  for (int i=d.size()-1; i<d.size(); i--){
      c = d[i];
      d2 = d2 + c;
  }
  if (d==d2){
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
}

void exercise_9(string s) {
  int i, u;
  string c, d;
  for (int i=0; i<s.size(); i++){
      c = s[i];
      if (c=="f" || c=="F"){
          d = d + c;
      }
      else{
          d = d;
      }
  }
  if (d == "f" || d == "F"){
      cout<<"-1"<<endl;
  }
  else if (d == ""){
      cout<<"-2"<<endl;
  }
  else {
    int u = 0;
    for (int i = 0; i < s.size(); i++){
        c = s[i];
        if (c == "f" || c == "F"){
            u++; 
            if (u == 2){ 
                cout<<i<<endl;
                break; 
            }
        }
    }
  }
}

int exercise_10(int n, int n2) {
   while (n2 != 0) {
        int x = n2;
        n2 = n%n2;
        n = x;
    }
  return n;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {

}

long exercise_13(int n, int k) {
    int suma= 0;
    for (int i=1; i<=n; i++){
        suma = suma + pow(i, k);
    }
  return suma;
}

string exercise_14(int n) {
  string x, i, z, r;
  x = to_string(n);
    for (int i = x.size() - 1; i>=0; i--){
        z = z + x[i];
    }
    if (x == z){
        r = "Es palindrome";
    }
    else{
        r = "No es palindrome";
    }
  return r;
}

void exercise_15(int decimal) {
    int i;
    string x, y, z, a;
    if (decimal==0){
        cout<<"0"<<endl;
    }
    else{
        while (decimal>0){
            i = decimal%2;
            decimal = decimal/2;
            x = to_string(i);
            y = y+x;    
        }
        for (int z = y.size() - 1; z>=0; z--){
            a = a + y[z];
        }
        cout<<a<<endl;
    }    
}

void exercise_16(int divident, int divider) {
  int i=0;
  if (divider==0){
    cout<<"";
  }
  else{
    while (divident >= divider){
      divident = divident - divider;
      i++;
    }
    cout<<i<<" "<<divident<<endl;
  }
}

void exercise_17(int n) {
  int p = 2, i, u;
  string d;
    if (n<=0){
        cout<<"";
    }
    else{
        while (true){
            u = 0; 
            for (i = 2; i <= sqrt(p); i++){
                if (p%i == 0){
                    u++; 
                    break;
                }
            }
            if (u == 0){ 
                d = d + to_string(p) + " ";
                n--;
                if (n == 0){
                    break;
                }
            }
            p++;
        }
        cout<<d;
    }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}