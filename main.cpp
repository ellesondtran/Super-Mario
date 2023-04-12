//Elleson Tran
//Roberts
//Super Mario Climby Steps

#include <iostream>

using namespace std;


//prints the actual bricks
void placeBricks(int num, char brick){
  for (int x = 0; x < num; x++){
    cout<<brick;
  }
}

//prints the left side of a pyramid
void leftPyramid(int height){
  int spaces = height - 1;
  for(int x = 1; x <= height; x++){
    for(int x = 1; x <= spaces; x++){
    cout<<" ";
  }
    spaces = spaces - 1;
    placeBricks(x, '#');
    cout<<endl;
  }
}

//prints the right side of a pyramid
void rightPyramid(int height){
  for(int x = 1; x <= height; x++){
    placeBricks(x, '#');
    cout<<endl;
  }
}

//prints both sides of a pyramid
void oneOne(int height){
  int spaces = height - 1;
  for(int x = 1; x <= height; x++){
    for(int x = 1; x <= spaces; x++){
    cout<<" ";
  }
  spaces = spaces - 1;
  placeBricks(x, '#');
  cout<<" ";
  placeBricks(x, '#');
  cout<<endl;
  }
}



int main() {
  int user;
  cout<<"1) left pyramid"<<endl<<"2) right pyramid"<<endl<<"3) Level 1-1 pyramid"<<endl<<"4) Quit"<<endl;
  cin>>user;

  while (user != 4){
    if(user == 1){//left pyramid
      int userHeight;
      cout<<"Height:";
      cin>>userHeight;
      leftPyramid(userHeight);
      cout<<endl;
    }
    if(user == 2){//right pyramid
      int userHeight;
      cout<<"Height:";
      cin>>userHeight;
      rightPyramid(userHeight);
      cout<<endl;
    }
    if(user == 3){//1-1 pyramid
      int userHeight;
      cout<<"Height:";
      cin>>userHeight;
      oneOne(userHeight);
      cout<<endl;
    }
    cout<<endl<<"1) left pyramid"<<endl<<"2) right pyramid"<<endl<<"3) Level 1-1 pyramid"<<endl<<"4) Quit"<<endl;
    cin>>user;
  }


  if (user == 4){
    cout<<"Bye!";
  }
}
