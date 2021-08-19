# Lab 04 - NOT FINALIZED

## Lab Procedure

**For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.  
`ssh` in to your AWS environment. If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

1. Go to the folder in which you cloned your Git repository for this course.
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/` depending on your setup
2. Create a directory called `Lab04`
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab04` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab04` depending on your setup
3. In this directory, create a file called `README.md`
4. This `README.md` file is where you will put your answers to this lab. I recommend creating two connections to your Linux AWS so you can keep the `README.md` file open while you expirement with the lab.
   - At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

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

1. In your `Lab04` folder, create a folder called `scripts`. Inside that folder, create two scripts, one named `marco` and one named `polo`.
2. For now, have `marco` and `polo` print a statment to standard output when they are run - `This is from marco` and `This is from polo` respectively.
3. Add the folder these scripts are located in to your `PATH`. (2 pts)
- First use the `export` command in you terminal to test you have properly added to the `PATH`. Write this command in your lab notes.
    - If you really mess this up, log out (`exit`) your AWS Linux connection and `ssh` back in.  You can refer to [here](PATH-backup) to verify it looks how it used to.
- Test that `marco` and `polo` can now be run in any directory.
- Add your working `export` command to your home directory's `.profile`.  
    - If you really mess up, there is a backup `.profile` file [here](.profile-backup).  You can copy and paste the contents.

4. Modify `marco` so that when it is run, it should save the current working directory in a file so that `polo` can reference it. (1 pt)
  - Hint: If `marco` can be ran in any directory and `polo` can be run in any directory, should the path to the file be relative or absolute?
5. Modify `polo` so that when it is run, it echos the command the user needs to go to the directory `marco` was called in.

## Part 3: The Git Part (1 pt)

1. Add a usage guide for `marco` and `polo` to your lab notes.
2. Use `git` commands to `add`, `commit` and `push` the `Lab04` folder to GitHub.

## Extra Credit (1 pt):

For the `marco` script, when `marco` is run it should check if a path has already been "saved" and ask if the user would like to update the path. Don't forget to `commit` and `push` your updates for grading.

- [Hint](https://www.cyberciti.biz/faq/linux-unix-script-check-if-file-empty-or-not/)


## Submission

In your GitHub repository, select the green `Code` button then select `Download ZIP`. Upload this zip file to the Pilot Dropbox.

In the `Comment` area in the Pilot Dropbox, copy URL / link to the repository corresponding to the project your are submitting.

### Credits:

Exercise based on https://missing.csail.mit.edu/2020/shell-tools/
