//1-handle interrupt signal like (ctrl+c)
#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <signal.h>

// Define the function to be called when ctrl-c (SIGINT) is sent to process
void signal_callback_handler(int signum) {
   std::cout << "Caught signal " << signum << std::endl;
   // Terminate program
   exit(signum);
}
int main(){
   // Register signal and signal handler
   signal(SIGINT, signal_callback_handler);
   while(true){
      std::cout << "Program processing..." << std::endl;
      sleep(1);
   }
   return EXIT_SUCCESS;
}