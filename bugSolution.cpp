int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) { 
    *ptr = 10; // Dereference only if ptr is not null
  } else {
    std::cerr << "Error: Null pointer dereference avoided." << std::endl;
  }
  return 0;
} 