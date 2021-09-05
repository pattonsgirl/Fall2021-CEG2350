# Lab 2 - NOT FINALIZED

## Setup

This lab assumes that you have completed [Lab 01](../Lab01/README.md)

- Ubuntu AWS machine exists and you can `ssh` in to the system
- You have connected to your GitHub repository for this course
  - If you forgot to bookmark it, the URL is:
  - `https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME`
- You have cloned the repository to you Ubuntu AWS system

## Lab Procedure

**For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.  

1. `ssh` in to your AWS environment. 
   - If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
   - See [Remaking your AWS Educate environment](../../README.md) for instructions.
2. Go to the folder in which you cloned your Git repository for this course.
3. Create a directory called `Lab02`
4. In this directory, create a file called `README.md`
5. This `README.md` file is where you will put your answers to this lab. I recommend creating two connections to your Linux AWS system for ease of use.
   - At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email
```

**Useful commands: `man, mkdir, cd, ls, pwd, vim / nano`**

## TODO: Place GitHub setup up here?

## Lab Procedure:

For each part below, you will be asked to do an action or answer a question.  The actions are going to be commands - you will write the command you used as "answers" to the action requested.  You are allowed to use multiple commands to solve an action.  Just write down all that were needed to complete.  Check with the TAs if you need clarification.

```
Example:  
Prompt: Create a file named bubbles.txt
Answer: `touch bubbles.txt`
```

## Part 1: Play with directories & naming (3 pts)

Do this work in your AWS instance, in the folder you cloned from GitHub (Lab 01)  
   - If you were unsuccessful before, meet with the TAs and / or I
- **Useful commands for this part: `man, mkdir, cd, ls, pwd, mv`**

1. Create a folder named `Lab02`
2. In `Lab02`, create a directory called `DirA`
3. In `Lab02`, create a directory called `Dir B`
   - You must end up with a folder named `Dir B`
4. How do you go into `Dir B`?
5. Which of these uses a better naming convention, and why?
6. Rename `Dir B` to `DirB`


## Part 2: Create and edit a file (2 pt)

- **Useful commands for this part: `touch, vim`**

1. In `DirA`, create a file called `test.txt`
2. Put at least three lines of text in `test.txt` using `vim`  

## Part 3: Play with hidden files (3 pt)

- **Useful commands for this part: `cp, mv, ls`**

1. Make a copy of `test.txt` inside `DirA` named `.hiddentext.txt`
2. Write the command and flags needed to see the file in `DirA`

## Part 4: Regular bob

- **Useful commands for this part: `adduser, sudo, su, chown`**
1. Create a new user named `bob`
2. What is the path to `bob`'s `home` directory?
3. 


## Part 5: Get a crew

- **Useful commands for this part: `addgroup, chown, chgrp`**



## Part 5: [`sudo` make me a sandwich](https://xkcd.com/149/)

- **Useful commands for this part: `sudo`**

## Part 6: Test your skills

- **Useful commands for this part: All of the above!**

1. Create a file in `DirB` with the following permission set:  
   - `-rw-rw-rw- sally crew [size] [datetime] mydiary.txt`
   - where `[size]` and `[datetime]` are going to be unique for you
2. `sally` would like the file to be readable and writeable only by her.  Change the needed permissions to fix this.
3. Copy the new permission set listing and use it as the answer to this question.
4. `ubuntu` would like to edit `sally`'s `mydiary.txt` file, just to mess with her.  How can `ubuntu` do this without changing the permissions?
5. `bob` wants in on the joke to edit `sally`'s `mydiary.txt` file, just to mess with her.  How can `bob` do this without changing the permissions?

### Part 4: Play with permissions (5 pts)

1. What are the permission settings for user, group, and other of the files in `DirA`? What is the current  
   owner and group name?
2. Use `sudo` to make a copy of `test.txt` called `su-test.txt`
3. What are the permission settings for user, group, and other for `su-test.txt`? What is the current  
   owner and group name?
4. Can your user write to `su-test.txt`? If not, how can you write to the file without changing the permissions?
5. Change the file permissions so you can read and write to the file as your user (as in read / write without using `sudo`).  
   **Useful Commands: `chmod, chown, chgrp, ls, sudo, cp, cat`**



## `git` & GitHub (2 pts)

1. On your Ubuntu system we made on AWS (Lab01), go into the folder you cloned  
   **Useful Commands: `pwd, ls, cd`**
2. Create and open a file named `Lab02.md`  
   **Useful Commands: `vim`**
3. Check out the [Lab Template](LabTemplate.md)
  - View the [raw version of the Lab Template](https://raw.githubusercontent.com/pattonsgirl/Fall2021-CEG2350/main/Labs/Lab02/LabTemplate.md) 
4. Copy the format of the lab template and fill it in with your lab answers.
  - [Basic `vim` usage](https://www.howtoforge.com/vim-basics)
5. You have now made a new file, added some text to it, and (hopefully) made it look fancy... but how can we test this?
6. Use `git` commands to `add`, `commit` and `push` the file you made to GitHub.
  - If successful, when you go to the repository in your browser, you'll see `Lab02.md` as something you can click to view.
7. Now that you can see it, go back to your file and make tweaks if needed to fix the markdown.
  - Once you are done making changes, use `git` commands to `commit` and `push` the changes to GitHub - hitting refresh will show the updated version.


## Submission

- In the Pilot Dropbox, paste the URL to the `Lab02.md` file in your GitHub repo
    - URL should look like: https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME/blob/main/Lab02.md
