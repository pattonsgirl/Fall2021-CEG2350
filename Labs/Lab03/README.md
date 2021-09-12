# Lab 03 - NOT FINALIZED

- [Lab Procedure](#Lab-Procedure)
- [Part 1 - Aliases](#Part-1---Aliases)
- [Part 2 - Create and edit a file](#Part-2---Create-and-edit-a-file)
- [Part 3 - Play with hidden files](#Part-3---Play-with-hidden-files)
- [Part 4 - Regular `bob`](#Part-4---Regular-bob)
- [Part 7 - `git` & GitHub](#Part-7---git-and-GitHub)
- [Extra Credit - Test your skills](#Extra-Credit---Test-your-skills)
- [Submission](#Submission)
- [Rubric](#Rubric)

## Lab Procedure

In your terminal, head to your repository (the folder named `ceg2350-yourgithubusername).

Create a new directory, `Lab03`

This lab will have you creating input files, scripts, and output files.  All of your work should be found here.

Same questions will need you to write anwers in `Lab03.md` the [LabTemplate.md is here](LabTemplate.md).
   - [Raw version of LabTemplate]()

For each part below, you will be asked to do an action or answer a question.  The actions are going to be commands - you will write the command you used as "answers" to the action requested.  You are allowed to use multiple commands to solve an action.  Just write down all that were needed to complete.  Check with the TAs if you need clarification.

If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later. 

It is expected that all parts are done on your AWS instance (the thing you `ssh` into).

## Part 1 - Aliases (2 pts)

1. On your **local** machine (not on AWS, do not `ssh` in), create an `alias` called `aws-ssh` that contains the command and parameters you have been using to log on to your AWS Educate system. Use an _absolute_ path to your key file in your command. Run your new `alias` to test it. **Why use an absolute path instead of a relative path?** (1 pt)

- You can do this in whatever local terminal you have.

2. Make your `alias` permanent for your user by editing the correct file for your terminal. **Write the alias** (1 pt)

- WSL2 / Linux Users: Create / edit `.bashrc` in your user's home directory.
- Mac Users: Create / edit `.bash_profile` OR `.zshrc` in your user's home directory.
   - `.zshrc` appears to be most accurate.  If one doesn't work try with the other name.
- MobaXTerm + CygUtils Users: Create / edit `.bash_profile` to store your aliases
- If you really mess up, there is a backup `.bashrc` file [here](.bashrc-backup).  You can copy and paste the contents.

## Part 2 - IO Redirection (2 pts)

1. Go to your AWS environment.
2. Go to your `Lab 03` folder.
4. Create a file called `input.txt` with the following contents:

```
9.1
43.7
2.2
62.1
2.1
9.3
43.5
4.6
44.6
4.7
42.7
47.4
46.6
4.5
55.6
4
9.2
66.6
2
2.3
```

5. Direct the file `input.txt` into the sort command. Write the command you used and the result of sucessfully running the command. (1 pt)
6. Direct the file `input.txt` into the sort command and direct the output to `output.txt`. Write the command you used and the result of sucessfully running the command. (1 pt)  
   **Useful commands: `man, vim, sort, <, >, >>`**  
   **Resources:**

- [An Intro to Linux IO Redirection](https://www.digitalocean.com/community/tutorials/an-introduction-to-linux-i-o-redirection)
- [IO Redirection](https://tldp.org/LDP/abs/html/io-redirection.html)

## Part 3 - Intro to Scripts (2 pts)

1. Create a bash script called `sorting-party`. The script should have the following features:

- Takes an argument of a filename. (1 pt)
- Sorts the contents of the file stored in the argument using the `sort` command.
- Outputs the sorted data to a file called `sorted.txt` (1 pt)
- Hint: To run your script you may need / want to play with the file permissions.  
   **Resources:**

- [Command Line Arguments in Shell Script](https://tecadmin.net/tutorial/bash-scripting/bash-command-arguments/)
- [Use Command Line Arguents in Bash Script](https://www.baeldung.com/linux/use-command-line-arguments-in-bash-script)
- [Positional Parameters](http://linuxcommand.org/lc3_wss0120.php)

## Part 4 - Intro to Regular Expressions (2 pts)

1. Add an if statement to your script that checks if the file in the argument ends in `.txt` (2 pts)

- If the file does **not** end in `.txt` your script should exit with an error message: `File format not allowed`  
**Resources:**

- [How to Use Regex in Bash](https://www.poftut.com/how-to-use-regular-expression-regex-in-bash-linux/)
- [Regex 101](https://regex101.com/)

## Part 5 - Updating the Git Repo (2 pts)

1. In `README.md`, add a usage guide for your script. (1 pts)
   - It is recommended (not required) to use markdown to make your `README.md` file look organized.
   - [markdown](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. Use `git` commands to `add`, `commit` and `push` the `Lab03` folder to GitHub.  Note that this does not require text in your write up - your repo itself will serve as documenation. (1 pts)

## Extra Credit: Colorize Me, Captian (0.5 pt)

Colorize the error condition from your script (`File format not allowed`).  Maybe go for traditional red?  How does purple make you feel?  Rainbow and plaid are also welcome to this party.

Make sure you `commit` and `push` your script changes for grading.

## Submission

- In the Pilot Dropbox, paste the URL to the `Lab03.md` file in your GitHub repo
    - URL should look like: https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME/blob/main/Lab03.md
