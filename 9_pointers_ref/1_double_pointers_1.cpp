#include <iostream>

int main() {
    int val = 10;          // Declares and initializes an integer variable named 'val' with the value 10
    int *ptr = &val;       // Declares and initializes a pointer variable named 'ptr' with the address of 'val'
    
    std::cout << "val: " << val << ", *ptr: " << *ptr << std::endl;  // Output: val: 10, *ptr: 10
    
    *ptr = 20;             // Changes the value of 'val' indirectly through the pointer 'ptr'
    std::cout << "val: " << val << ", *ptr: " << *ptr << std::endl;  // Output: val: 20, *ptr: 20
    
    int **ptrs = &ptr;     // Declares and initializes a pointer-to-pointer variable named 'ptrs' with the address of 'ptr'
    **ptrs = 30;           // Changes the value of 'val' indirectly through the double pointer 'ptrs'
    std::cout << "val: " << val << ", *ptr: " << *ptr << ", **ptrs: " << **ptrs << std::endl;  // Output: val: 30, *ptr: 30, **ptrs: 30
    
    return 0;
}

// how the above code works is first 1.) *ptr=&val, this line ptr stores the address of the val, next *ptr =20, here we are changing 
// the value of val to 20. now next we are 3.) **ptrs=&ptr, so this is a pointer pointing to a pointer. that is its type.
// **ptrs=30, (*(*(ptrs))-->(*(*(&ptr)))-->(*(&val))-->val, so now the val will be changed to ==30.

/*
Let's break down the code step by step:

1. `int var = 10;`: This line declares an integer variable `var` and initializes it with the value `10`.

2. `int *ptr = &var;`: Here, a pointer variable `ptr` of type `int*` is declared and initialized with the address of the variable 
`var`. So, `ptr` points to the memory location where `var` is stored.

3. `*ptr = 20;`: This line assigns the value `20` to the memory location pointed to by `ptr`. Since `ptr` points to `var`, this 
line effectively changes the value of `var` to `20`.

4. `int **ptr = &ptr;`: Now, `ptr` is declared as a pointer to a pointer to an integer (`int**`). It is initialized with the 
address of the pointer `ptr` itself. So, `ptr` now points to the memory location where `ptr` is stored.

5. `**ptr = 30;`: Here, `**ptr` dereferences `ptr` twice. Since `ptr` points to `ptr`, the first dereference gets the value of 
`ptr`, which is the address of `var`. The second dereference then accesses the value stored at that address, which is `var`. 
Therefore, `**ptr = 30;` assigns the value `30` to `var`.

So, after executing all these lines:

- The value of `var` becomes `30`.
- `ptr` points to the memory location where `var` is stored.
- `*ptr` contains the value of `var` (which is `30`).
- `**ptr` also contains the value of `var` (which is `30`).
*/