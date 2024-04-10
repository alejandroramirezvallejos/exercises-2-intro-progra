
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
    if (s1.size()==0){
        cout<<"";
    }
    
    else{
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
    string d, s, r;
    if (n == 1) {
        d = " 1" + string("  ") + "2" + string("  ") + "3" + string("  ") + "4" + string("  ") + "5" + string("  ") + "6" + string("  ") + "7" + "\n";
        for (int i = 8; i<=k; i++){
            if (i==k){
                s = s + to_string(i) + " " + "\n";
                break;
            }
            else if ((n+i-1)%7==0){
                s = s + to_string(i) + "\n"; 
            }
            else if (i>9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                     s = s + to_string(i) + string(" "); 
                }
            }
            else if (i<9){
                if ((n+i-2)%7==0){
                    s = " " + s + to_string(i) + string("  ");
                }
                else{
                    s = s + to_string(i) + string("  "); 
                }
            }
            else if (i==9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                    s = s + to_string(i) + string(" "); 
                }
            }
        }
        r = d + s;
        cout<<r;
    }
    else if (n == 2) {
        d = " " + string("  ") + " 1" + string("  ") + "2" + string("  ") + "3" + string("  ") + "4" + string("  ") + "5" + string("  ") + "6" + "\n";
        for (int i = 7; i<=k; i++){
            if (i==k){
                s = s + to_string(i) + " " + "\n";
                break;
            }
            else if ((n+i-1)%7==0){
                s = s + to_string(i) + "\n"; 
            }
            else if (i>9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                     s = s + to_string(i) + string(" "); 
                }
            }
            else if (i<9){
                if ((n+i-2)%7==0){
                    s = " " + s + to_string(i) + string("  ");
                }
                else{
                    s = s + to_string(i) + string("  "); 
                }
            }
            else if (i==9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                    s = s + to_string(i) + string(" "); 
                }
            }
        }
        r = d + s;
        cout<<r;
    }
    else if (n == 3) {
        d = " " + string("  ") + " " + string("  ") + " 1" + string("  ") + "2" + string("  ") + "3" + string("  ") + "4" + string("  ") + "5" + "\n";
        for (int i = 6; i<=k; i++){
            if (i==k){
                s = s + to_string(i) + " " + "\n";
                break;
            }
            else if ((n+i-1)%7==0){
                s = s + to_string(i) + "\n"; 
            }
            else if (i>9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                     s = s + to_string(i) + string(" "); 
                }
            }
            else if (i<9){
                if ((n+i-2)%7==0){
                    s = " " + s + to_string(i) + string("  ");
                }
                else{
                    s = s + to_string(i) + string("  "); 
                }
            }
            else if (i==9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                    s = s + to_string(i) + string(" "); 
                }
            }
        }
        r = d + s;
        cout<<r;
    }
    else if (n == 4) {
        d = " " + string("  ") + " " + string("  ") + " " + string("  ") + " 1" + string("  ") + "2" + string("  ") + "3" + string("  ") + "4" + "\n";
        for (int i = 5; i<=k; i++){
            if (i==k){
                s = s + to_string(i) + " " + "\n";
                break;
            }
            else if ((n+i-1)%7==0){
                s = s + to_string(i) + "\n"; 
            }
            else if (i>9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                     s = s + to_string(i) + string(" "); 
                }
            }
            else if (i<9){
                if ((n+i-2)%7==0){
                    s = " " + s + to_string(i) + string("  ");
                }
                else{
                    s = s + to_string(i) + string("  "); 
                }
            }
            else if (i==9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                    s = s + to_string(i) + string(" "); 
                }
            }
        }
        r = d + s;
        cout<<r;
    }
    else if (n == 5) {
        d = " " + string("  ") + " " + string("  ") + " " + string("  ") + " " + string("  ") + " 1" + string("  ") + "2" + string("  ") + "3" + "\n";
        for (int i = 4; i<=k; i++){
            if (i==k){
                s = s + to_string(i) + " " + "\n";
                break;
            }
            else if ((n+i-1)%7==0){
                s = s + to_string(i) + "\n"; 
            }
            else if (i>9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                     s = s + to_string(i) + string(" "); 
                }
            }
            else if (i<9){
                if ((n+i-2)%7==0){
                    s = " " + s + to_string(i) + string("  ");
                }
                else{
                    s = s + to_string(i) + string("  "); 
                }
            }
            else if (i==9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                    s = s + to_string(i) + string(" "); 
                }
            }
        }
        r = d + s;
        cout<<r;
    }
    else if (n == 6) {
        d = " " + string("  ") + " " + string("  ") + " " + string("  ") + " " + string("  ") + " " + string("  ") + " 1" + string("  ") + "2" + "\n";
        for (int i = 3; i<=k; i++){
            if (i==k){
                s = s + to_string(i) + " " + "\n";
                break;
            }
            else if ((n+i-1)%7==0){
                s = s + to_string(i) + "\n"; 
            }
            else if (i>9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                     s = s + to_string(i) + string(" "); 
                }
            }
            else if (i<9){
                if ((n+i-2)%7==0){
                    s = " " + s + to_string(i) + string("  ");
                }
                else{
                    s = s + to_string(i) + string("  "); 
                }
            }
            else if (i==9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                    s = s + to_string(i) + string(" "); 
                }
            }
        }
        r = d + s;
        cout<<r;
    }
    else if (n == 7) {
        d = " " + string("  ") + " " + string("  ") + " " + string("  ") + " " + string("  ") + " " + string("  ") + " " + string("  ") + " 1" + "\n";
        for (int i = 2; i<=k; i++){
            if (i==k){
                s = s + to_string(i) + " " + "\n";
                break;
            }
            else if ((n+i-1)%7==0){
                s = s + to_string(i) + "\n"; 
            }
            else if (i>9){
                if ((n+i-2)%7==0){
                    s = s + to_string(i) + string(" ");
                }
                else{
                     s = s + to_string(i) + string(" "); 
                }
            }
            else if (i<9){
                if ((n+i-2)%7==0){
                    s = " " + s + to_string(i) + string("  ");
                }
                else{
                    s = s + to_string(i) + string("  "); 
                }
            }
            else if (i==9){
                if ((n+i-2)%7==0){
                    s = s + " " + to_string(i) + string(" ");
                }
                else{
                    s = s + to_string(i) + string(" "); 
                }
            }
        }
        r = d + s;
        cout<<r;
    }
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
    int i, c=2;
    double k = 1;
    cout<<"U0 = 1\nU1 = 1\n";
    for (int i = 1; i<10; i++){
        k = k/(i+1);
        cout<<"U"<<c<<" = "<<k<<endl;
        c++;
    }
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
    int n, k, s, a;
    string d, c;
    if (debut<=0){
        cout<<"El numero debe de ser positivo y mayor a zero"<<endl;
    }
    if (fin<debut){
        cout<<"El numero de fin no debe de ser menor al inicial"<<endl;
    }
    if (debut>0 && fin>=debut){
        for (int n=debut; n<=fin; n++){
            int k = 0;
            int s = n;
            while (s>0){
                k++;
                if (s%3 == 0){
                    s = s + 4;
                }
                else if (s%4 == 0){
                    s = s/2;
                }
                else{
                    s = s-1;
                }
            }
            c = to_string(n) + "->" + to_string(k) + "\n";
            d = d + c;
        }
        cout<<d;
    }    
}