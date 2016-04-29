#include  "LinkedList.h"
#include <iostream>
#include <vector>
#include <string>

void printvec(std::vector<int> test_vec)
{
  std::cout << "nope its { " ;

  for (int i = 0; i < test_vec.size(); i++) {
    std::cout << test_vec.at(i)<< ",";
  }
  std::cout << "}" <<std::endl;
  return;

}

int main() {


  LinkedList<int> test;


  std::cout << "Test 1 does isempty() work " << std::endl;

  if(test.isEmpty()){
    std::cout << "the list is empty " << std::endl;

  }else
  {
      std::cout << "nope isEmpty() doesn't work and might be a BuG \n " << std::endl;






  }


  std::cout << "Test 2 does the size of the empty list equal zero " << std::endl;

  if(test.size()==0){
    std::cout << "the size is zero " << std::endl;

  }else
  {
      std::cout << "nope the size is: "<< test.size() << std::endl;


  }

  std::cout<<"Test 3:  so our list has a size of one lets try to remove fromfront"<<std::endl;


  if(test.removeFront()){
    std::cout << "alright we removed the element " << std::endl;

  }else
  {
      std::cout << "try removeback" << test.size()<< std::endl;

      if(test.removeBack()){
        std::cout << "remove from front doesn't work" << std::endl;

      }else
      {
          std::cout << "\nBUG FOUND size() return m_size+1 when construsted" << std::endl;


      }



  }

  std::cout<<"Test 4: lets added a 4 and a 3 to the front "<<std::endl;

  test.addFront(4);
  test.addFront(3);



if(test.size()==3){

  std::cout << "the increase by two" << std::endl;


}else{


  std::cout << "  size didn't change now : "<< test.size() << std::endl;
}




std::vector<int> try_vec= {3,4};

std::vector<int> test_vec= test.toVector();

std::cout<<"Test 4b: lets check that  its equal to the vector {3,4} now"<<std::endl;




if(test_vec==try_vec)
{
  std::cout << "Yes it is so addFront() works " << std::endl;



}
else
{
  printvec(test_vec);

}

std::cout<<"Test 5: lets check removeBack()"<<std::endl;


if (test.removeBack()) {
  if (test.size()==2) {
    std::cout << "subtracted a size correctly" << std::endl;
  }
  else {
    std::cout << "  size didn't change now : "<< test.size() << std::endl;

  }
  test_vec=test.toVector();
  try_vec={3};

  if(test_vec==try_vec)
  {
    std::cout << "Yes it is so removeBack() works " << std::endl;



  }
  else
  {
    printvec(test_vec);

  }


}
else {
  std::cout << "remove from back doesn't work " << std::endl;
}



std::cout<<"Test 6: lets check removeFront()"<<std::endl;

test.addFront(17);


if (test.removeFront()) {
  if (test.size()==2) {
    std::cout << "subtracted a size correctly" << std::endl;
  }
  else {
    std::cout << "  size didn't change now : "<< test.size() << std::endl;

  }
  test_vec=test.toVector();
  try_vec={3};

  if(test_vec==try_vec)
  {
    std::cout << "Yes it is so removeFront() works " << std::endl;



  }
  else
  {
    printvec(test_vec);
    try_vec={17};
    if (test_vec==try_vec) {
      std::cout << "\nBUG FOUND removeFront() does the same thing as removeBack()" << std::endl;
    }

  }


}
else {
  std::cout << "remove fromFront doesn't work " << std::endl;
}
test.removeBack();

std::cout<<"Test 7: lets added a 2 and 7 to the back after removing all elements from the list "<<std::endl;

test.addBack(2);
test.addBack(7);

if(test.size()==3){

std::cout << "size correctly added " << std::endl;


}else{


std::cout << "  size didn't change now : "<< test.size() << std::endl;
}

try_vec={2,7};
test_vec=test.toVector();


if(test_vec==try_vec)
{
  std::cout << "Yes it is so addBack() works " << std::endl;



}
else
{
  printvec(test_vec);
  try_vec={2,2};
  if (test_vec==try_vec) {
    std::cout << "\nBUG FOUND addBack() will add the first element in the array to the back instead requested value" << std::endl;
  }

}

std::cout << "Test 8: the hunt for the fourth bug" << std::endl;

test.removeBack();
test.removeBack();


std::cout<< " cleared list, adding 1 2 3  to our 'queue' \n";

test.addFront(3);
test.addFront(2);
test.addFront(1);
test_vec=test.toVector();


std::cout << "Test 8a: search for 2" << std::endl;


if (test.search(2)) {
  std::cout << "search found it "<< test.size() << std::endl;
}
else {
  printvec(test_vec);
}

std::cout << "Test 8b: search for 4" << std::endl;


if (!test.search(4)) {
  std::cout << "search didn't find  it " << std::endl;
}
else {
  printvec(test_vec);
}

test.addFront(1);

std::cout << "Test 8c: search for a number thats in the array twice" << std::endl;

if (test.search(1)) {
  std::cout << "search found it " << std::endl;
}
else {
  test_vec=test.toVector();
  printvec(test_vec);
}

std::cout << "Test 8d: search for a number thats is no longer in" << std::endl;
test.removeFront();


if (!test.search(3)) {
  std::cout << "search works " <<test.size() << std::endl;


}
























}
