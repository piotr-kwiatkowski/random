#include <iostream>
#include <cstdint>

typedef struct sampleStruct
{
  uint8_t val;
  
  sampleStruct(uint8_t a_val);
  struct sampleStruct* prev;
  struct sampleStruct* next;
} Struct;

Struct::sampleStruct(uint8_t a_val)
{
  val = a_val;
}

int main()
{
  Struct marian(65);
  std::cout << "struct value: " << marian.val << std::endl;



  return 0;
}




