// adele it seems it's working just fine now

#include <iostream>
#include <ctime>

void outputDisplay(int num1, int num2, int num3) {
  std::cout << std::string(15, '|') << std::endl;
  std::cout << "|| "<< num1 << " | " << num2 << " | " << num3 << " ||" <<std::endl;
  std::cout << std::string(15, '|') << std::endl;
}

// I suggest you create one single function that returns a randint 0-9; you don't
// need separate functions for the 2nd number, 3rd number, etc. This is where the
// practice of code reuse comes in; functions are perfect for code reuse.
int firstNumberPicker() {
  int num = 0;
  // srand((int)time(0));    // you only need this once, in main()
  num = rand() % 9 + 1;
  return num;
}

int secondNumberPicker() {
  int num = 0;
  // srand((int)time(0));
  for (int i=0; i<2; i++) {
    num = rand() % 9 + 1;
  }
  return num;
}

int thirdNumberPicker() {
  int num = 0;
  // srand((int)time(0));
  for (int i=0; i<3; i++) {
    num = rand() % 9 + 1;
  }
  return num;
}

int main() {
  srand(time(0));
  int num1;
  int num2;
  int num3;
  std::string choice;
  bool keepPlaying = true;

  std::cout << "Welcome to the Lottery Game!\n\n";
  do {
    num1 = firstNumberPicker();
    num2 = secondNumberPicker();
    num3 = thirdNumberPicker();
  
    outputDisplay(num1, num2, num3);

    std::cout << "Spin again? y/n\n";
    std::cin >> choice;

    if (choice == "y" || choice == "Y") {
      keepPlaying = true;
      std::cout << "Great! Let's roll again!\n\n";
    }
    else {
      keepPlaying = false;
    }
    
  
  } while (keepPlaying == true);

  std::cout << "Bye bye!";
}
