#include<iostream>
#include<vector>
#include <algorithm>
#include <string>

using namespace std;
// Function for outputs
void Movie_O(string title,int year,double price){
  cout<<"The title of the movie is "<<title<<endl;
  cout<<"The year of release is "<<year<<endl;
  cout<<"The price of the movie nowadays is "<<price+1.0<<endl;
  // This is to check if it worked
  return"\n\nThis worked!!!";
}
// Function for inputs
void Movie_I(string title,int year,double price){
  cout<<"What is the title of the movie?: "<<endl;
  cin>>title;
  cout<<"What is the year of release?: "<<endl;
  cin>>year;
  cout<<"What is the price of the movie?: "<<endl;
  cin>>price;
  // After running this function, the values of title, year, and price will be updated
  // in the main program.
  return title,year,price;
}
// Main Program
int main(){
  string M_title;
  int M_year;
  double M_price;
  cout<<"Welcome to the Movie Database!"<<endl;
  cout<<"How many movies do you want to enter?: "<<endl;
  int n;
  cin>>n;
  // Loop for the number of movies inputted
  for(int i=n;i>0;i--){
    Movie_I(M_title,M_year,M_price);
    M_title = title;
    M_year = year;
    M_price = price;
    cout<<endl;
    Movie_O(M_title,M_year,M_price);
    cout<<endl;
  }
  cout<<"Thank you for using the Movie Database!"<<endl;
  cout<<"Have a nice day!"<<endl;
  // Terminates the program
  return 0;
}