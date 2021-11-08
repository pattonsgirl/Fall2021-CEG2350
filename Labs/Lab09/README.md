# Lab 09 - NOT FINALIZED

- [Lab Procedure](#Lab-Procedure)
- [Part 1 - To Infinity](#Part-1---To-Infinity)
- [Submission](#Submission)
- [Rubric](#Rubric)

## Lab Procedure

In your terminal, head to your repository (the folder named `ceg2350-yourgithubusername).

Create a new directory, `Lab09`

Create a file named `Lab09.md` [based on the template](LabTemplate.md).

- [Raw version of LabTemplate.md](https://raw.githubusercontent.com/pattonsgirl/Fall2021-CEG2350/main/Labs/Lab09/LabTemplate.md)

For each part below, you will be asked to do an action or answer a question. The actions are going to be commands - you will write the command you used as "answers" to the action requested. You are allowed to use multiple commands to solve an action. Just write down all that were needed to complete. Check with the TAs if you need clarification.

If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.

## Part 1 - Write Code

Use Java or C or C++ to write an echo program. Name your source code file `repeat` with the appropraite source code extention: `repeat.java`, `repeat.c`, `repeat.cpp`. The program should be the following:

- prompt the user to enter text
- capture text from standard input
- output the captured text back to standard output

- **Additional notes**
  - Code integrity does not matter - you may work together or use things found on the internet or textbooks. Practice citing your sources using comments in your code.
  - You are welcome to use an IDE you are familiar with to write test and debug your code, but you'll need to get the source code to a file on your AWS instance for the remainder of the lab.
  - There is some useful C starter code in [this guide](https://www.geeksforgeeks.org/strings-in-c-2/) about halfway down.
    - You'll need to add another print statement before the scan statement to prompt the user to enter a string.

## Part 2 - Compile a Program

1. Identify the compiler for your source code and well as its version and installed location.
2. Compile your source code using the compiler.
3. Run your compiled code.

## Part 3 - Create a Makefile

1. Create a file called `Makefile`.
2. Write targets in your `Makefile` such that the following terminal commands do the corresponding actions:
   - `make` - if the source code file exists, will compile the program
   - `make run` - if the compiled program exists, will execute / run the program
   - `make clean` - if the compiled program exists, will delete the compiled program

## Part 4 - Solve a Conflict

## Extra Credit - G@M3R

Install ninvader from the source, [ninvaders-0.1.1.tar.gz](ninvaders-0.1.1.tar.gz). For credit, you need to detail how you installed ninvaders succesfully by including at least the details specified below including which commands you used.

- **Useful Commands: `wget`, `tar`, `apt`, `make`**

1. Download `ninvaders-0.1.1.tar.gz` to your home directory.
   - URL: `https://github.com/pattonsgirl/Fall2021-CEG2350/raw/main/Labs/Lab09/ninvaders-0.1.1.tar.gz`
2. Extract ninvaders to your home directory.
3. Install / check installation of `gcc` and `ncurses`.
4. Install ninvaders

## Submission

1. Verify that your GitHub repo has a `Lab09` folder with at minimum:

   - `repeat.java` OR `repeat.c` OR `repeat.cpp`
   - your compiled code
   - `Makefile`
   - `Lab09.md`

2. In the Pilot Dropbox, paste the URL to the `Lab09` folder in your GitHub repo
   - URL should look like: https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME/tree/main/Lab09

## Rubric

- Part 1
