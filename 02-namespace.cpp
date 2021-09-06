#include <iostream>
#include "file-01.cpp"
#include "file-02.cpp"

// greet( ) function is imported into our file
// from both file-01 and file-02

int main() {
    // namespace can be used to resolve conflicts
    file1::greet();
    file2::greet();
    // namespace are generally used to group similar things into one unit!

    // std => for standard items
    // chrono => contains things related to time!
    return 0;
}