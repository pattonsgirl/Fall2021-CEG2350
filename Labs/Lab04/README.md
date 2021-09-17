# Lab 04 - NOT FINALIZED

- [Lab Procedure](#Lab-Procedure)
- [Part 1 - Aliases](#Part-1---Aliases)
- [Part 2 - IO Redirection](#Part-2---IO-Redirection)
- [Part 3 - Intro to Scripts](#Part-3---Intro-to-Scripts)
- [Submission](#Submission)
- [Rubric](#Rubric)

## Lab Procedure

In your terminal, head to your repository (the folder named `ceg2350-yourgithubusername).

Create a new directory, `Lab04`

This lab will have you creating input files, scripts, and output files.  All of your work should be found here.

Same questions will need you to write anwers in `Lab04.md` the [LabTemplate.md is here](LabTemplate.md).
   - [Raw version of LabTemplate.md](https://raw.githubusercontent.com/pattonsgirl/Fall2021-CEG2350/main/Labs/Lab04/LabTemplate.md)

For each part below, you will be asked to do an action or answer a question.  The actions are going to be commands - you will write the command you used as "answers" to the action requested.  You are allowed to use multiple commands to solve an action.  Just write down all that were needed to complete.  Check with the TAs if you need clarification.

If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later. 

It is expected that all parts are done on your AWS instance (the thing you `ssh` into).

## Part 1: Regular Expressions (5 pts)

1. On your Linux AWS system, use the package manager `apt` to install a package named `wamerican`. Write the command you used in your lab notes.
2. Verify `/usr/share/dict/words` exists. If it does not, see if `/usr/dict/words` exists.  Write which one is correct in your lab notes.
3. For the `grep` command, describe what the `-c`, `-E` and `-i` options do. (1 pt)
  * Note, for the exercises below, you may use either `egrep` or `grep -E`
4. For each below, write the `grep` command you used as well as the answer.

- How many words in the `words` file start with a vowel (uppercase OR lowercase)? (1 pt)
- How many words in the `words` file have the word `cat` inside of the word? (1 pt)
  - concatenate, for example, should be a match
- How many words in the `words` file have a non-alphanumeric character in the word? (1 pt)
  - ' , e with a hat are examples of non-alphanumeric characters
- How many words in the `words` file have at least one letter `m` in the word? (1 pt)  
  **Resources**
- [RegEx Cheatsheet](http://web.mit.edu/hackl/www/lab/turkshop/slides/regex-cheatsheet.pdf)

## Part 2: Scripting, Paths, and Arguments, Oh My! (4 pts)


- Add your working `export` command to your home directory's `.profile`.  
    - If you really mess up, there is a backup `.profile` file [here](.profile-backup).  You can copy and paste the contents.

## Part 3: The Git Part (1 pt)

1. Add a usage guide for `marco` and `polo` to your lab notes.
2. Use `git` commands to `add`, `commit` and `push` the `Lab04` folder to GitHub.

## Extra Credit (1 pt):




## Submission

- In the Pilot Dropbox, paste the URL to the `Lab04` folder in your GitHub repo
    - URL should look like: https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME/tree/main/Lab04

## Rubric

