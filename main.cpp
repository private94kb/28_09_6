#include <iostream> 

using namespace std; 

int main(void) { 

    bool answer;// true or false 

    int value; 

    cout << "Enter a value: "; 

    cin >> value; 

    answer = (value>=0 && value<10)||(value*2<20 && value-2>-2)||(value-1>1 && value/2<10)||(value==111);  

    //&&- логічне і, ||- логічне або

    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl; 

  

    //тернарна операція variable ? value : value ; якщо істина, то буде перша відповідь, якщо ні, то друга
  

    return 0;
  }