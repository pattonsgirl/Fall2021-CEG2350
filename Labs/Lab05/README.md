# Lab 05 - NOT FINALIZED

## Lab Procedure

**For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.  
`ssh` in to your AWS environment. If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

1. Go to the folder in which you cloned your Git repository for this course.
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/` depending on your setup
2. Create a directory called `Lab05`
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab05` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab05` depending on your setup
3. In this directory, create a file called `README.md`
4. This `README.md` file is where you will put your answers to this lab. I recommend creating two connections to your Linux AWS so you can keep the `README.md` file open while you expirement with the lab.
   - At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

## Part 1: Write Source Code (2 pts)

1. You may choose _Java_ or _C_ or _C++_ to do the following:

- Write source code that prompts the user to enter text / a string from standard input, then outputs the same string back to standard out. Include your code in your lab write up.
  - I recommend naming the source code file `repeat` with the appropriate language extension (ie. `repeat.java`, `repeat.c`, `repeat.cpp`).
  - Code integrity does not matter - you may work together or use things found on the internet or textbooks.
  - Python only coders - you will be happiest in C. Go about halfway through [this guide](https://www.geeksforgeeks.org/strings-in-c-2/) for starter code. You'll need to add another print statement before the scan statement to prompt the user to enter a string.

## Part 2: Compile Source Code (4 pts)

1. Find the location of the C compiler, `gcc`. Write the command to find out which version of `gcc` is running. (1 pt)  
   **Useful commands: `whereis, which, man`**
2. Find the location of the Java compiler, `javac`. Write the command to find out which version of `javac` is running. (1 pt)  
   **Useful commands: `whereis, which, man`**
3. Compile your code using the corresponding compiler. Write the command you used to compile your source code. (1 pt)
4. Run your program. Write the command you used to run your compiled program. (1 pt)

**Resources**

- [Compile a Java Program](https://beginnersbook.com/2013/05/first-java-program/)
- [Compile a C/C++ Program](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)

## Part 3: Make that Makefile (3 pts)

1. Create a file called `Makefile`.
2. Write contents in `Makefile` so that in the shell the following commands perform the following actions:
   - `make` will compile the program and create an executable version if the source code file exists (1 pt)
   - `make run` will execute the program if the compiled program exists (1 pt)
   - `make clean` will delete the compiled program (1 pt)

**Resources**

- [Sample Java Makefile in this folder](./Makefile-Java)
- [Sample C/C++ Makefile in the folder](./Makefile-C)
- [Makefile in C](https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html#C)
- [Makefile in Java](https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html#java)

## Part 4: The Git Part (1 pt)

1. In your `README.md` file, add details on how to run your program manually & how to run your program with the `make` command. 
2. Use `git` commands to `add`, `commit` and `push` the `Lab05` folder to GitHub.

## Extra Credit (2 pt):

- Create an additional source code file that the original uses as a dependency. Perhaps your main code file calls on a function that is detailed in the other file (function can do a simple action, like print a message).
  - You may use an old / existing multifile project (again, just need to require compilation)
- Modify your `Makefile` to compile the original file & its new dependency. Note that your `Makefile` should have an updated version of the pre requisites to compile the program.
- Don't forget to `commit` and `push` your updates for grading.

## Submission

In your GitHub repository, select the green `Code` button then select `Download ZIP`. Upload this zip file to the Pilot Dropbox.

In the `Comment` area in the Pilot Dropbox, copy URL / link to the repository corresponding to the project your are submitting.
