#include <iostream>
 using namespace std ;
   int main () {
    cout << "Input your score to see your grade" << endl ;
       int examSCORE ;
       cin >> examSCORE ;
      char grade ;
      char kofi =65 ,ama = 66 , kojo = 67 , yaw=68 ,awo =70 ;
        if (examSCORE >=80){
       grade=kofi ;
        }
         else if(examSCORE >70){
            grade=ama ;
         }
         else if (examSCORE >=60){
        grade=kojo ;
         }
         else if (examSCORE >=50){
            grade=yaw ;
         }
         else if (examSCORE>=40)
         {grade =awo ;}
         cout<<"You had \t" << grade <<"\tin the examination" ;
    return 0   ;
   }
