#include<iostream>
using namespace std;
int main(){
    // question 1


    // for (int i = 0; i <= 5; i++)
    // {
    //     cout<<i<<" ";
    //     i++;
    // }
    
    // question2

    // for (int i = 0; i <= 5; i--)
    //  {
    //      cout<<i<<" ";
    //      i++;
    // }

// output  infinite loop is 0

// question3

// for (int i = 0; i <= 15; i+=2){
//     cout<<i<<" ";
//     if(i&1){
//         continue;
//     }
//     i++;
// }


// }

// output 0 2 4 6 8 10 12 14


// question4

//  for (int i = 0; i <= 5; i++){
//     for (int j = 0; j <=5; i++)
//     {
//         cout<<i<<" "<<j<<endl;
        
//     }
    
// }
// }

// output infinite loop

// question5

 for (int i = 0; i <= 5; i++){
     for (int j = 0; j <=5; j++){
        if(i==10){
            break;
        }
        cout<<i<<" "<<j<<endl;
     }
 }
}
