# Lab 03 - NOT FINALIZED

## Setup

This lab assumes that you have completed [Lab 01](../Lab01/README.md)

- Ubuntu AWS machine exists and you can `ssh` in to the system
- You have connected to your GitHub repository for this course
  - If you forgot to bookmark it, the URL is:
  - `https://github.com/WSU-kduncan/spring2021-ceg2350-YOURGITHUBUSERNAME`
- You have cloned the repository to you Ubuntu AWS system

## Lab Procedure

**For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.  
`ssh` in to your AWS environment. If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

1. Go to the folder in which you cloned your Git repository for this course.
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/` depending on your setup
2. Create a directory called `Lab03`
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab03` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab03` depending on your setup
3. In this directory, create a file called `README.md`
4. This `README.md` file is where you will put your answers to this lab. I recommend creating two connections to your Linux AWS so you can keep the `README.md` file open while you expirement with the lab.
   - At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

## Part 1: Aliases (2 pts)

1. On your **local** machine (not on AWS, do not `ssh` in), create an `alias` called `aws-ssh` that contains the command and parameters you have been using to log on to your AWS Educate system. Use an _absolute_ path to your key file in your command. Run your new `alias` to test it. **Why use an absolute path instead of a relative path?** (1 pt)

- You can do this in whatever local terminal you have.

2. Make your `alias` permanent for your user by editing the correct file for your terminal. **Write the alias** (1 pt)

- WSL2 / Linux Users: Create / edit `.bashrc` in your user's home directory.
- Mac Users: Create / edit `.bash_profile` OR `.zshrc` in your user's home directory.
   - `.zshrc` appears to be most accurate.  If one doesn't work try with the other name.
- MobaXTerm + CygUtils Users: Create / edit `.bash_profile` to store your aliases
- If you really mess up, there is a backup `.bashrc` file [here](.bashrc-backup).  You can copy and paste the contents.

## Part 2: IO Redirection (2 pts)

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

## Part 3: Intro to Scripts (2 pts)

1. Create a bash script called `sorting-party`. The script should have the following features:

- Takes an argument of a filename. (1 pt)
- Sorts the contents of the file stored in the argument using the `sort` command.
- Outputs the sorted data to a file called `sorted.txt` (1 pt)
- Hint: To run your script you may need / want to play with the file permissions.  
   **Resources:**

- [Command Line Arguments in Shell Script](https://tecadmin.net/tutorial/bash-scripting/bash-command-arguments/)
- [Use Command Line Arguents in Bash Script](https://www.baeldung.com/linux/use-command-line-arguments-in-bash-script)
- [Positional Parameters](http://linuxcommand.org/lc3_wss0120.php)

## Part 4: Intro to Regular Expressions (2 pts)

1. Add an if statement to your script that checks if the file in the argument ends in `.txt` (2 pts)

- If the file does **not** end in `.txt` your script should exit with an error message: `File format not allowed`  
**Resources:**

- [How to Use Regex in Bash](https://www.poftut.com/how-to-use-regular-expression-regex-in-bash-linux/)
- [Regex 101](https://regex101.com/)

## Part 5: Updating the Git Repo (2 pts)

1. In `README.md`, add a usage guide for your script. (1 pts)
   - It is recommended (not required) to use markdown to make your `README.md` file look organized.
   - [markdown](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. Use `git` commands to `add`, `commit` and `push` the `Lab03` folder to GitHub.  Note that this does not require text in your write up - your repo itself will serve as documenation. (1 pts)

## Extra Credit: Colorize Me, Captian (0.5 pt)

Colorize the error condition from your script (`File format not allowed`).  Maybe go for traditional red?  How does purple make you feel?  Rainbow and plaid are also welcome to this party.

Make sure you `commit` and `push` your script changes for grading.

## Submission

In your GitHub repository, select the green `Code` button then select `Download ZIP`. Upload this zip file to the Pilot Dropbox.

In the `Comment` area in the Pilot Dropbox, copy URL / link to the repository corresponding to the project your are submitting.
