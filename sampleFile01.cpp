#include <iostream>
#include <cstdint>

typedef struct sampleStruct
{
  uint16_t val;
  
  sampleStruct();
  sampleStruct(uint16_t a_val);
  struct sampleStruct* prev;
  struct sampleStruct* next;
} Struct;

Struct::sampleStruct()
{
  val = null;
  std::cout << "value not assigned\n";
}

Struct::sampleStruct(uint16_t a_val)
{
  val = a_val;
  std::cout << "value assigned\n";
}

int main()
{
  Struct marian(65);
  std::cout << "struct value: " << marian.val << std::endl;



  return 0;
}




