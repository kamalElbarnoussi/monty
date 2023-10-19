![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)
  > monty 

## Intro 
This is a team project on stacks and queues 

## Learning objectives 
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/) without the help of Google the following concepts. 

* [X] What do LIFO and FIFO mean
* [ ] What is a stack, and when to use it
* [ ] What is a queue, and when to use it
* [ ] What are the common implementations of stacks and queues
* [ ] What are the most common use cases of stacks and queues
* [ ] What is the proper way to use global variables

### Compilation and output
- The code will be compiled with the following flags 

~~~
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty 
~~~ 

- Any output must be printed on stdout
- Any error message must be printed on stderr

## The monty Language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

#### Monty byte code files 

Files containing Monty byte codes usually have the ```.m``` extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument
