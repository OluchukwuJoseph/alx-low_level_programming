In this Directory, We will look at how we can allocate memory dynamically using Malloc Function and deallocate memory using Free Function.

We have 2 Kind of memory allocation, namely:
- Static Memory Allocation
- Dynamic Memory Allocation

- Static memory allocation is also known as automatic memory allocation. This memory allocation is done at compile time when you specify the amount of memory you need when writing your program.
E.g
   int array[5];

- Dynamic memory allocaton is done at runtime and allows you to allocate memory based on your program needs during execution.
E.g
  int *array;

  array = malloc(size_t size);
