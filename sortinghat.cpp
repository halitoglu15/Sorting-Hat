#include<iostream>
int main(){
  int gryffindor=0;
  int hufflepuff=0;
  int ravenclaw=0;
  int slytherin=0;
  
  int answer1;
  int answer2;
  int answer3;
  int answer4;
  int answer;
  
  std::cout<<"The Sorting Hat Quiz!\n";
  
  std::cout<<"Q1) When I'm dead, I want people to remember me as:\n";
  std::cout<<"1)The Good\n";
  std::cout<<"2)The Great\n";
  std::cout<<"3) he Wise\n";
  std::cout<<"4)The Bold\n";
  std::cout << "Enter your answer (1-4): ";
  std::cin>>answer1;
  
  if (answer1==1)
  {
     hufflepuff= hufflepuff+1;
  }
  else if (answer1==2)
  {
     slytherin= slytherin+1;
  }
  else if (answer1==3)
  {
     ravenclaw= ravenclaw+1;
  }
  else if (answer1==4)
  {
     gryffindor= gryffindor+1;
  }
  else
  {
    std::cout<<"Invalid input./n";
  } 
  
  std::cout<<"Q2) Dawn or Dusk?/n";
  std::cout<<"Q2) 1) Dawn/n";
  std::cout<<"Q2) 1) Dusk/n";
  std::cout << "Enter your answer (1-2): ";
  std::cin>>answer2;
  
  if (answer2==1)
  {
     ravenclaw= ravenclaw+1;
     gryffindor= gryffindor+1;
  }
  else if (answer2==2)
  {
     slytherin= slytherin+1;
     hufflepuff= hufflepuff+1;
  }
  else
  {
    std::cout<<"Invalid input./n";
  } 
  
  std::cout<<"Q3) Which kind of instrument most pleases your ear?\n";
  std::cout<<"1) The violin\n";
  std::cout<<"2) The trumpet\n";
  std::cout<<"3) The piano\n";
  std::cout<<"4) The drum\n";
  std::cout << "Enter your answer (1-4): ";
  std::cin>>answer3;
  
  if (answer3==1)
  {
    slytherin= slytherin+1;
     
  }
  else if (answer3==2)
  {
    hufflepuff= hufflepuff+1;  
  }
  else if (answer3==3)
  {
     ravenclaw= ravenclaw+1;
  }
  else if (answer3==4)
  {
     gryffindor= gryffindor+1;
  }
  else
  {
    std::cout<<"Invalid input./n";
  } 
 
  std::cout<<"Q3) Q4) Which road tempts you most?\n";
    std::cout<<"1) The wide, sunny grassy lane\n";
    std::cout<<"2) The narrow, dark, lantern-lit alley\n";
    std::cout<<"3) The twisting, leaf-strewn path through woods\n";
    std::cout<<"4) The cobbled street lined (ancient buildings)\n";
    std::cout << "Enter your answer (1-4): ";
    std::cin>>answer4;
  
 if (answer4==1)
  {
     hufflepuff= hufflepuff+1;
  }
  else if (answer4==2)
  {
     slytherin= slytherin+1;
  }
  else if (answer4==3)
  {
     gryffindor= gryffindor+1;  
  }
  else if (answer4==4)
  {
     ravenclaw= ravenclaw+1;
  }
  else
  {
    std::cout<<"Invalid input./n";
  } 
  
  std::cout << "\nCongrats on being sorted into... ";

  int max = 0;
  std:: string house;
  
  if (gryffindor > max) {

  max = gryffindor;
  house = "Gryffindor";

  }

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";

  }

if (ravenclaw > max) {

  max = ravenclaw;
  house = "Ravenclaw";

  }

if (slytherin > max) {

  max = slytherin;
  house = "Slytherin";

 }

std::cout << house << "!\n";
  
}