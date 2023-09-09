# <a> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1200px-C_Programming_Language.svg.png" alt="C logo" width=3% heigth=3% ></img></a> Pointers, arrays and strings - the abc of c

- [x] What are pointers and how to use them.
- [x] What are arrays and how to use them.
- [x] What are the differences between pointers and arrays.
- [x] How to use strings and how to manipulate them.
- [x] Scope of variables.


<div>
	
</div>

## Pointers
<section id="pointers">

<div align="center">
<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/How-Pointer-Works-In-C.png"</img>
</div>

<br></br>

***¿What are the pointers and why are they so useful?***

pointers are very useful, some c programming tasks are more easily performed with pointers, such as dynamic memory allocation that cannot be performed without pointers.

pointers have many functionalities that help us. but some of the most incredible ones are that we can manipulate a variable from anywhere in the coding. 
every variable is in memory and has a memory address where it is located. when we work with different functions, when we pass variables, we pass a copy of it, and when the function ends, this copy is deleted. this would not happen with pointers, since we touch the variable in a pure way, so the change will be reflected in the rest of the code where be the it.

char -> 1 byte
int -> 4 bytes
float -> 4 bytes


***Things to consider:***

```
 type *var_name;
```

1. The * indicates that the variable is a pointer pointing to a type. The variable it will point to must be of the same type.

2. The value of var will be a memory address holding a value of type var_type.

</section>

<br></br>

<div>

</div>




## Arrays

```
type var_name[number of elements];
```

***¿What are the arrays and why are they so useful?***

It is a set of variables of the same type, where each element is stored consecutively in memory, differentiating Arrays from strings. They are used to avoid having to declare many variables and have them all in the same place.

***Important details:***

1. C supports multidimensional arrays, the simplest of which is two-dimensional.

2. C allows a function to return an array.

3. You can pass to the function a pointer to an array by specifying the name of the array without an index.

4. You can generate a pointer to the first element of an array by simply specifying the name of the array.





