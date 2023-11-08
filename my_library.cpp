#include "pch.h"
#include <utility>
#include "my_library.h"
#include <iostream>

#include <cuda_runtime.h>
#include <opencv2/opencv.hpp>

MyLibrary::MyLibrary() {
    // Constructor
}

MyLibrary::~MyLibrary() {
    // Destructor
}

void MyLibrary::doSomething() {
    std::cout << "MyLibrary is doing something!" << std::endl;
}

//// Implement cu_function
//void cu_function() {
//    std::cout << "cu_function from MyLibrary" << std::endl;
//    // Add your CUDA code here
//}