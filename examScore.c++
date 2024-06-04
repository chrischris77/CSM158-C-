#include <iostream>
using namespace std ;
  int main (){
 char examSCORE ;
 cout << "Input examination score" << endl ;
 cin >> examSCORE ;
 
 char Monday = 65, Tuesday= 66, Wednesday= 67, Thursday= 68 ,  Friday = 69 , Saturday = 70 ;

if ( examSCORE>=80){
  examSCORE=Monday ;
 }
else if (examSCORE>=70){
  examSCORE=Tuesday ;
}
else  if (examSCORE>=60){
  examSCORE=Wednesday ;
}
else if (examSCORE>=50){
  examSCORE=Thursday ;
}
 else if (examSCORE >= 40){
  examSCORE=Friday ;
}
else {
  examSCORE=Saturday ;
}
  cout<<"Your grade is: \n"<< examSCORE ;
  return 0 ;
  }